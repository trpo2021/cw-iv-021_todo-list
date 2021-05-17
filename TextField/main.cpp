#include "note.h"
#include <QApplication>
#include <QLabel>
int main(int argc, char* argv[])
{
    QApplication a(argc, argv);
    Note* dialog = new Note;
    dialog->show();
    return a.exec();
}
