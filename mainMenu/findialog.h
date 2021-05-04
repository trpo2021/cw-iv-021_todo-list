#ifndef FINDIALOG_H
#define FINDIALOG_H
#include <QtWidgets>

class QCheckBox;
class QLabel;
class QLineEdit;
class QPushButton;

class findialog : public QDialog
{
    Q_OBJECT
public:
    findialog(QWidget *parent = 0);

signals:
    void findNext(const QString &str, Qt::CaseSensitivity cs);
    void findPrev(const QString &str, Qt::CaseSensitivity cs);

private slots:
    void findClicked();
    void enableFindButton(const QString &text);

private:
    QLabel *label;
    QLineEdit *lineEdit;
    QCheckBox *caseCheckBox;
    QCheckBox *backwardCheckBox;
    QPushButton *findButton;
    QPushButton *closeButton;
};

#endif // FINDIALOG_H
