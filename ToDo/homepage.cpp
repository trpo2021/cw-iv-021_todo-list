#include "homepage.h"
#include "note.h"
#include <QDebug>
#include <QtWidgets>
Homepage::Homepage(QWidget* parent) : QDialog(parent)
{
    setupUi(this);
    this->setWindowFlags(Qt::WindowTitleHint);
    this->setAttribute(Qt::WA_DeleteOnClose, true);
}

void Homepage::on_searchLine_textChanged()
{
    QString str = searchLine->text();
    if (str != "") {
        search->setEnabled(true);
    } else {
        search->setEnabled(false);
    }
}
void Homepage::on_create_clicked()
{
    Note* Notemenu = new Note();
    this->close();
    Notemenu->show();
}
