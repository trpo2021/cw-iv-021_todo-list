#ifndef NOTE_H
#define NOTE_H

#include "ui_note.h"
#include <QDialog>
#include <todofile.h>
#include <QDebug>
class Note : public QDialog, public Ui_Form {
    Q_OBJECT
public:
    Note(QWidget* parent = 0);
    bool redact_state = false;
    bool dead_state = false;
public slots:
    void redact(QStringList data);
private:
    ToDoFile WriteEdit;
    QString created;
    
        };


private slots:
    void on_textEdit_textChanged();
    void on_saveButton_clicked();
    void on_delButton_clicked();
    void on_deadline_currentIndexChanged(int index);
    void on_backButton_clicked();


};

#endif // NOTE_H
