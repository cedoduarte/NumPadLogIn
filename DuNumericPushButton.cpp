#include "DuNumericPushButton.h"

DuNumericPushButton::DuNumericPushButton(QWidget *parent)
    : QPushButton(parent)
{
    connect(this, &DuNumericPushButton::clicked, [&]() {
        emit wasClicked(text());
    });
}
