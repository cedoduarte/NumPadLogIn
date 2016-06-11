#ifndef NUMPADLOGINDIALOG_H
#define NUMPADLOGINDIALOG_H

#include <QDialog>

namespace Ui
{
class NumPadLogInDialog;
}

class NumPadLogInDialog : public QDialog
{
    Q_OBJECT
public:
    explicit NumPadLogInDialog(QWidget *parent = nullptr);
    ~NumPadLogInDialog();
private slots:
    void on_clearPushButton_clicked();

    void on_enterPushButton_clicked();

private:
    void onNumericPushButtonClicked(const QString &number);

    Ui::NumPadLogInDialog *ui;
};

#endif // NUMPADLOGINDIALOG_H
