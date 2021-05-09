
#include "note.h"
#include <QtWidgets>
Note::Note(QWidget* parent) : QDialog(parent)
{
    setupUi(this);
}
void Note::on_textEdit_textChanged()
{
    QString str = textEdit->toPlainText();
    if (str != "") {
        saveButton->setEnabled(true);
    } else {
        saveButton->setEnabled(false);
    }
}
