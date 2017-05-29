#include "homebudgetapp.h"
#include "ui_homebudgetapp.h"
#include <QDebug>

HomeBudgetApp::HomeBudgetApp(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::HomeBudgetApp)
{
    ui->setupUi(this);
}

HomeBudgetApp::~HomeBudgetApp()
{
    qDebug() << "hellllo";
    delete ui;
}
