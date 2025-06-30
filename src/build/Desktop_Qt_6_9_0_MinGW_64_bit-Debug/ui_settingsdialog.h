/********************************************************************************
** Form generated from reading UI file 'settingsdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGSDIALOG_H
#define UI_SETTINGSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_Settingsdialog
{
public:

    void setupUi(QDialog *Settingsdialog)
    {
        if (Settingsdialog->objectName().isEmpty())
            Settingsdialog->setObjectName("Settingsdialog");
        Settingsdialog->resize(400, 300);

        retranslateUi(Settingsdialog);

        QMetaObject::connectSlotsByName(Settingsdialog);
    } // setupUi

    void retranslateUi(QDialog *Settingsdialog)
    {
        Settingsdialog->setWindowTitle(QCoreApplication::translate("Settingsdialog", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Settingsdialog: public Ui_Settingsdialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGSDIALOG_H
