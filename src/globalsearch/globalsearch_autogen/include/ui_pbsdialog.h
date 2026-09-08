/********************************************************************************
** Form generated from reading UI file 'pbsdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PBSDIALOG_H
#define UI_PBSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include "globalsearch/queueinterfaces/globalqueueinterfacesettingswidget.h"

QT_BEGIN_NAMESPACE

class Ui_PbsConfigDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *label_launch;
    QLineEdit *edit_qsub;
    QLabel *label_qdel;
    QLineEdit *edit_qstat;
    QLabel *label_check;
    QLineEdit *edit_qdel;
    QDialogButtonBox *buttonBox;
    QLabel *label_4;
    QSpacerItem *verticalSpacer_2;
    GlobalSearch::GlobalQueueInterfaceSettingsWidget *widget_globalQueueInterfaceSettings;

    void setupUi(QDialog *PbsConfigDialog)
    {
        if (PbsConfigDialog->objectName().isEmpty())
            PbsConfigDialog->setObjectName(QString::fromUtf8("PbsConfigDialog"));
        PbsConfigDialog->resize(700, 500);
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(PbsConfigDialog->sizePolicy().hasHeightForWidth());
        PbsConfigDialog->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(11);
        PbsConfigDialog->setFont(font);
        gridLayout = new QGridLayout(PbsConfigDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_launch = new QLabel(PbsConfigDialog);
        label_launch->setObjectName(QString::fromUtf8("label_launch"));
        sizePolicy.setHeightForWidth(label_launch->sizePolicy().hasHeightForWidth());
        label_launch->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_launch, 3, 0, 1, 1);

        edit_qsub = new QLineEdit(PbsConfigDialog);
        edit_qsub->setObjectName(QString::fromUtf8("edit_qsub"));

        gridLayout->addWidget(edit_qsub, 3, 1, 1, 2);

        label_qdel = new QLabel(PbsConfigDialog);
        label_qdel->setObjectName(QString::fromUtf8("label_qdel"));
        sizePolicy.setHeightForWidth(label_qdel->sizePolicy().hasHeightForWidth());
        label_qdel->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_qdel, 4, 0, 1, 1);

        edit_qstat = new QLineEdit(PbsConfigDialog);
        edit_qstat->setObjectName(QString::fromUtf8("edit_qstat"));

        gridLayout->addWidget(edit_qstat, 5, 1, 1, 2);

        label_check = new QLabel(PbsConfigDialog);
        label_check->setObjectName(QString::fromUtf8("label_check"));
        sizePolicy.setHeightForWidth(label_check->sizePolicy().hasHeightForWidth());
        label_check->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_check, 5, 0, 1, 1);

        edit_qdel = new QLineEdit(PbsConfigDialog);
        edit_qdel->setObjectName(QString::fromUtf8("edit_qdel"));

        gridLayout->addWidget(edit_qdel, 4, 1, 1, 2);

        buttonBox = new QDialogButtonBox(PbsConfigDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 10, 2, 1, 1);

        label_4 = new QLabel(PbsConfigDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 2, 0, 1, 3);

        verticalSpacer_2 = new QSpacerItem(10, 10, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout->addItem(verticalSpacer_2, 1, 0, 1, 1);

        widget_globalQueueInterfaceSettings = new GlobalSearch::GlobalQueueInterfaceSettingsWidget(PbsConfigDialog);
        widget_globalQueueInterfaceSettings->setObjectName(QString::fromUtf8("widget_globalQueueInterfaceSettings"));

        gridLayout->addWidget(widget_globalQueueInterfaceSettings, 0, 0, 1, 3);

#if QT_CONFIG(shortcut)
        label_launch->setBuddy(edit_qsub);
        label_qdel->setBuddy(edit_qdel);
        label_check->setBuddy(edit_qstat);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(edit_qsub, edit_qdel);
        QWidget::setTabOrder(edit_qdel, edit_qstat);
        QWidget::setTabOrder(edit_qstat, buttonBox);

        retranslateUi(PbsConfigDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), PbsConfigDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), PbsConfigDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(PbsConfigDialog);
    } // setupUi

    void retranslateUi(QDialog *PbsConfigDialog)
    {
        PbsConfigDialog->setWindowTitle(QCoreApplication::translate("PbsConfigDialog", "PBS Queue Configuration", nullptr));
#if QT_CONFIG(tooltip)
        label_launch->setToolTip(QCoreApplication::translate("PbsConfigDialog", "Command used to submit jobs to the PBS queue. Usually qsub.", nullptr));
#endif // QT_CONFIG(tooltip)
        label_launch->setText(QCoreApplication::translate("PbsConfigDialog", "Path to qsub:", nullptr));
#if QT_CONFIG(tooltip)
        edit_qsub->setToolTip(QCoreApplication::translate("PbsConfigDialog", "Command used to submit jobs to the PBS queue. Usually qsub.", nullptr));
#endif // QT_CONFIG(tooltip)
        edit_qsub->setText(QCoreApplication::translate("PbsConfigDialog", "qsub", nullptr));
#if QT_CONFIG(tooltip)
        label_qdel->setToolTip(QCoreApplication::translate("PbsConfigDialog", "Command used to delete jobs from the queue. Usually qdel.", nullptr));
#endif // QT_CONFIG(tooltip)
        label_qdel->setText(QCoreApplication::translate("PbsConfigDialog", "Path to qdel:", nullptr));
#if QT_CONFIG(tooltip)
        edit_qstat->setToolTip(QCoreApplication::translate("PbsConfigDialog", "Command used to check the PBS queue. Use qstat.", nullptr));
#endif // QT_CONFIG(tooltip)
        edit_qstat->setText(QCoreApplication::translate("PbsConfigDialog", "qstat", nullptr));
#if QT_CONFIG(tooltip)
        label_check->setToolTip(QCoreApplication::translate("PbsConfigDialog", "Command used to check the PBS queue. Use qstat.", nullptr));
#endif // QT_CONFIG(tooltip)
        label_check->setText(QCoreApplication::translate("PbsConfigDialog", "Path to qstat:", nullptr));
#if QT_CONFIG(tooltip)
        edit_qdel->setToolTip(QCoreApplication::translate("PbsConfigDialog", "Command used to delete jobs from the queue. Usually qdel.", nullptr));
#endif // QT_CONFIG(tooltip)
        edit_qdel->setText(QCoreApplication::translate("PbsConfigDialog", "qdel", nullptr));
        label_4->setText(QCoreApplication::translate("PbsConfigDialog", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600;\">Step Queue Interface Settings</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PbsConfigDialog: public Ui_PbsConfigDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PBSDIALOG_H
