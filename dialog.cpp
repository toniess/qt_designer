#include "dialog.h"
#include "ui_dialog.h"
#include <QDebug>

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_cancel_button_clicked()
{
    this->close();
}

void Dialog::on_ok_button_clicked()
{
    qInfo() << "[DBConnect] host:" << ui->host_field->text();
    qInfo() << "[DBConnect] name:" << ui->name_field->text();
    qInfo() << "[DBConnect] login:" << ui->login_field->text();
    qInfo() << "[DBConnect] password:" << ui->password_field->text();
    qInfo() << "[DBConnect] port:" << ui->port_spinbox->value();
    this->close();
}

