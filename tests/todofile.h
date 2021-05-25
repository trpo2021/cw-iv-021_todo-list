#ifndef TODOFILE_H
#define TODOFILE_H
#include <QString>
#include <QObject>
#include "qtcsv/stringdata.h"
#include "qtcsv/variantdata.h"
#include "qtcsv/writer.h"
#include "qtcsv/reader.h"
class ToDoFile : public QObject
{
    Q_OBJECT
public:
    ToDoFile(QObject *parent = 0);
    int write_csv(QString filepath,QStringList data,QString sep,QString delim);
    int edit_csv(QString filepath,QStringList data,QString created,QString sep,QString delim);
    int read_csv(QString filepath,QList<QStringList>* readData,QString sep,QString delim);
    int delete_note(QString filepath,QString created,QString sep,QString delim);
};

#endif // TODOFILE_H
