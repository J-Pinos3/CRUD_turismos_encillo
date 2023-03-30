#ifndef ADDPACKAGES_H
#define ADDPACKAGES_H

#include <QDialog>
#include "databaseheader.h"

namespace Ui {
class AddPackages;
}

class AddPackages : public QDialog
{
    Q_OBJECT

public:
    explicit AddPackages(QWidget *parent = nullptr);
    ~AddPackages();

private slots:
    void on_btnSave_clicked();

private:
    Ui::AddPackages *ui;
};

#endif // ADDPACKAGES_H
