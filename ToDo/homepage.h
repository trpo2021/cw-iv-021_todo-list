#ifndef HOMEPAGE_H
#define HOMEPAGE_H

#include <QDialog>
#include <QTimer>
#include "ui_main.h"
#include <todofile.h>
class Homepage : public QDialog, public Ui::mainMenu{
    Q_OBJECT
public:
    Homepage(QWidget *parent = 0);
    ToDoFile Read;
    QList<QStringList> readData;
    QVector<QString> flags;

signals:
    void redact_me(QStringList data);
public slots:
    void take_info(int row,int col);
private:
    QTimer *timer;

private slots:
    void on_searchLine_textChanged();
    void on_create_clicked();
    void update_table_ui(QList<QStringList> readData);
    void deadlineChecked();
    void on_priority_currentIndexChanged(int index);
    void on_time_currentIndexChanged(int index);
    void on_status_currentIndexChanged(int index);
};

#endif // HOMEPAGE_H
