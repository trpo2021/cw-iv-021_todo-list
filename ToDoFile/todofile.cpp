#include "todofile.h"
#include "qtcsv/reader.h"
#include "qtcsv/stringdata.h"
#include "qtcsv/variantdata.h"
#include "qtcsv/writer.h"
#include <QDebug>
#include <QString>
#include <QDate>

ToDoFile::ToDoFile()
{
}
int ToDoFile::write_csv(
        QString filepath, QStringList data, QString sep, QString delim)
{
    QtCSV::StringData strDat;
    strDat.addRow(data);
    if (QtCSV::Writer::write(
                filepath,
                strDat,
                sep,
                delim,
                QtCSV::Writer::WriteMode::APPEND,
                QStringList(),
                QStringList(),
                QTextCodec::codecForName("UTF-8"))) {
        return 1;
    }
    return 0;
}
int ToDoFile::edit_csv(
        QString filepath,
        QStringList data,
        QString created,
        QString sep,
        QString delim)
{
    QList<QStringList> readData;
    read_csv(filepath, &readData, sep, delim);
    if (readData.size() == 0) {
        return 0;
    }

    QtCSV::StringData strData;
    for (int i = 0; i < readData.size(); i++) {
        if (readData.at(i).contains(created)) {
            readData[i].swap(data);
        }
        strData.addRow(readData[i]);
    }
    if (!(QtCSV::Writer::write(
                filepath,
                strData,
                sep,
                delim,
                QtCSV::Writer::WriteMode::REWRITE,
                QStringList(),
                QStringList(),
                QTextCodec::codecForName("UTF-8")))) {
        return 0;
    }
    return 1;
}
int ToDoFile::read_csv(
        QString filepath,
        QList<QStringList>* readData,
        QString sep,
        QString delim)
{
    *readData = QtCSV::Reader::readToList(
            filepath, sep, delim, QTextCodec::codecForName("UTF-8"));
    if (readData->size() > 0) {
        return 1;
    }
    return 0;
}
int ToDoFile::delete_note(
        QString filepath, QString created, QString sep, QString delim)
{
    QList<QStringList> NewData;
    if (read_csv(filepath, &NewData, sep, delim) == 0) {
        qDebug() << "Failed to read file";
        return 0;
    }
    QtCSV::StringData strData;
    for (int i = 0; i < NewData.size(); i++) {
        if (NewData.at(i).contains(created)) {
            continue;
        } else {
            strData.addRow(NewData[i]);
        }
    }
    if (!(QtCSV::Writer::write(
                filepath,
                strData,
                sep,
                delim,
                QtCSV::Writer::WriteMode::REWRITE,
                QStringList(),
                QStringList(),
                QTextCodec::codecForName("UTF-8")))) {
        return 0;
    }
    return 1;
}

QList <QStringList> ToDoFile::sort(QVector<QString> flags,QList<QStringList> data){
    for (int i = 0; i < flags.size();i++){
        if (((flags[i] == "Раньше")||(flags[i] == "Позже"))||(flags[i] == "Дедлайн")){
            data = sortByTime(flags[i],data);
        }else{
            data = sortByStr(flags[i], data);
        }
    }
    return  data;
}
QList <QStringList> ToDoFile::sortByStr(QString flag,QList<QStringList> data){
    for(int i = 1; i < data.size(); i++){
        for(int j = 1; j < data.size() - 1; j ++ ){
            if (data[j+1].contains(flag)&&(!(data[j].contains(flag)))){
                data[j].swap(data[j+1]);
            }
        }
    }
    return  data;
}
QList <QStringList> ToDoFile::sortByTime(QString flag, QList<QStringList> data){
    QDateTime now = QDateTime::currentDateTime();
    QDateTime cdt1, cdt2;

    for(int i = 1; i < data.size(); i++){
       for(int j = 1; j < data.size() - 1; j ++ ){
           if (flag == "Раньше"){
               cdt1 = QDateTime::fromString(data[j][3], Qt::ISODate);
               cdt2 = QDateTime::fromString(data[j+1][3], Qt::ISODate);
               if (cdt1 > cdt2){
                 data[j].swap(data[j+1]);
             }
           } else if (flag == "Позже"){
               cdt1 = QDateTime::fromString(data[j][3], Qt::ISODate);
               cdt2 = QDateTime::fromString(data[j+1][3], Qt::ISODate);
               if (cdt1 < cdt2){
                 data[j].swap(data[j+1]);
              }
           }
           else if (flag == "Дедлайн"){
                if ((data[j][1] == "Нет")&&(data[j+1][1] != "Нет")){
                    data[j].swap(data[j+1]);
                }
                if ((data[j][1] != "Нет")&&(data[j+1][1] != "Нет")){
                    cdt1 = QDateTime::fromString(data[j][1], Qt::ISODate);
                    cdt2 = QDateTime::fromString(data[j+1][1], Qt::ISODate);
                    if ((QDateTime::currentDateTime().daysTo(cdt2) < QDateTime::currentDateTime().daysTo(cdt1))&&(QDateTime::currentDateTime().daysTo(cdt2) < 7)){
                        data[j].swap(data[j+1]);
                    }
                }
           }
        }
      }
    return  data;
}
/*DeleteProcessor OldData;
OldData.created = created;
if (false == QtCSV::Reader::readToProcessor(filepath, OldData))
    {
        qDebug() << "Failed to read file";
        return 0;
    }
QtCSV::StringData New;
for (int i = 0; i < OldData.data.size();i++){
    if (OldData.data.at(i).contains("0\n")){
        continue;
    }else{
        New.addRow()
    }
}*/
