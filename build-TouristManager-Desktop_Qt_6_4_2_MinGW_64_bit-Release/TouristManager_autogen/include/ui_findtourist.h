/********************************************************************************
** Form generated from reading UI file 'findtourist.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FINDTOURIST_H
#define UI_FINDTOURIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FindTourist
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *txtTouristName;
    QPushButton *btnFindTourist;
    QTableView *tableView;

    void setupUi(QDialog *FindTourist)
    {
        if (FindTourist->objectName().isEmpty())
            FindTourist->setObjectName("FindTourist");
        FindTourist->resize(600, 500);
        FindTourist->setMaximumSize(QSize(600, 500));
        horizontalLayoutWidget = new QWidget(FindTourist);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(10, 20, 581, 81));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(horizontalLayoutWidget);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        txtTouristName = new QLineEdit(horizontalLayoutWidget);
        txtTouristName->setObjectName("txtTouristName");

        horizontalLayout->addWidget(txtTouristName);

        btnFindTourist = new QPushButton(horizontalLayoutWidget);
        btnFindTourist->setObjectName("btnFindTourist");

        horizontalLayout->addWidget(btnFindTourist);

        tableView = new QTableView(FindTourist);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(10, 130, 581, 271));

        retranslateUi(FindTourist);

        QMetaObject::connectSlotsByName(FindTourist);
    } // setupUi

    void retranslateUi(QDialog *FindTourist)
    {
        FindTourist->setWindowTitle(QCoreApplication::translate("FindTourist", "Buscar Turista", nullptr));
        label->setText(QCoreApplication::translate("FindTourist", "Nombre del Turista:", nullptr));
        btnFindTourist->setText(QCoreApplication::translate("FindTourist", "Buscar Turista", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FindTourist: public Ui_FindTourist {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FINDTOURIST_H
