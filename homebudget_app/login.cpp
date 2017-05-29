#include "login.h"
#include "ui_login.h"
#include "homebudgetapp.h"
#include <QString>
#include <QMessageBox>

Login::Login(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);
}

Login::~Login()
{
    delete ui;
}

void Login::on_loginButton_clicked()
{
    QString login = ui->loginInput->text();
    QString password = ui->passwordInput->text();

    if(login == "agko" && password == "agko123"){

        HomeBudgetApp *home = new HomeBudgetApp(this);
        hide();
        home->show();

    } else {
        QMessageBox::warning(this, "Error!" ,"Wrong user or password!");
    }
}
