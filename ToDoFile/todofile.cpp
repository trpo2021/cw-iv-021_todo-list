#include "todofile.h"
#include "qtcsv/reader.h"
#include "qtcsv/stringdata.h"
#include "qtcsv/variantdata.h"
#include "qtcsv/writer.h"
#include <QDate>
#include <QDebug>
#include <QString>

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

bool ToDoFile::IsContained(QVector<QString> flags, QStringList data)
{
    bool check = true;
    for (int i = 1; i < flags.size(); i++) {
        if (data.contains(flags[i])) {
            check = true;
        } else {
            check = false;
            return check;
        }
    }
    return check;
}

bool ToDoFile::createSort(QString flag, QString str1, QString str2)
{
    QDateTime cdt1, cdt2;

    if (flag == "Раньше") {
        cdt1 = QDateTime::fromString(str1, Qt::ISODate);
        cdt2 = QDateTime::fromString(str2, Qt::ISODate);
        if (cdt1 > cdt2) {
            return true;
        }
    } else if (flag == "Позже") {
        cdt1 = QDateTime::fromString(str1, Qt::ISODate);
        cdt2 = QDateTime::fromString(str2, Qt::ISODate);
        if (cdt1 < cdt2) {
            return true;
        }
    }
    return false;
}

QList<QStringList>
ToDoFile::sort(QVector<QString> flags, QList<QStringList> data)
{
    for (int i = flags.size() - 1; i > 0; i--) {
        data = sortByStr(flags, data);
        flags.pop_back();
    }
    return data;
}

QList<QStringList>
ToDoFile::sortByStr(QVector<QString> flag, QList<QStringList> data)
{
    for (int i = 1; i < data.size(); i++) {
        for (int j = 1; j < data.size() - 1; j++) {
            if (IsContained(flag, data[j + 1])
                && (!(IsContained(flag, data[j])))) {
                data[j].swap(data[j + 1]);
            } else if (
                    (!(IsContained(flag, data[j + 1])))
                    && (IsContained(flag, data[j]))) {
                continue;
            } else {
                if (createSort(flag[0], data[j][3], data[j + 1][3])) {
                    data[j].swap(data[j + 1]);
                }
            }
        }
    }
    return data;
}

QList<QStringList> ToDoFile::sortByDeadline(QList<QStringList> data)
{
    QDateTime cdt1, cdt2;

    for (int i = 1; i < data.size(); i++) {
        for (int j = 1; j < data.size() - 1; j++) {
            if ((data[j][1] == "Нет") && (data[j + 1][1] != "Нет")) {
                data[j].swap(data[j + 1]);
            }
            if ((data[j][1] != "Нет") && (data[j + 1][1] != "Нет")) {
                cdt1 = QDateTime::fromString(data[j][1], Qt::ISODate);
                cdt2 = QDateTime::fromString(data[j + 1][1], Qt::ISODate);
                if ((QDateTime::currentDateTime().daysTo(cdt2)
                     < QDateTime::currentDateTime().daysTo(cdt1))
                    && (QDateTime::currentDateTime().daysTo(cdt2) < 7)) {
                    data[j].swap(data[j + 1]);
                }
            }
        }
    }
    return data;
}
