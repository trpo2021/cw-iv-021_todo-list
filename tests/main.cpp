#include "todo_test.h"
#include <QApplication>
#include <QTest>
#include <cstdio>
#include <cstdlib>
#include <iostream>

int main(int argc, char* argv[])
{
    QTest::qExec(new todo_test, argc, argv);
    return 0;
}
