#include "homebudgetapp.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    HomeBudgetApp w;
    w.show();

    return a.exec();
}
