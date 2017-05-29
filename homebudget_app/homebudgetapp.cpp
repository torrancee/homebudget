#include "homebudgetapp.h"
#include "ui_homebudgetapp.h"

HomeBudgetApp::HomeBudgetApp(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::HomeBudgetApp)
{
    ui->setupUi(this);
}

HomeBudgetApp::~HomeBudgetApp()
{
    delete ui;
}
