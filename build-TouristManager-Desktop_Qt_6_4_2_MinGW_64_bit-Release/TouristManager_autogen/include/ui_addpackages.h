/********************************************************************************
** Form generated from reading UI file 'addpackages.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDPACKAGES_H
#define UI_ADDPACKAGES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddPackages
{
public:
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *txtPackageName1;
    QLabel *label_2;
    QTextEdit *txtDescription;
    QLabel *label_3;
    QLineEdit *txtPrice;
    QPushButton *btnSave;
    QPushButton *btnReset;

    void setupUi(QDialog *AddPackages)
    {
        if (AddPackages->objectName().isEmpty())
            AddPackages->setObjectName("AddPackages");
        AddPackages->setWindowModality(Qt::WindowModal);
        AddPackages->resize(600, 500);
        AddPackages->setMaximumSize(QSize(600, 500));
        formLayoutWidget = new QWidget(AddPackages);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(20, 20, 551, 161));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(formLayoutWidget);
        label->setObjectName("label");
        label->setMaximumSize(QSize(600, 700));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        txtPackageName1 = new QLineEdit(formLayoutWidget);
        txtPackageName1->setObjectName("txtPackageName1");

        formLayout->setWidget(0, QFormLayout::FieldRole, txtPackageName1);

        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName("label_2");

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        txtDescription = new QTextEdit(formLayoutWidget);
        txtDescription->setObjectName("txtDescription");

        formLayout->setWidget(1, QFormLayout::FieldRole, txtDescription);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName("label_3");

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        txtPrice = new QLineEdit(formLayoutWidget);
        txtPrice->setObjectName("txtPrice");

        formLayout->setWidget(2, QFormLayout::FieldRole, txtPrice);

        btnSave = new QPushButton(AddPackages);
        btnSave->setObjectName("btnSave");
        btnSave->setGeometry(QRect(432, 260, 111, 61));
        btnReset = new QPushButton(AddPackages);
        btnReset->setObjectName("btnReset");
        btnReset->setGeometry(QRect(300, 260, 111, 61));

        retranslateUi(AddPackages);

        QMetaObject::connectSlotsByName(AddPackages);
    } // setupUi

    void retranslateUi(QDialog *AddPackages)
    {
        AddPackages->setWindowTitle(QCoreApplication::translate("AddPackages", "Agregar Paquete", nullptr));
        label->setText(QCoreApplication::translate("AddPackages", "Nombre del Paquete:", nullptr));
        label_2->setText(QCoreApplication::translate("AddPackages", "Descripci\303\263n:", nullptr));
        label_3->setText(QCoreApplication::translate("AddPackages", "Precio:", nullptr));
        btnSave->setText(QCoreApplication::translate("AddPackages", "Guardar", nullptr));
        btnReset->setText(QCoreApplication::translate("AddPackages", "Deshacer", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddPackages: public Ui_AddPackages {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDPACKAGES_H
