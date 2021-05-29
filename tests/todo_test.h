#ifndef TODO_TEST_H
#define TODO_TEST_H

#include <QObject>

class todo_test : public QObject
{
    Q_OBJECT
public:
    todo_test(QObject *parent = 0);

private slots:
    void write_csv();
    //void edit_csv();
    void read_csv();
    /*void delete_note();*/
};

#endif // TODO_TEST_H
