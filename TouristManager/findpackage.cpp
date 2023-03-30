#include "findpackage.h"
#include "ui_findpackage.h"

FindPackage::FindPackage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FindPackage)
{
    ui->setupUi(this);
}

FindPackage::~FindPackage()
{
    delete ui;
    delete model;
}

void FindPackage::on_btnFindPackage_clicked()
{
    QString package_name = ui->txtPackageName->text();

    qDebug() << "Package name: " << package_name <<"\n";

    QSqlDatabase database = QSqlDatabase::addDatabase("QMYSQL");
    database.setHostName("127.0.0.1");
    database.setUserName("root");
    database.setPassword("dBase123");
    database.setPort(3306);
    database.setDatabaseName("mytouristmanager");

    database.open() ? qDebug() << "Se encuentra conectado a la base de datos \n---" : qDebug() << "No se encuentra conectado a la base de datos \n*";

    QSqlDatabase::database().transaction();

    QSqlQuery query(database);
    query.prepare("SELECT * FROM package WHERE PackageName = '"+package_name+"'");

    if(model == NULL){
        model = new QSqlQueryModel();
    }

    query.exec() ? qDebug() <<"Paquete encontrado" : qDebug() <<"No se pudo encontrar el paquete. Error: " << query.lastError().text();

    model->setQuery(std::move(query));

    ui->tableView->setModel(model);
    ui->tableView->setColumnWidth(0,145);
    ui->tableView->setColumnWidth(1,145);
    ui->tableView->setColumnWidth(2,145);
    ui->tableView->setColumnWidth(3,145);
    database.close();
    qDebug() << model->rowCount();
}

