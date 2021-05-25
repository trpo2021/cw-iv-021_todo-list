#include "todo_test.h"
#include <QApplication>
#include <QTest>
#include <cstdio>
#include <cstdlib>
#include <iostream>

int main(int argc, char* argv[])
{
    QApplication a(argc, argv);
    QTest::qExec(new todo_test, argc, argv);
    return 0;
}
