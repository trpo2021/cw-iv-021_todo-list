
#include "note.h"
#include <QtWidgets>
Note::Note(QWidget* parent) : QDialog(parent)
{
    setupUi(this);
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
    QString deadline_str, prior, status, created, note_text;
    QDateTime ddt, cdt;
    if (deadline->currentIndex() == 0) {
        deadline_str = "0";
    } else {
        ddt = dead_time->dateTime();
        deadline_str = ddt.toString(Qt::ISODate);
    }
    status = "0";
    int index = priority->currentIndex();
    prior = (QString::number(index));
    cdt = QDateTime::currentDateTime();
    created = cdt.toString(Qt::ISODate);
    note_text = textEdit->toPlainText();

    QStringList notedat;
    notedat << status << deadline_str << prior << created << note_text;
    QtCSV::StringData strDat;
    strDat.addRow(notedat);
    QString filePath = QDir::currentPath() + "/base.csv";
    QtCSV::Writer::write(
            filePath,
            strDat,
            ";",
            "\"",
            QtCSV::Writer::WriteMode::APPEND,
            QStringList(),
            QStringList(),
            QTextCodec::codecForName("UTF-8"));
    priority->setCurrentIndex(0);
    deadline->setCurrentIndex(0);
    dead_time->setDateTime(
            QDateTime::fromString("2000-01-01T00:00:00", Qt::ISODate));
    dead_time->setEnabled(false);
    textEdit->setText("");
    saveButton->setEnabled(false);
}
void Note::on_deadline_currentIndexChanged(int index)
{
    if (index == 1) {
        dead_time->setEnabled(true);
    } else {
        dead_time->setEnabled(false);
    }
}
