/********************************************************************************
** Form generated from reading UI file 'registertourist.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTERTOURIST_H
#define UI_REGISTERTOURIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RegisterTourist
{
public:
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *txtFirstName;
    QLabel *label_2;
    QLineEdit *txtSecondName;
    QLabel *label_3;
    QLineEdit *txtLastName;
    QLabel *label_4;
    QLineEdit *txtPassPort;
    QLabel *label_5;
    QLineEdit *txtPhone;
    QLabel *label_6;
    QLineEdit *txtAdress;
    QLabel *label_7;
    QComboBox *cmbChoosePackage;
    QTextEdit *txtPackageDescription;
    QPushButton *btnReset;
    QPushButton *btnSave;

    void setupUi(QDialog *RegisterTourist)
    {
        if (RegisterTourist->objectName().isEmpty())
            RegisterTourist->setObjectName("RegisterTourist");
        RegisterTourist->resize(600, 500);
        RegisterTourist->setMaximumSize(QSize(600, 500));
        formLayoutWidget = new QWidget(RegisterTourist);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(20, 10, 561, 411));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setVerticalSpacing(16);
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(formLayoutWidget);
        label->setObjectName("label");

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        txtFirstName = new QLineEdit(formLayoutWidget);
        txtFirstName->setObjectName("txtFirstName");

        formLayout->setWidget(0, QFormLayout::FieldRole, txtFirstName);

        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName("label_2");

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        txtSecondName = new QLineEdit(formLayoutWidget);
        txtSecondName->setObjectName("txtSecondName");

        formLayout->setWidget(1, QFormLayout::FieldRole, txtSecondName);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName("label_3");

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        txtLastName = new QLineEdit(formLayoutWidget);
        txtLastName->setObjectName("txtLastName");

        formLayout->setWidget(2, QFormLayout::FieldRole, txtLastName);

        label_4 = new QLabel(formLayoutWidget);
        label_4->setObjectName("label_4");

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        txtPassPort = new QLineEdit(formLayoutWidget);
        txtPassPort->setObjectName("txtPassPort");

        formLayout->setWidget(3, QFormLayout::FieldRole, txtPassPort);

        label_5 = new QLabel(formLayoutWidget);
        label_5->setObjectName("label_5");

        formLayout->setWidget(4, QFormLayout::LabelRole, label_5);

        txtPhone = new QLineEdit(formLayoutWidget);
        txtPhone->setObjectName("txtPhone");

        formLayout->setWidget(4, QFormLayout::FieldRole, txtPhone);

        label_6 = new QLabel(formLayoutWidget);
        label_6->setObjectName("label_6");

        formLayout->setWidget(5, QFormLayout::LabelRole, label_6);

        txtAdress = new QLineEdit(formLayoutWidget);
        txtAdress->setObjectName("txtAdress");

        formLayout->setWidget(5, QFormLayout::FieldRole, txtAdress);

        label_7 = new QLabel(formLayoutWidget);
        label_7->setObjectName("label_7");

        formLayout->setWidget(6, QFormLayout::LabelRole, label_7);

        cmbChoosePackage = new QComboBox(formLayoutWidget);
        cmbChoosePackage->setObjectName("cmbChoosePackage");

        formLayout->setWidget(6, QFormLayout::FieldRole, cmbChoosePackage);

        txtPackageDescription = new QTextEdit(formLayoutWidget);
        txtPackageDescription->setObjectName("txtPackageDescription");

        formLayout->setWidget(7, QFormLayout::FieldRole, txtPackageDescription);

        btnReset = new QPushButton(RegisterTourist);
        btnReset->setObjectName("btnReset");
        btnReset->setGeometry(QRect(180, 430, 111, 41));
        btnSave = new QPushButton(RegisterTourist);
        btnSave->setObjectName("btnSave");
        btnSave->setGeometry(QRect(320, 430, 111, 41));

        retranslateUi(RegisterTourist);

        QMetaObject::connectSlotsByName(RegisterTourist);
    } // setupUi

    void retranslateUi(QDialog *RegisterTourist)
    {
        RegisterTourist->setWindowTitle(QCoreApplication::translate("RegisterTourist", "Registrar Turista", nullptr));
        label->setText(QCoreApplication::translate("RegisterTourist", "Primer Nombre:", nullptr));
        label_2->setText(QCoreApplication::translate("RegisterTourist", "Segundo Nombre:", nullptr));
        label_3->setText(QCoreApplication::translate("RegisterTourist", "Apellidos:", nullptr));
        label_4->setText(QCoreApplication::translate("RegisterTourist", "Pasaporte / Cedula:", nullptr));
        label_5->setText(QCoreApplication::translate("RegisterTourist", "Tel\303\251fono:", nullptr));
        label_6->setText(QCoreApplication::translate("RegisterTourist", "Direcci\303\263n:", nullptr));
        label_7->setText(QCoreApplication::translate("RegisterTourist", "Escoger Paquete", nullptr));
        btnReset->setText(QCoreApplication::translate("RegisterTourist", "Deshacer", nullptr));
        btnSave->setText(QCoreApplication::translate("RegisterTourist", "Guardar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RegisterTourist: public Ui_RegisterTourist {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERTOURIST_H
