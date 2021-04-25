#ifndef NOTE_H
#define NOTE_H

#include <QDialog>
#include "ui_note.h"

class Note:public QDialog, public Ui_Form
{
    Q_OBJECT
public:
    Note(QWidget *parent = 0);
};

#endif // NOTE_H
