#include "homepage.h"
#include "note.h"
#include <QDebug>
#include <QtWidgets>
#include "qtcsv/reader.h"

Homepage::Homepage(QWidget *parent) : QDialog(parent)
{
    setupUi(this);
    this->setWindowFlags(Qt::WindowTitleHint);
    this->setAttribute(Qt::WA_DeleteOnClose,true);
    connect(table,SIGNAL(cellDoubleClicked(int, int)),this,SLOT(take_info(int, int )));
    QString filePath = QDir::currentPath() + "/base.csv";
    QList<QStringList> readData = QtCSV::Reader::readToList(filePath,";","\"",QTextCodec::codecForName("UTF-8"));
        for ( int i = 1; i < readData.size(); ++i )
        {
            QString data = readData.at(i).join(";");
            QStringList list;
            list = data.split(";");
            table->insertRow(i-1);

            for (int j = 0; j < 5; j++){
                QTableWidgetItem *cell = new QTableWidgetItem;
                cell->setText(list.at(j));
                table->setItem(i-1,j,cell);
             }
        }
}


void Homepage::on_searchLine_textChanged(){
    QString str=searchLine->text();
      if (str!=""){
          search->setEnabled(true);
      }else{
          search->setEnabled(false);
      }
}
void Homepage:: on_create_clicked(){
    Note *Notemenu = new Note();

    Notemenu->show();
    this->close();

}
void Homepage::take_info(int row,int col){
    QStringList data;
    for(int i = row; i < 5;i++){
        data.push_back(table->item(row,i)->text());
    }
    Note *Notemenu = new Note();
    connect(this,SIGNAL(redact_me(QStringList)),Notemenu,SLOT(redact(QStringList)));
    emit redact_me(data);
    Notemenu->show();
    this->close();

}
