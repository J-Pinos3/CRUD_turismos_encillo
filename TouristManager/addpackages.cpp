#include "addpackages.h"
#include "ui_addpackages.h"

AddPackages::AddPackages(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddPackages)
{
    ui->setupUi(this);
}

AddPackages::~AddPackages()
{
    delete ui;
}

void AddPackages::on_btnSave_clicked()
{
    QString package_name = ui->txtPackageName1->text();
    QString package_description = ui->txtDescription->toPlainText();
    QString price = ui->txtPrice->text();

    qDebug() << "Package name: " << package_name <<"\nPackage description: " << package_description;

    QSqlDatabase database = QSqlDatabase::addDatabase("QMYSQL");
    database.setHostName("127.0.0.1");
    database.setUserName("root");
    database.setPassword("dBase123");
    database.setPort(3306);
    database.setDatabaseName("mytouristmanager");

    database.open() ? qDebug() << "Se encuentra conectado a la base de datos \n---" : qDebug() << "No se encuentra conectado a la base de datos \n*";

    QSqlDatabase::database().transaction();
    QSqlQuery query(database);
    query.prepare("INSERT INTO package(PackageName, PackageDescription, PackagePrice)"
                  "VALUES('"+package_name+"', '"+package_description+"', "+price+");");

    query.exec() ? qDebug() <<"Paquete agregado con éxito" : qDebug() <<"No se pudo agregar el paquete. Error: " << query.lastError().text();

    QSqlDatabase::database().commit();
    database.close();
}

