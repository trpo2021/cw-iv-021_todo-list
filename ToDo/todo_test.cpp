#include <QDir>
#include <QTest>
#include "todo_test.h"
#include "todofile.h"

todo_test::todo_test(QObject *parent) :
    QObject(parent)
{
}

void todo_test::write_csv()
{
    ToDoFile be;
    QString filePath = QDir::currentPath() + "/base.csv";
    QStringList readData = {"Не сделано","Нет","Низкий","2021-05-23T15:37:55","тест"};
    QCOMPARE(be.write_csv(filePath, readData,";", "\""), 1);
}

void todo_test::edit_csv()
{
    ToDoFile be;
    QString filePath = QDir::currentPath() + "/base.csv";
    QStringList readData = {"Не сделано","Нет","Низкий","2021-05-23T15:37:55","тест"};
    QString rewriteData;
    QCOMPARE(be.edit_csv(filePath, readData, rewriteData, ";", "\""), 1);
}
