/********************************************************************************
** Form generated from reading UI file 'reportanalysisdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REPORTANALYSISDIALOG_H
#define UI_REPORTANALYSISDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_ReportAnalysisDialog
{
public:

    void setupUi(QDialog *ReportAnalysisDialog)
    {
        if (ReportAnalysisDialog->objectName().isEmpty())
            ReportAnalysisDialog->setObjectName("ReportAnalysisDialog");
        ReportAnalysisDialog->resize(400, 300);

        retranslateUi(ReportAnalysisDialog);

        QMetaObject::connectSlotsByName(ReportAnalysisDialog);
    } // setupUi

    void retranslateUi(QDialog *ReportAnalysisDialog)
    {
        ReportAnalysisDialog->setWindowTitle(QCoreApplication::translate("ReportAnalysisDialog", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ReportAnalysisDialog: public Ui_ReportAnalysisDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REPORTANALYSISDIALOG_H
