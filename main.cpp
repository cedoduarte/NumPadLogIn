#include "NumPadLogInDialog.h"
#include "MainForm.h"
#include <QApplication>
#include <QMessageBox>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    a.setStyle("fusion");
    NumPadLogInDialog w;
    if (w.exec() == QDialog::Rejected) {
        QMessageBox::critical(&w, "Error", "Error");
        return 0;
    }
    MainForm window;
    window.show();
    return a.exec();
}
