#include "registertourist.h"
#include "ui_registertourist.h"

RegisterTourist::RegisterTourist(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RegisterTourist)
{
    ui->setupUi(this);
}

RegisterTourist::~RegisterTourist()
{
    delete ui;
    delete model;
}

void RegisterTourist::on_btnSave_clicked()
{

    QSqlDatabase database = QSqlDatabase::addDatabase("QMYSQL");
    database.setHostName("127.0.0.1");
    database.setUserName("root");
    database.setPassword("dBase123");
    database.setPort(3306);
    database.setDatabaseName("mytouristmanager");

    database.open() ? qDebug() << "Se encuentra conectado a la base de datos \n---" : qDebug() << "No se encuentra conectado a la base de datos \n*";

    QSqlDatabase::database().transaction();

    QString first_name = ui->txtFirstName->text();
    QString second_name = ui->txtSecondName->text();
    QString last_name = ui->txtLastName->text();
    QString passportNo = ui->txtPassPort->text();
    QString telephone = ui->txtPhone->text();
    QString address = ui->txtAdress->text();
    QString package_name = ui->cmbChoosePackage->currentText();



    QSqlQuery query(database);
    query.prepare("INSERT INTO tourist(FirstName, SecondName, LastName, PassportCI,"
                  "Contact, Address, PackageName)"
                  "VALUES('"+first_name+"', '"+second_name+"','"+last_name+"','"+passportNo+"',"
                    "'"+telephone+"','"+address+"', '"+package_name+"'" ");"
                 );

    query.exec() ? qDebug() <<"Turista registrado con éxito" : qDebug() <<"No se pudo agregar el turista. Error: " << query.lastError().text();

    QSqlDatabase::database().commit();
    database.close();


}

