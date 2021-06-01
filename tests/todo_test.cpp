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
    QCOMPARE(writeData, check.at(1));
}

void todo_test::edit_csv()
{
    ToDoFile be;
    QString filePath = QDir::currentPath() + "/base.csv";
    QStringList editData
            = {"Сделано",
               "Нет",
               "Высокий",
               "2021-05-23T15:37:55",
               "тестируем редактирование"};
    QString created = "2021-05-23T15:37:55";
    QList<QStringList> check;
    QCOMPARE(be.edit_csv(filePath, editData, created, ";", "\""), 1);
    be.read_csv(filePath, &check, ";", "\"");
    QCOMPARE(editData, check.at(1));
}

void todo_test::read_csv()
{
    ToDoFile be;
    QString filePath = QDir::currentPath() + "/base.csv";
    QList<QStringList> readData;
    QList<QStringList> check
            = {{"Сделано",
                "Нет",
                "Высокий",
                "2021-05-23T15:37:55",
                "тестируем редактирование"}};
    QCOMPARE(be.read_csv(filePath, &readData, ";", "\""), 1);
    QCOMPARE(readData[1], check.at(0));
}

void todo_test::delete_note()
{
    ToDoFile be;
    QString filePath = QDir::currentPath() + "/base.csv";
    QString created = "2021-05-23T15:37:55";
    QCOMPARE(be.delete_note(filePath, created, ";", "\""), 1);
}

void todo_test::IsContained()
{
    ToDoFile be;
    QStringList data
            = {"Не сделано", "Нет", "Низкий", "2021-05-31T14:47:16", "test"};
    QVector<QString> flags = {"Раньше", "Высокий", "Сделано"};
    QCOMPARE(be.IsContained(flags, data), false);
    QVector<QString> flags1 = {"Раньше", "Низкий", "Не сделано"};
    QCOMPARE(be.IsContained(flags1, data), true);
}

void todo_test::createSort()
{
    ToDoFile be;
    QString flag = "Раньше";
    QString data1 = "2021-05-23T15:37:55";
    QString data2 = "2021-05-31T14:47:16";
    QCOMPARE(be.createSort(flag, data1, data2), false);
    flag = "Позже";
    QCOMPARE(be.createSort(flag, data1, data2), true);
}

void todo_test::sort()
{
    ToDoFile be;
    QVector<QString> flags = {"Позже", "Низкий", "Сделано"};
    QList<QStringList> data
            = {{"Не сделано", "Нет", "Низкий", "2021-05-31T14:47:16", "test"},
               {"Не сделано",
                "2021-06-29T21:15:03",
                "Высокий",
                "2021-05-24T15:30:59",
                "тестируем редактирование"},
               {"Сделано",
                "2021-05-31T14:47:16",
                "Высокий",
                "2021-05-23T15:37:55",
                "тестируем редактирование"}};

    QList<QStringList> sortData
            = {{"Не сделано", "Нет", "Низкий", "2021-05-31T14:47:16", "test"},
               {"Не сделано",
                "2021-06-29T21:15:03",
                "Высокий",
                "2021-05-24T15:30:59",
                "тестируем редактирование"},
               {"Сделано",
                "2021-05-31T14:47:16",
                "Высокий",
                "2021-05-23T15:37:55",
                "тестируем редактирование"}};
    data = be.sort(flags, data);
    QCOMPARE(data, sortData);
}

void todo_test::sortByStr()
{
    ToDoFile be;
    QVector<QString> flags = {"Позже", "Низкий", "Сделано"};
    QList<QStringList> data
            = {{"Не сделано", "Нет", "Низкий", "2021-05-31T14:47:16", "test"},
               {"Сделано",
                "2021-05-31T14:47:16",
                "Высокий",
                "2021-05-23T15:37:55",
                "тестируем редактирование"},
               {"Не сделано",
                "2021-06-29T21:15:03",
                "Высокий",
                "2021-05-24T15:30:59",
                "тестируем редактирование"}};

    QList<QStringList> sortData
            = {{"Не сделано", "Нет", "Низкий", "2021-05-31T14:47:16", "test"},
               {"Не сделано",
                "2021-06-29T21:15:03",
                "Высокий",
                "2021-05-24T15:30:59",
                "тестируем редактирование"},
               {"Сделано",
                "2021-05-31T14:47:16",
                "Высокий",
                "2021-05-23T15:37:55",
                "тестируем редактирование"}};
    data = be.sortByStr(flags, data);
    QCOMPARE(data, sortData);
}

void todo_test::sortByDeadline()
{
    ToDoFile be;
    QList<QStringList> data
            = {{"Status", "Deadline", "Priority", "Created", "Text"},
               {"Не сделано", "Нет", "Низкий", "2021-05-31T14:47:16", "test"},
               {"Не сделано",
                "2021-06-29T21:15:03",
                "Высокий",
                "2021-05-24T15:30:59",
                "тестируем редактирование"},
               {"Сделано",
                "2021-05-31T14:47:16",
                "Высокий",
                "2021-05-23T15:37:55",
                "тестируем редактирование"}};

    QList<QStringList> sortData
            = {{"Status", "Deadline", "Priority", "Created", "Text"},
               {"Сделано",
                "2021-05-31T14:47:16",
                "Высокий",
                "2021-05-23T15:37:55",
                "тестируем редактирование"},
               {"Не сделано",
                "2021-06-29T21:15:03",
                "Высокий",
                "2021-05-24T15:30:59",
                "тестируем редактирование"},
               {"Не сделано", "Нет", "Низкий", "2021-05-31T14:47:16", "test"}};

    data = be.sortByDeadline(data);
    QCOMPARE(data, sortData);
}
