/********************************************************************************
** Form generated from reading UI file 'main.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef MAINMENU_H
#define MAINMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mainMenu
{
public:
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout;
    QLineEdit *searchLine;
    QLabel *label;
    QLabel *label_2;
    QComboBox *time;
    QLabel *label_3;
    QPushButton *search;
    QComboBox *priority;
    QComboBox *status;
    QGridLayout *gridLayout_2;
    QTableWidget *table;
    QPushButton *edit;
    QPushButton *create;

    void setupUi(QWidget *mainMenu)
    {
        if (mainMenu->objectName().isEmpty())
            mainMenu->setObjectName(QString::fromUtf8("mainMenu"));
        mainMenu->resize(1026, 896);
        gridLayout_3 = new QGridLayout(mainMenu);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetMinimumSize);
        gridLayout->setHorizontalSpacing(10);
        gridLayout->setVerticalSpacing(2);
        searchLine = new QLineEdit(mainMenu);
        searchLine->setObjectName(QString::fromUtf8("searchLine"));
        searchLine->setMinimumSize(QSize(300, 0));
        searchLine->setMaximumSize(QSize(845, 16777215));

        gridLayout->addWidget(searchLine, 1, 3, 1, 1);

        label = new QLabel(mainMenu);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setMinimumSize(QSize(115, 10));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(mainMenu);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setMinimumSize(QSize(115, 10));

        gridLayout->addWidget(label_2, 0, 1, 1, 1);

        time = new QComboBox(mainMenu);
        time->addItem(QString());
        time->addItem(QString());
        time->setObjectName(QString::fromUtf8("time"));
        sizePolicy.setHeightForWidth(time->sizePolicy().hasHeightForWidth());
        time->setSizePolicy(sizePolicy);
        time->setMinimumSize(QSize(115, 10));

        gridLayout->addWidget(time, 1, 0, 1, 1);

        label_3 = new QLabel(mainMenu);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 0, 2, 1, 1);

        search = new QPushButton(mainMenu);
        search->setObjectName(QString::fromUtf8("search"));
        sizePolicy.setHeightForWidth(search->sizePolicy().hasHeightForWidth());
        search->setSizePolicy(sizePolicy);
        search->setMinimumSize(QSize(95, 0));
        search->setEnabled(false);

        gridLayout->addWidget(search, 1, 4, 1, 1);

        priority = new QComboBox(mainMenu);
        priority->addItem(QString());
        priority->addItem(QString());
        priority->setObjectName(QString::fromUtf8("priority"));
        sizePolicy.setHeightForWidth(priority->sizePolicy().hasHeightForWidth());
        priority->setSizePolicy(sizePolicy);
        priority->setMinimumSize(QSize(115, 10));

        gridLayout->addWidget(priority, 1, 1, 1, 1);

        status = new QComboBox(mainMenu);
        status->addItem(QString());
        status->addItem(QString());
        status->setObjectName(QString::fromUtf8("status"));
        sizePolicy.setHeightForWidth(status->sizePolicy().hasHeightForWidth());
        status->setSizePolicy(sizePolicy);
        status->setMinimumSize(QSize(140, 10));

        gridLayout->addWidget(status, 1, 2, 1, 1);


        gridLayout_3->addLayout(gridLayout, 0, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        table = new QTableWidget(mainMenu);
        if (table->columnCount() < 5)
            table->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setTextAlignment(Qt::AlignCenter);
        table->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setTextAlignment(Qt::AlignCenter);
        table->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setTextAlignment(Qt::AlignCenter);
        table->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        __qtablewidgetitem3->setTextAlignment(Qt::AlignCenter);
        table->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        __qtablewidgetitem4->setTextAlignment(Qt::AlignCenter);
        table->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        table->setObjectName(QString::fromUtf8("table"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(table->sizePolicy().hasHeightForWidth());
        table->setSizePolicy(sizePolicy1);
        table->setMinimumSize(QSize(1010, 0));
        table->setMaximumSize(QSize(1010, 16777215));
        table->setRowCount(0);
        table->horizontalHeader()->setDefaultSectionSize(200);
        table->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));

        gridLayout_2->addWidget(table, 0, 0, 1, 2, Qt::AlignHCenter);

        edit = new QPushButton(mainMenu);
        edit->setObjectName(QString::fromUtf8("edit"));
        sizePolicy.setHeightForWidth(edit->sizePolicy().hasHeightForWidth());
        edit->setSizePolicy(sizePolicy);
        edit->setMinimumSize(QSize(95, 0));

        gridLayout_2->addWidget(edit, 1, 0, 1, 1);

        create = new QPushButton(mainMenu);
        create->setObjectName(QString::fromUtf8("create"));
        sizePolicy.setHeightForWidth(create->sizePolicy().hasHeightForWidth());
        create->setSizePolicy(sizePolicy);
        create->setMinimumSize(QSize(95, 0));

        gridLayout_2->addWidget(create, 1, 1, 1, 1, Qt::AlignRight);


        gridLayout_3->addLayout(gridLayout_2, 1, 0, 1, 1);


        retranslateUi(mainMenu);

        QMetaObject::connectSlotsByName(mainMenu);
    } // setupUi

    void retranslateUi(QWidget *mainMenu)
    {
        mainMenu->setWindowTitle(QApplication::translate("mainMenu", "MainMenu", nullptr));
        searchLine->setText(QString());
        label->setText(QApplication::translate("mainMenu", "\320\222\321\200\320\265\320\274\321\217", nullptr));
        label_2->setText(QApplication::translate("mainMenu", "\320\237\321\200\320\270\320\276\321\200\320\270\321\202\320\265\321\202", nullptr));
        time->setItemText(0, QApplication::translate("mainMenu", "\320\240\320\260\320\275\321\214\321\210\320\265", nullptr));
        time->setItemText(1, QApplication::translate("mainMenu", "\320\237\320\276\320\267\320\266\320\265", nullptr));

        label_3->setText(QApplication::translate("mainMenu", "\320\241\321\202\320\260\321\202\321\203\321\201", nullptr));
        search->setText(QApplication::translate("mainMenu", "\320\235\320\260\320\271\321\202\320\270", nullptr));
        priority->setItemText(0, QApplication::translate("mainMenu", "\320\222\321\213\321\201\320\276\320\272\320\270\320\271", nullptr));
        priority->setItemText(1, QApplication::translate("mainMenu", "\320\235\320\270\320\267\320\272\320\270\320\271", nullptr));

        status->setItemText(0, QApplication::translate("mainMenu", "\320\222\321\213\320\277\320\276\320\273\320\275\320\265\320\275\320\275\321\213\320\265", nullptr));
        status->setItemText(1, QApplication::translate("mainMenu", "\320\235\320\265 \320\262\321\213\320\277\320\276\320\273\320\275\320\265\320\275\320\275\321\213\320\265", nullptr));

        QTableWidgetItem *___qtablewidgetitem = table->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("mainMenu", "\320\241\321\202\320\260\321\202\321\203\321\201", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = table->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("mainMenu", "\320\224\320\265\320\264\320\273\320\260\320\271\320\275", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = table->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("mainMenu", "\320\237\321\200\320\270\320\276\321\200\320\270\321\202\320\265\321\202", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = table->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("mainMenu", "\320\224\320\260\321\202\320\260 \321\201\320\276\320\267\320\264\320\260\320\275\320\270\321\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = table->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("mainMenu", "\320\242\320\265\320\272\321\201\321\202", nullptr));
        edit->setText(QApplication::translate("mainMenu", "\320\240\320\265\320\264\320\260\320\272\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
        create->setText(QApplication::translate("mainMenu", "\320\241\320\276\320\267\320\264\320\260\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class mainMenu: public Ui_mainMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // MAINMENU_H
