/********************************************************************************
** Form generated from reading UI file 'lsfdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LSFDIALOG_H
#define UI_LSFDIALOG_H

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

class Ui_LsfConfigDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *label_launch;
    QLineEdit *edit_bsub;
    QLabel *label_bkill;
    QLineEdit *edit_bjobs;
    QLabel *label_check;
    QLineEdit *edit_bkill;
    QDialogButtonBox *buttonBox;
    QLabel *label_3;
    QSpacerItem *verticalSpacer_2;
    GlobalSearch::GlobalQueueInterfaceSettingsWidget *widget_globalQueueInterfaceSettings;

    void setupUi(QDialog *LsfConfigDialog)
    {
        if (LsfConfigDialog->objectName().isEmpty())
            LsfConfigDialog->setObjectName(QString::fromUtf8("LsfConfigDialog"));
        LsfConfigDialog->resize(700, 500);
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(LsfConfigDialog->sizePolicy().hasHeightForWidth());
        LsfConfigDialog->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(11);
        LsfConfigDialog->setFont(font);
        gridLayout = new QGridLayout(LsfConfigDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_launch = new QLabel(LsfConfigDialog);
        label_launch->setObjectName(QString::fromUtf8("label_launch"));
        sizePolicy.setHeightForWidth(label_launch->sizePolicy().hasHeightForWidth());
        label_launch->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_launch, 3, 0, 1, 1);

        edit_bsub = new QLineEdit(LsfConfigDialog);
        edit_bsub->setObjectName(QString::fromUtf8("edit_bsub"));

        gridLayout->addWidget(edit_bsub, 3, 1, 1, 2);

        label_bkill = new QLabel(LsfConfigDialog);
        label_bkill->setObjectName(QString::fromUtf8("label_bkill"));
        sizePolicy.setHeightForWidth(label_bkill->sizePolicy().hasHeightForWidth());
        label_bkill->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_bkill, 4, 0, 1, 1);

        edit_bjobs = new QLineEdit(LsfConfigDialog);
        edit_bjobs->setObjectName(QString::fromUtf8("edit_bjobs"));

        gridLayout->addWidget(edit_bjobs, 5, 1, 1, 2);

        label_check = new QLabel(LsfConfigDialog);
        label_check->setObjectName(QString::fromUtf8("label_check"));
        sizePolicy.setHeightForWidth(label_check->sizePolicy().hasHeightForWidth());
        label_check->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_check, 5, 0, 1, 1);

        edit_bkill = new QLineEdit(LsfConfigDialog);
        edit_bkill->setObjectName(QString::fromUtf8("edit_bkill"));

        gridLayout->addWidget(edit_bkill, 4, 1, 1, 2);

        buttonBox = new QDialogButtonBox(LsfConfigDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 8, 2, 1, 1);

        label_3 = new QLabel(LsfConfigDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 3);

        verticalSpacer_2 = new QSpacerItem(10, 10, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout->addItem(verticalSpacer_2, 1, 0, 1, 1);

        widget_globalQueueInterfaceSettings = new GlobalSearch::GlobalQueueInterfaceSettingsWidget(LsfConfigDialog);
        widget_globalQueueInterfaceSettings->setObjectName(QString::fromUtf8("widget_globalQueueInterfaceSettings"));

        gridLayout->addWidget(widget_globalQueueInterfaceSettings, 0, 0, 1, 3);

#if QT_CONFIG(shortcut)
        label_launch->setBuddy(edit_bsub);
        label_bkill->setBuddy(edit_bkill);
        label_check->setBuddy(edit_bjobs);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(edit_bsub, edit_bkill);
        QWidget::setTabOrder(edit_bkill, edit_bjobs);
        QWidget::setTabOrder(edit_bjobs, buttonBox);

        retranslateUi(LsfConfigDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), LsfConfigDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), LsfConfigDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(LsfConfigDialog);
    } // setupUi

    void retranslateUi(QDialog *LsfConfigDialog)
    {
        LsfConfigDialog->setWindowTitle(QCoreApplication::translate("LsfConfigDialog", "LSF Queue Configuration", nullptr));
#if QT_CONFIG(tooltip)
        label_launch->setToolTip(QCoreApplication::translate("LsfConfigDialog", "Path to the LSF bsub command. Usually bsub.", nullptr));
#endif // QT_CONFIG(tooltip)
        label_launch->setText(QCoreApplication::translate("LsfConfigDialog", "Path to bsub:", nullptr));
#if QT_CONFIG(tooltip)
        edit_bsub->setToolTip(QCoreApplication::translate("LsfConfigDialog", "Path to the LSF bsub command. Usually bsub.", nullptr));
#endif // QT_CONFIG(tooltip)
        edit_bsub->setText(QCoreApplication::translate("LsfConfigDialog", "bsub", nullptr));
#if QT_CONFIG(tooltip)
        label_bkill->setToolTip(QCoreApplication::translate("LsfConfigDialog", "Path to the LSF bkill command. Usually bkill.", nullptr));
#endif // QT_CONFIG(tooltip)
        label_bkill->setText(QCoreApplication::translate("LsfConfigDialog", "Path to bkill:", nullptr));
#if QT_CONFIG(tooltip)
        edit_bjobs->setToolTip(QCoreApplication::translate("LsfConfigDialog", "Path to the LSF bjobs command. Usually bjobs.", nullptr));
#endif // QT_CONFIG(tooltip)
        edit_bjobs->setText(QCoreApplication::translate("LsfConfigDialog", "bjobs", nullptr));
#if QT_CONFIG(tooltip)
        label_check->setToolTip(QCoreApplication::translate("LsfConfigDialog", "Path to the LSF qjobs command. Usually bjobs.", nullptr));
#endif // QT_CONFIG(tooltip)
        label_check->setText(QCoreApplication::translate("LsfConfigDialog", "Path to bjobs:", nullptr));
#if QT_CONFIG(tooltip)
        edit_bkill->setToolTip(QCoreApplication::translate("LsfConfigDialog", "Path to the LSF bkill command. Usually bkill.", nullptr));
#endif // QT_CONFIG(tooltip)
        edit_bkill->setText(QCoreApplication::translate("LsfConfigDialog", "bkill", nullptr));
        label_3->setText(QCoreApplication::translate("LsfConfigDialog", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600;\">Step Queue Interface Settings</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LsfConfigDialog: public Ui_LsfConfigDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LSFDIALOG_H
