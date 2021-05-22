#ifndef NOTE_H
#define NOTE_H

#include "ui_note.h"
//#include "homepage.h"
#include <QDialog>
#include "qtcsv/reader.h"

class Note : public QDialog, public Ui_Form {
    Q_OBJECT
public:
    Note(QWidget* parent = 0);
    bool redact_state = false;
    bool dead_state = false;
public slots:
    void redact(QStringList data);
private:
    QString created;
    class EditProcessor : public QtCSV::Reader::AbstractProcessor
        {
        public:
            QList< QStringList > data;
            QString created;
            QString edStr;
            virtual void preProcessRawLine(QString& line)
            {
                if (line.contains(created))
                {
                    line = edStr;
                }
            }

            virtual bool processRowElements(const QStringList& elements)
            {

                data.push_back(QStringList(elements));
                return true;
            }
        };


private slots:
    void on_textEdit_textChanged();
    void on_saveButton_clicked();
    void on_deadline_currentIndexChanged(int index);
    void on_backButton_clicked();

};

#endif // NOTE_H
