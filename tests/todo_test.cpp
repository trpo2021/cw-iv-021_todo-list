#include "todo_test.h"
#include <QDir>
#include <QTest>
#include <todofile.h>

todo_test::todo_test(QObject* parent) : QObject(parent)
{
}

void todo_test::write_csv()
{
    ToDoFile be;
    QString filePath = QDir::currentPath() + "/base.csv";
    QStringList readData
            = {"Не сделано", "Нет", "Низкий", "2021-05-23T15:37:55", "тест"};
    QCOMPARE(be.write_csv(filePath, readData, ";", "\""), 1);
}

/*void todo_test::edit_csv()
{
    ToDoFile be;
    QString filePath = QDir::currentPath() + "/base.csv";
    QStringList readData
            = {"Не сделано", "Нет", "Низкий", "2021-05-23T15:37:55", "тест"};
    QString rewriteData;
    QCOMPARE(be.edit_csv(filePath, readData, rewriteData, ";", "\""), 1);
}*/
void todo_test::read_csv()
{
    ToDoFile be;
    QString filePath = QDir::currentPath() + "/base.csv";
    QList<QStringList> readData; /* = QtCSV::Reader::readToList(
             filePath, ";", "\"", QTextCodec::codecForName("UTF-8"));*/
    QCOMPARE(be.read_csv(filePath, &readData, ";", "\""), 1);
}

/*void todo_test::delete_note()
{
    ToDoFile be;
    QString filePath = QDir::currentPath() + "/base.csv";
    QString created;
    QCOMPARE(be.delete_note(filePath, created, ";", "\""), 1);
}*/
