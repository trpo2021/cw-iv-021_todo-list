#include <QApplication>
#include <QLabel>
#include "note.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Note *dialog = new Note;
    dialog->show();
    return a.exec();
}
