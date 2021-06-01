#ifndef TODOFILE_H
#define TODOFILE_H
#include <QString>

class ToDoFile {
public:
    ToDoFile();
    int
    write_csv(QString filepath, QStringList data, QString sep, QString delim);
    int edit_csv(
            QString filepath,
            QStringList data,
            QString created,
            QString sep,
            QString delim);
    int read_csv(
            QString filepath,
            QList<QStringList>* readData,
            QString sep,
            QString delim);
    int
    delete_note(QString filepath, QString created, QString sep, QString delim);
    bool createSort (QString flag, QString str1, QString str2);
    QList <QStringList> sort(QVector<QString> flags,QList<QStringList> data);
    QList<QStringList> sortByDeadline(QString flag,QList<QStringList> data);
    QList<QStringList> sortByStr(QVector <QString> flag,QList<QStringList> data);


};
#endif // TODOFILE_H
