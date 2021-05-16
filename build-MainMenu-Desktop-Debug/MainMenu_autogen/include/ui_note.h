/********************************************************************************
** Form generated from reading UI file 'note.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOTE_H
#define UI_NOTE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *deadline_txt;
    QSpacerItem *horizontalSpacer;
    QComboBox *priority;
    QComboBox *deadline;
    QLabel *dead_txt;
    QDateTimeEdit *dead_time;
    QLabel *priority_txt;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *backButton;
    QTextEdit *textEdit;
    QPushButton *saveButton;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName(QString::fromUtf8("Form"));
        Form->resize(1295, 913);
        gridLayout_2 = new QGridLayout(Form);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox = new QGroupBox(Form);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        deadline_txt = new QLabel(groupBox);
        deadline_txt->setObjectName(QString::fromUtf8("deadline_txt"));

        gridLayout->addWidget(deadline_txt, 0, 4, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 1, 1);

        priority = new QComboBox(groupBox);
        priority->addItem(QString());
        priority->addItem(QString());
        priority->setObjectName(QString::fromUtf8("priority"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(priority->sizePolicy().hasHeightForWidth());
        priority->setSizePolicy(sizePolicy);
        priority->setMinimumSize(QSize(100, 0));
        priority->setEditable(false);

        gridLayout->addWidget(priority, 1, 2, 1, 1);

        deadline = new QComboBox(groupBox);
        deadline->addItem(QString());
        deadline->addItem(QString());
        deadline->setObjectName(QString::fromUtf8("deadline"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(10);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(deadline->sizePolicy().hasHeightForWidth());
        deadline->setSizePolicy(sizePolicy1);
        deadline->setMinimumSize(QSize(100, 0));

        gridLayout->addWidget(deadline, 1, 4, 1, 1);

        dead_txt = new QLabel(groupBox);
        dead_txt->setObjectName(QString::fromUtf8("dead_txt"));

        gridLayout->addWidget(dead_txt, 0, 1, 1, 1);

        dead_time = new QDateTimeEdit(groupBox);
        dead_time->setObjectName(QString::fromUtf8("dead_time"));
        dead_time->setEnabled(false);
        sizePolicy.setHeightForWidth(dead_time->sizePolicy().hasHeightForWidth());
        dead_time->setSizePolicy(sizePolicy);
        dead_time->setMinimumSize(QSize(40, 0));

        gridLayout->addWidget(dead_time, 1, 1, 1, 1);

        priority_txt = new QLabel(groupBox);
        priority_txt->setObjectName(QString::fromUtf8("priority_txt"));

        gridLayout->addWidget(priority_txt, 0, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(100, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 5, 1, 1);

        backButton = new QPushButton(groupBox);
        backButton->setObjectName(QString::fromUtf8("backButton"));
        sizePolicy.setHeightForWidth(backButton->sizePolicy().hasHeightForWidth());
        backButton->setSizePolicy(sizePolicy);
        backButton->setMinimumSize(QSize(20, 20));

        gridLayout->addWidget(backButton, 0, 0, 1, 1, Qt::AlignLeft|Qt::AlignTop);


        verticalLayout->addWidget(groupBox);

        textEdit = new QTextEdit(Form);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(textEdit->sizePolicy().hasHeightForWidth());
        textEdit->setSizePolicy(sizePolicy2);
        textEdit->setMinimumSize(QSize(640, 640));

        verticalLayout->addWidget(textEdit, 0, Qt::AlignHCenter);

        saveButton = new QPushButton(Form);
        saveButton->setObjectName(QString::fromUtf8("saveButton"));
        saveButton->setEnabled(false);
        sizePolicy.setHeightForWidth(saveButton->sizePolicy().hasHeightForWidth());
        saveButton->setSizePolicy(sizePolicy);
        saveButton->setMinimumSize(QSize(640, 10));

        verticalLayout->addWidget(saveButton, 0, Qt::AlignHCenter|Qt::AlignBottom);


        gridLayout_2->addLayout(verticalLayout, 0, 0, 1, 1);


        retranslateUi(Form);

        priority->setCurrentIndex(0);
        deadline->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QApplication::translate("Form", "\320\241\320\276\320\267\320\264\320\260\320\275\320\270\320\265 \320\267\320\260\320\274\320\265\321\202\320\272\320\270", nullptr));
        groupBox->setTitle(QString());
        deadline_txt->setText(QApplication::translate("Form", "\320\224\320\265\320\264\320\273\320\260\320\271\320\275", nullptr));
        priority->setItemText(0, QApplication::translate("Form", "\320\235\320\270\320\267\320\272\320\270\320\271", nullptr));
        priority->setItemText(1, QApplication::translate("Form", "\320\222\321\213\321\201\320\276\320\272\320\270\320\271", nullptr));

        deadline->setItemText(0, QApplication::translate("Form", "\320\275\320\265\321\202", nullptr));
        deadline->setItemText(1, QApplication::translate("Form", "\320\265\321\201\321\202\321\214", nullptr));

        dead_txt->setText(QApplication::translate("Form", "\320\224\320\260\321\202\320\260 \320\264\320\265\320\264\320\273\320\260\320\271\320\275\320\260", nullptr));
        priority_txt->setText(QApplication::translate("Form", "\320\237\321\200\320\270\320\276\321\200\320\270\321\202\320\265\321\202", nullptr));
        backButton->setText(QApplication::translate("Form", "\320\235\320\260\320\267\320\260\320\264", nullptr));
        saveButton->setText(QApplication::translate("Form", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOTE_H
