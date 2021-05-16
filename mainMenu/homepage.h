#ifndef HOMEPAGE_H
#define HOMEPAGE_H

#include <QDialog>
#include "mainmenu.h"

class Homepage : public QDialog, public Ui::mainMenu
{
    Q_OBJECT
public:
    Homepage(QWidget *parent = 0);

private slots:
    void on_lineEdit_textChanged();
};

#endif // HOMEPAGE_H
