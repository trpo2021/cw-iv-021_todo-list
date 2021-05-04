#include "homepage.h"

#include <QtWidgets>
Homepage::Homepage(QWidget *parent) : QDialog(parent)
{
    setupUi(this);
}

void Homepage::on_lineEdit_textChanged(){
    //pushButton->setEnabled(lineEdit->isModified());
    QString str=lineEdit->text();
      if (str!=""){
          pushButton->setEnabled(true);
      }else{
          pushButton->setEnabled(false);
      }
}
