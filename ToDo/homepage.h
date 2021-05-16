#ifndef HOMEPAGE_H
#define HOMEPAGE_H

#include <QDialog>
#include "mainmenu.h"
#include "note.h"
class Homepage : public QDialog, public Ui::mainMenu
{
    Q_OBJECT
public:
    Homepage(QWidget *parent = 0);
signals:
    void redact_me(QStringList data);
public slots:
    void take_info(int row,int col);
private slots:
    void on_searchLine_textChanged();
    void on_create_clicked();


};

#endif // HOMEPAGE_H
