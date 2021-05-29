#ifndef TODOFILE_H
#define TODOFILE_H
#include <QString>
#include "thirdparty/qtcsv/stringdata.h"
#include "thirdparty/qtcsv/variantdata.h"
#include "thirdparty/qtcsv/writer.h"
#include "thirdparty/qtcsv/reader.h"
class ToDoFile
{
public:
    ToDoFile();
    int write_csv(QString filepath,QStringList data,QString sep,QString delim);
    int edit_csv(QString filepath,QStringList data,QString created,QString sep,QString delim);
    int read_csv(QString filepath,QList<QStringList>* readData,QString sep,QString delim);
    int delete_note(QString filepath,QString created,QString sep,QString delim);
};

#endif // TODOFILE_H
