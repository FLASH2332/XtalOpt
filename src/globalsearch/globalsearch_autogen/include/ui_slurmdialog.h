/********************************************************************************
** Form generated from reading UI file 'slurmdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SLURMDIALOG_H
#define UI_SLURMDIALOG_H

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

class Ui_SlurmConfigDialog
{
public:
    QGridLayout *gridLayout;
    QLineEdit *edit_sbatch;
    QLabel *label_scancel;
    QLabel *label_check;
    QLabel *label_launch;
    QLineEdit *edit_scancel;
    QLineEdit *edit_squeue;
    QDialogButtonBox *buttonBox;
    QLabel *label_4;
    QSpacerItem *verticalSpacer;
    GlobalSearch::GlobalQueueInterfaceSettingsWidget *widget_globalQueueInterfaceSettings;

    void setupUi(QDialog *SlurmConfigDialog)
    {
        if (SlurmConfigDialog->objectName().isEmpty())
            SlurmConfigDialog->setObjectName(QString::fromUtf8("SlurmConfigDialog"));
        SlurmConfigDialog->resize(700, 500);
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(SlurmConfigDialog->sizePolicy().hasHeightForWidth());
        SlurmConfigDialog->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(11);
        SlurmConfigDialog->setFont(font);
        gridLayout = new QGridLayout(SlurmConfigDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        edit_sbatch = new QLineEdit(SlurmConfigDialog);
        edit_sbatch->setObjectName(QString::fromUtf8("edit_sbatch"));

        gridLayout->addWidget(edit_sbatch, 3, 1, 1, 2);

        label_scancel = new QLabel(SlurmConfigDialog);
        label_scancel->setObjectName(QString::fromUtf8("label_scancel"));
        sizePolicy.setHeightForWidth(label_scancel->sizePolicy().hasHeightForWidth());
        label_scancel->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_scancel, 4, 0, 1, 1);

        label_check = new QLabel(SlurmConfigDialog);
        label_check->setObjectName(QString::fromUtf8("label_check"));
        sizePolicy.setHeightForWidth(label_check->sizePolicy().hasHeightForWidth());
        label_check->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_check, 5, 0, 1, 1);

        label_launch = new QLabel(SlurmConfigDialog);
        label_launch->setObjectName(QString::fromUtf8("label_launch"));
        sizePolicy.setHeightForWidth(label_launch->sizePolicy().hasHeightForWidth());
        label_launch->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_launch, 3, 0, 1, 1);

        edit_scancel = new QLineEdit(SlurmConfigDialog);
        edit_scancel->setObjectName(QString::fromUtf8("edit_scancel"));

        gridLayout->addWidget(edit_scancel, 4, 1, 1, 2);

        edit_squeue = new QLineEdit(SlurmConfigDialog);
        edit_squeue->setObjectName(QString::fromUtf8("edit_squeue"));

        gridLayout->addWidget(edit_squeue, 5, 1, 1, 2);

        buttonBox = new QDialogButtonBox(SlurmConfigDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 9, 2, 1, 1);

        label_4 = new QLabel(SlurmConfigDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 2, 0, 1, 3);

        verticalSpacer = new QSpacerItem(10, 10, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout->addItem(verticalSpacer, 1, 0, 1, 1);

        widget_globalQueueInterfaceSettings = new GlobalSearch::GlobalQueueInterfaceSettingsWidget(SlurmConfigDialog);
        widget_globalQueueInterfaceSettings->setObjectName(QString::fromUtf8("widget_globalQueueInterfaceSettings"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(widget_globalQueueInterfaceSettings->sizePolicy().hasHeightForWidth());
        widget_globalQueueInterfaceSettings->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(widget_globalQueueInterfaceSettings, 0, 0, 1, 3);

#if QT_CONFIG(shortcut)
        label_scancel->setBuddy(edit_scancel);
        label_check->setBuddy(edit_squeue);
        label_launch->setBuddy(edit_sbatch);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(edit_sbatch, edit_scancel);
        QWidget::setTabOrder(edit_scancel, edit_squeue);
        QWidget::setTabOrder(edit_squeue, buttonBox);

        retranslateUi(SlurmConfigDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), SlurmConfigDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), SlurmConfigDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(SlurmConfigDialog);
    } // setupUi

    void retranslateUi(QDialog *SlurmConfigDialog)
    {
        SlurmConfigDialog->setWindowTitle(QCoreApplication::translate("SlurmConfigDialog", "SLURM Queue Configuration", nullptr));
#if QT_CONFIG(tooltip)
        edit_sbatch->setToolTip(QCoreApplication::translate("SlurmConfigDialog", "Command used to submit jobs to the SLURM queue. Usually sbatch.", nullptr));
#endif // QT_CONFIG(tooltip)
        edit_sbatch->setText(QCoreApplication::translate("SlurmConfigDialog", "sbatch", nullptr));
#if QT_CONFIG(tooltip)
        label_scancel->setToolTip(QCoreApplication::translate("SlurmConfigDialog", "Command used to delete jobs from the queue. Usually scancel.", nullptr));
#endif // QT_CONFIG(tooltip)
        label_scancel->setText(QCoreApplication::translate("SlurmConfigDialog", "Path to scancel:", nullptr));
#if QT_CONFIG(tooltip)
        label_check->setToolTip(QCoreApplication::translate("SlurmConfigDialog", "Command used to check the SLURM queue. Usually squeue.", nullptr));
#endif // QT_CONFIG(tooltip)
        label_check->setText(QCoreApplication::translate("SlurmConfigDialog", "Path to squeue:", nullptr));
#if QT_CONFIG(tooltip)
        label_launch->setToolTip(QCoreApplication::translate("SlurmConfigDialog", "Command used to submit jobs to the SLURM queue. Usually sbatch.", nullptr));
#endif // QT_CONFIG(tooltip)
        label_launch->setText(QCoreApplication::translate("SlurmConfigDialog", "Path to sbatch:", nullptr));
#if QT_CONFIG(tooltip)
        edit_scancel->setToolTip(QCoreApplication::translate("SlurmConfigDialog", "Command used to delete jobs from the queue. Usually scancel.", nullptr));
#endif // QT_CONFIG(tooltip)
        edit_scancel->setText(QCoreApplication::translate("SlurmConfigDialog", "scancel", nullptr));
#if QT_CONFIG(tooltip)
        edit_squeue->setToolTip(QCoreApplication::translate("SlurmConfigDialog", "Command used to check the SLURM queue. Use squeue.", nullptr));
#endif // QT_CONFIG(tooltip)
        edit_squeue->setText(QCoreApplication::translate("SlurmConfigDialog", "squeue", nullptr));
        label_4->setText(QCoreApplication::translate("SlurmConfigDialog", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600;\">Step Queue Interface Settings</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SlurmConfigDialog: public Ui_SlurmConfigDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SLURMDIALOG_H
