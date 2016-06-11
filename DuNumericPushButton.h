#ifndef DUNUMERICPUSHBUTTON_H
#define DUNUMERICPUSHBUTTON_H

#include <QPushButton>

class DuNumericPushButton : public QPushButton
{
    Q_OBJECT
public:
    DuNumericPushButton(QWidget *parent = nullptr);
signals:
    void wasClicked(QString);
};

#endif // DUNUMERICPUSHBUTTON_H
