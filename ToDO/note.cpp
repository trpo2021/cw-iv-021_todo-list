
#include <QDate>
#include <QDebug>
#include <QDir>
#include <QTextStream>
#include <QtWidgets>

#include <QDir>
#include <QList>
#include <QStringList>

#include "note.h"
#include "qtcsv/reader.h"
#include "qtcsv/stringdata.h"
#include "qtcsv/variantdata.h"
#include "qtcsv/writer.h"
#include "homepage.h"
Note::Note(QWidget* parent) : QDialog(parent)
{
    setupUi(this);
    this->setWindowFlags(Qt::WindowTitleHint);
    this->setAttribute(Qt::WA_DeleteOnClose,true);


}
void Note::on_textEdit_textChanged()
{
    QString str = textEdit->toPlainText();
    if (str != "") {
        saveButton->setEnabled(true);
    } else {
        saveButton->setEnabled(false);
    }
}
void Note::on_saveButton_clicked()
{
    QString deadline_str, prior, status, note_text;
    QDateTime ddt, cdt;
    if (deadline->currentIndex() == 0) {
        deadline_str = "Нет";
    } else {
        ddt = dead_time->dateTime();
        deadline_str = ddt.toString(Qt::ISODate);
    }
    status = "Не сделано";
    int index = priority->currentIndex();
    prior = index > 0?"Высокий":"Низкий";
    cdt = QDateTime::currentDateTime();

    note_text = textEdit->toPlainText();
    QString filePath = QDir::currentPath() + "/base.csv";
    if (redact_state == false){
        created = cdt.toString(Qt::ISODate);
        QStringList notedat;
        notedat << status << deadline_str << prior << created << note_text;
        QtCSV::StringData strDat;
        strDat.addRow(notedat);

        QtCSV::Writer::write(
               filePath,
               strDat,
               ";",
               "\"",
               QtCSV::Writer::WriteMode::APPEND,
               QStringList(),
               QStringList(),
               QTextCodec::codecForName("UTF-8"));
    }else if(redact_state == true){

        EditProcessor processor;
        QString filePath = QDir::currentPath() + "/base.csv";
        if (false == QtCSV::Reader::readToProcessor(filePath, processor))
            {
                qDebug() << "Failed to read file";
                return;
            }
        QFile file("base.csv");
        file.open(QIODevice::WriteOnly|QIODevice::Text);
        QTextStream writeStream(&file);
        writeStream.setCodec("UTF-8");
        for ( int i = 0; i < processor.data.size(); ++i )
            {
                qDebug() << created;
                if (processor.data.at(i).join(",").contains(created)== true){
                    QString edStr = status +";"+deadline_str +";"+
                            prior +";"+created +";"+note_text+"\n";
                    writeStream<<edStr;
                }else{
                    writeStream<<processor.data.at(i).join(",")<<"\n";
                }
            }
        file.close();

    }

    priority->setCurrentIndex(0);
    deadline->setCurrentIndex(0);
    dead_time->setDateTime(
                QDateTime::fromString("2000-01-01T00:00:00", Qt::ISODate));
    dead_time->setEnabled(false);
    textEdit->setText("");
    saveButton->setEnabled(false);

}
void Note::redact(QStringList data){
    redact_state = true;

    if(!(data[1] == "Нет")){
        deadline->setCurrentIndex(1);
        dead_time->setDateTime(
                    QDateTime::fromString(data[1], Qt::ISODate));
       }
    if (data[2]=="Высокий"){
        priority->setCurrentIndex(1);
    }
    created = data[3];
    textEdit->setText(data[4]);
}

void Note::on_deadline_currentIndexChanged(int index)
{
    if ((index == 1)||(dead_state == true)) {
        dead_time->setEnabled(true);
    } else {
        dead_time->setEnabled(false);
    }
}

void Note:: on_backButton_clicked(){
    Homepage *Main = new Homepage;
    this->close();
    Main->show();
}