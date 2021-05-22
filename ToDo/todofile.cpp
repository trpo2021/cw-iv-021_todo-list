#include "todofile.h"

ToDoFile::ToDoFile()
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
    }else{
        return 0;
    }
}
