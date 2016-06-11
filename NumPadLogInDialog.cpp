#include "NumPadLogInDialog.h"
#include "ui_NumPadLogInDialog.h"

NumPadLogInDialog::NumPadLogInDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::NumPadLogInDialog)
{
    ui->setupUi(this);
    connect(ui->ceroPushButton, &DuNumericPushButton::wasClicked, this,
            &NumPadLogInDialog::onNumericPushButtonClicked);
    connect(ui->unoPushButton, &DuNumericPushButton::wasClicked, this,
            &NumPadLogInDialog::onNumericPushButtonClicked);
    connect(ui->dosPushButton, &DuNumericPushButton::wasClicked, this,
            &NumPadLogInDialog::onNumericPushButtonClicked);
    connect(ui->tresPushButton, &DuNumericPushButton::wasClicked, this,
            &NumPadLogInDialog::onNumericPushButtonClicked);
    connect(ui->cuatroPushButton, &DuNumericPushButton::wasClicked, this,
            &NumPadLogInDialog::onNumericPushButtonClicked);
    connect(ui->cincoPushButton, &DuNumericPushButton::wasClicked, this,
            &NumPadLogInDialog::onNumericPushButtonClicked);
    connect(ui->seisPushButton, &DuNumericPushButton::wasClicked, this,
            &NumPadLogInDialog::onNumericPushButtonClicked);
    connect(ui->sietePushButton, &DuNumericPushButton::wasClicked, this,
            &NumPadLogInDialog::onNumericPushButtonClicked);
    connect(ui->ochoPushButton, &DuNumericPushButton::wasClicked, this,
            &NumPadLogInDialog::onNumericPushButtonClicked);
    connect(ui->nuevePushButton, &DuNumericPushButton::wasClicked, this,
            &NumPadLogInDialog::onNumericPushButtonClicked);

}

NumPadLogInDialog::~NumPadLogInDialog()
{
    delete ui;
}

void NumPadLogInDialog::onNumericPushButtonClicked(const QString &number)
{
    ui->lcdNumber->display(QString::number(ui->lcdNumber->value())+number);
}

void NumPadLogInDialog::on_clearPushButton_clicked()
{
    ui->lcdNumber->display(0);
}

void NumPadLogInDialog::on_enterPushButton_clicked()
{
    if (ui->lcdNumber->value() == 12345) {
        accept();
        return;
    }
    reject();
}
