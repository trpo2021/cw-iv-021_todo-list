#include "homepage.h"
#include <QApplication>

int main(int argc, char* argv[])
{
    QApplication app(argc, argv);
    Homepage* dialog = new Homepage;
    dialog->show();
    return app.exec();
}
