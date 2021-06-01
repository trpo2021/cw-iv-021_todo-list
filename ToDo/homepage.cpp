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
    timer = new QTimer(this);
    table->setEditTriggers(0);
    QString filePath = QDir::currentPath() + "/base.csv";
    Read.read_csv(filePath, &readData, ";", "\"");

    connect(table,
            SIGNAL(cellDoubleClicked(int, int)),
            this,
            SLOT(take_info(int, int)));
    flags.push_back(time->currentText());
    flags.push_back(priority->currentText());
    flags.push_back(status->currentText());
    readData = Read.sort(flags, readData);
    update_table_ui(readData);
    connect(timer, SIGNAL(timeout()), this, SLOT(deadlineChecked()));
    timer->start(2500);
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

void Homepage::deadlineChecked()
{
    readData = Read.sortByDeadline(readData);
    update_table_ui(readData);
}

void Homepage::on_time_currentIndexChanged(int index)
{
    flags[0] = time->currentText();
    readData = Read.sort(flags, readData);
    update_table_ui(readData);
}

void Homepage::on_priority_currentIndexChanged(int index)
{
    flags[1] = priority->currentText();
    readData = Read.sort(flags, readData);
    update_table_ui(readData);
}

void Homepage::on_status_currentIndexChanged(int index)
{
    flags[2] = status->currentText();
    readData = Read.sort(flags, readData);
    update_table_ui(readData);
}
