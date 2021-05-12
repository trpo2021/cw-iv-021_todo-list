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
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mainMenu
{
public:
    QGridLayout *gridLayout_2;
    QPushButton *pushButton_2;
    QGridLayout *gridLayout;
    QLabel *label;
    QComboBox *comboBox_2;
    QPushButton *pushButton;
    QLabel *label_2;
    QComboBox *comboBox;
    QLineEdit *lineEdit;

    void setupUi(QWidget *mainMenu)
    {
        if (mainMenu->objectName().isEmpty())
            mainMenu->setObjectName(QString::fromUtf8("mainMenu"));
        mainMenu->resize(806, 590);
        gridLayout_2 = new QGridLayout(mainMenu);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        pushButton_2 = new QPushButton(mainMenu);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);
        pushButton_2->setMinimumSize(QSize(95, 0));

        gridLayout_2->addWidget(pushButton_2, 1, 0, 1, 1, Qt::AlignRight|Qt::AlignBottom);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetMinimumSize);
        gridLayout->setHorizontalSpacing(10);
        gridLayout->setVerticalSpacing(2);
        label = new QLabel(mainMenu);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setMinimumSize(QSize(115, 10));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        comboBox_2 = new QComboBox(mainMenu);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));
        sizePolicy.setHeightForWidth(comboBox_2->sizePolicy().hasHeightForWidth());
        comboBox_2->setSizePolicy(sizePolicy);
        comboBox_2->setMinimumSize(QSize(115, 10));

        gridLayout->addWidget(comboBox_2, 1, 0, 1, 1);

        pushButton = new QPushButton(mainMenu);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        pushButton->setMinimumSize(QSize(95, 0));

        gridLayout->addWidget(pushButton, 1, 3, 1, 1);

        label_2 = new QLabel(mainMenu);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setMinimumSize(QSize(115, 10));

        gridLayout->addWidget(label_2, 0, 1, 1, 1);

        comboBox = new QComboBox(mainMenu);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        sizePolicy.setHeightForWidth(comboBox->sizePolicy().hasHeightForWidth());
        comboBox->setSizePolicy(sizePolicy);
        comboBox->setMinimumSize(QSize(115, 10));

        gridLayout->addWidget(comboBox, 1, 1, 1, 1);

        lineEdit = new QLineEdit(mainMenu);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setMinimumSize(QSize(300, 0));
        lineEdit->setMaximumSize(QSize(845, 16777215));

        gridLayout->addWidget(lineEdit, 1, 2, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);


        retranslateUi(mainMenu);

        QMetaObject::connectSlotsByName(mainMenu);
    } // setupUi

    void retranslateUi(QWidget *mainMenu)
    {
        mainMenu->setWindowTitle(QApplication::translate("mainMenu", "MainMenu", nullptr));
        pushButton_2->setText(QApplication::translate("mainMenu", "\320\241\320\276\320\267\320\264\320\260\321\202\321\214", nullptr));
        label->setText(QApplication::translate("mainMenu", "\320\222\321\200\320\265\320\274\321\217", nullptr));
        comboBox_2->setItemText(0, QApplication::translate("mainMenu", "\320\240\320\260\320\275\321\214\321\210\320\265", nullptr));
        comboBox_2->setItemText(1, QApplication::translate("mainMenu", "\320\237\320\276\320\267\320\266\320\265", nullptr));

        pushButton->setText(QApplication::translate("mainMenu", "\320\235\320\260\320\271\321\202\320\270", nullptr));
        label_2->setText(QApplication::translate("mainMenu", "\320\237\321\200\320\270\320\276\321\200\320\270\321\202\320\265\321\202", nullptr));
        comboBox->setItemText(0, QApplication::translate("mainMenu", "\320\222\321\213\321\201\320\276\320\272\320\270\320\271", nullptr));
        comboBox->setItemText(1, QApplication::translate("mainMenu", "\320\235\320\270\320\267\320\272\320\270\320\271", nullptr));

        lineEdit->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class mainMenu: public Ui_mainMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // MAINMENU_H
