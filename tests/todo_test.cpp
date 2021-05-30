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
    QStringList writeData
            = {"Не сделано", "Нет", "Низкий", "2021-05-23T15:37:55", "тест"};
    QList<QStringList> check;
    QCOMPARE(be.write_csv(filePath, writeData, ";", "\""), 1);
    be.read_csv(filePath, &check, ";", "\"");
    QCOMPARE(writeData, check.at(0));
}

void todo_test::edit_csv()
{
    ToDoFile be;
    QString filePath = QDir::currentPath() + "/base.csv";
    QStringList editData
            = {"Сделано", "Нет", "Высокий", "2021-05-23T15:37:55", "тестируем редактирование"};
    QString created = "2021-05-23T15:37:55";
    QList<QStringList> check;
    QCOMPARE(be.edit_csv(filePath, editData, created, ";", "\""), 1);
    be.read_csv(filePath, &check, ";", "\"");
   // qDebug()<<check.at(0);
    QCOMPARE(editData, check.at(0));
}

void todo_test::read_csv()
{
    ToDoFile be;
    QString filePath = QDir::currentPath() + "/base.csv";
    QList<QStringList> readData; /* = QtCSV::Reader::readToList(
             filePath, ";", "\"", QTextCodec::codecForName("UTF-8"));*/
    QList<QStringList> check = {{"Сделано", "Нет", "Высокий", "2021-05-23T15:37:55", "тестируем редактирование"}};
    qDebug()<<readData;
    QCOMPARE(be.read_csv(filePath, &readData, ";", "\""), 1);
    QCOMPARE(readData, check);
    qDebug()<<readData;
}

void todo_test::delete_note()
{
    ToDoFile be;
    QString filePath = QDir::currentPath() + "/base.csv";
    QString created = "2021-05-23T15:37:55";
    QCOMPARE(be.delete_note(filePath, created, ";", "\""), 1);
}
