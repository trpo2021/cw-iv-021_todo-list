#include "homepage.h"
#include "note.h"
#include "todofile.h"
#include <QDebug>
#include <QtWidgets>
Homepage::Homepage(QWidget* parent) : QDialog(parent)
{
    mainMenu::setupUi(this);
    this->setWindowFlags(Qt::WindowTitleHint);
    this->setAttribute(Qt::WA_DeleteOnClose, true);
    time = new QTimer(this);
    table->setEditTriggers(0);
    QString filePath = QDir::currentPath() + "/base.csv";
    Read.read_csv(filePath, &readData, ";", "\"");
    update_table_ui(readData);
    connect(table,
            SIGNAL(cellDoubleClicked(int, int)),
            this,
            SLOT(take_info(int, int)));
    // connect(time, SIGNAL(timeout()), this, SLOT(update_table_ui()));
    // time->start(1000);
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

    Notemenu->show();
    this->close();
}
void Homepage::take_info(int row, int col)
{
    QStringList data;

    for (int i = 0; i < 5; i++) {
        data.push_back(table->item(row, i)->text());
    }

    Note* Notemenu = new Note();
    connect(this,
            SIGNAL(redact_me(QStringList)),
            Notemenu,
            SLOT(redact(QStringList)));
    emit redact_me(data);
    Notemenu->show();
    this->close();
}
void Homepage::update_table_ui(QList<QStringList> readData)
{
    for (int i = 1; i < readData.size(); ++i) {
        QString data = readData.at(i).join(";");
        QStringList list;
        list = data.split(";");
        if (table->rowCount() < i) {
            table->insertRow(i - 1);
        }
        for (int j = 0; j < 5; j++) {
            QTableWidgetItem* cell = new QTableWidgetItem;
            cell->setText(list.at(j));
            table->setItem(i - 1, j, cell);
        }
    }
}
