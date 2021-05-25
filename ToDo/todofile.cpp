#include "todofile.h"
#include "qtcsv/writer.h"
#include <QDebug>
ToDoFile::ToDoFile(QObject *parent) : QObject(parent)
{
}
int ToDoFile::write_csv(QString filepath, QStringList data, QString sep, QString delim){
    QtCSV::StringData strDat;
    strDat.addRow(data);
    if(QtCSV::Writer::write(
                   filepath,
                   strDat,
                   sep,
                   delim,
                   QtCSV::Writer::WriteMode::APPEND,
                   QStringList(),
                   QStringList(),
                QTextCodec::codecForName("UTF-8"))){
        return 1;
    }
    return 0;
}
int ToDoFile::edit_csv(QString filepath, QStringList data, QString created, QString sep, QString delim){
    QList<QStringList> readData = QtCSV::Reader::readToList(filepath,sep,delim,QTextCodec::codecForName("UTF-8"));
    if (readData.size()==0)
    {
        return 0;
    }

    QtCSV::StringData strData;
    for (int i = 0; i < readData.size();i++){
        if(readData.at(i).contains(created)){
           readData[i].swap(data);

        }
        strData.addRow(readData[i]);
    }
    if(!(QtCSV::Writer::write(
                   filepath,
                   strData,
                   sep,
                   delim,
                   QtCSV::Writer::WriteMode::REWRITE,
                   QStringList(),
                   QStringList(),
                QTextCodec::codecForName("UTF-8")))){
        return 0;
    }
    return 1;
}
int ToDoFile::read_csv(QString filepath, QList<QStringList> *readData, QString sep, QString delim){
     *readData = QtCSV::Reader::readToList(filepath,sep,delim,QTextCodec::codecForName("UTF-8"));
    if (readData->size()>0){
        return 1;
    }return 0;
}
int ToDoFile::delete_note(QString filepath,QString created, QString sep, QString delim){

    QList<QStringList> NewData;
    if(read_csv(filepath,&NewData,sep,delim) == 0){
        qDebug() << "Failed to read file";
        return  0;
    }
    QtCSV::StringData strData;
    for (int i = 0; i < NewData.size();i++){
        if(NewData.at(i).contains(created)){
            continue;
        }else{
            strData.addRow(NewData[i]);
        }
      }
      if(!(QtCSV::Writer::write(
               filepath,
               strData,
               sep,
               delim,
               QtCSV::Writer::WriteMode::REWRITE,
               QStringList(),
               QStringList(),
               QTextCodec::codecForName("UTF-8")))){
            return 0;
        }
        return 1;
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
