#ifndef HOMEBUDGETAPP_H
#define HOMEBUDGETAPP_H

#include <QMainWindow>

namespace Ui {
class HomeBudgetApp;
}

class HomeBudgetApp : public QMainWindow
{
    Q_OBJECT

public:
    explicit HomeBudgetApp(QWidget *parent = 0);
    ~HomeBudgetApp();

private:
    Ui::HomeBudgetApp *ui;
};

#endif // HOMEBUDGETAPP_H
