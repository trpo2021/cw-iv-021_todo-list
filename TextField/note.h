#ifndef NOTE_H
#define NOTE_H

#include "ui_note.h"
#include <QDialog>

class Note : public QDialog, public Ui_Form {
    Q_OBJECT
public:
    Note(QWidget* parent = 0);
private slots:
    void on_textEdit_textChanged();
    void on_deadline_currentIndexChanged(int index);
};

#endif // NOTE_H
