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

public slots:
    void redact(QString data);
private:
    QString created;
    class RevertProcessor : public QtCSV::Reader::AbstractProcessor
        {
        public:
            QList< QStringList > data;

            virtual void preProcessRawLine(QString& line)
            {
                if (line.isEmpty())
                {
                    line = "Say 'No' to empty lines!";
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
