#include <QApplication>
#include "homepage.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    Homepage *dialog = new Homepage;
    dialog->show();
    return app.exec();
}
