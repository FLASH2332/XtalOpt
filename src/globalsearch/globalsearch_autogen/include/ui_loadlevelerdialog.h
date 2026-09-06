/********************************************************************************
** Form generated from reading UI file 'loadlevelerdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOADLEVELERDIALOG_H
#define UI_LOADLEVELERDIALOG_H

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

class Ui_LoadLevelerConfigDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *label_launch;
    QLineEdit *edit_llsubmit;
    QLabel *label_qdel;
    QLineEdit *edit_llq;
    QLabel *label_check;
    QLineEdit *edit_llcancel;
    QDialogButtonBox *buttonBox;
    QLabel *label_4;
    QSpacerItem *verticalSpacer_2;
    GlobalSearch::GlobalQueueInterfaceSettingsWidget *widget_globalQueueInterfaceSettings;

    void setupUi(QDialog *LoadLevelerConfigDialog)
    {
        if (LoadLevelerConfigDialog->objectName().isEmpty())
            LoadLevelerConfigDialog->setObjectName(QString::fromUtf8("LoadLevelerConfigDialog"));
        LoadLevelerConfigDialog->resize(700, 500);
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(LoadLevelerConfigDialog->sizePolicy().hasHeightForWidth());
        LoadLevelerConfigDialog->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(11);
        LoadLevelerConfigDialog->setFont(font);
        gridLayout = new QGridLayout(LoadLevelerConfigDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_launch = new QLabel(LoadLevelerConfigDialog);
        label_launch->setObjectName(QString::fromUtf8("label_launch"));
        sizePolicy.setHeightForWidth(label_launch->sizePolicy().hasHeightForWidth());
        label_launch->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_launch, 5, 0, 1, 1);

        edit_llsubmit = new QLineEdit(LoadLevelerConfigDialog);
        edit_llsubmit->setObjectName(QString::fromUtf8("edit_llsubmit"));

        gridLayout->addWidget(edit_llsubmit, 5, 1, 1, 2);

        label_qdel = new QLabel(LoadLevelerConfigDialog);
        label_qdel->setObjectName(QString::fromUtf8("label_qdel"));
        sizePolicy.setHeightForWidth(label_qdel->sizePolicy().hasHeightForWidth());
        label_qdel->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_qdel, 6, 0, 1, 1);

        edit_llq = new QLineEdit(LoadLevelerConfigDialog);
        edit_llq->setObjectName(QString::fromUtf8("edit_llq"));

        gridLayout->addWidget(edit_llq, 7, 1, 1, 2);

        label_check = new QLabel(LoadLevelerConfigDialog);
        label_check->setObjectName(QString::fromUtf8("label_check"));
        sizePolicy.setHeightForWidth(label_check->sizePolicy().hasHeightForWidth());
        label_check->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_check, 7, 0, 1, 1);

        edit_llcancel = new QLineEdit(LoadLevelerConfigDialog);
        edit_llcancel->setObjectName(QString::fromUtf8("edit_llcancel"));

        gridLayout->addWidget(edit_llcancel, 6, 1, 1, 2);

        buttonBox = new QDialogButtonBox(LoadLevelerConfigDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 12, 2, 1, 1);

        label_4 = new QLabel(LoadLevelerConfigDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 4, 0, 1, 3);

        verticalSpacer_2 = new QSpacerItem(10, 10, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout->addItem(verticalSpacer_2, 3, 0, 1, 1);

        widget_globalQueueInterfaceSettings = new GlobalSearch::GlobalQueueInterfaceSettingsWidget(LoadLevelerConfigDialog);
        widget_globalQueueInterfaceSettings->setObjectName(QString::fromUtf8("widget_globalQueueInterfaceSettings"));

        gridLayout->addWidget(widget_globalQueueInterfaceSettings, 0, 0, 1, 3);

#if QT_CONFIG(shortcut)
        label_launch->setBuddy(edit_llsubmit);
        label_qdel->setBuddy(edit_llcancel);
        label_check->setBuddy(edit_llq);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(edit_llsubmit, edit_llcancel);
        QWidget::setTabOrder(edit_llcancel, edit_llq);
        QWidget::setTabOrder(edit_llq, buttonBox);

        retranslateUi(LoadLevelerConfigDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), LoadLevelerConfigDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), LoadLevelerConfigDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(LoadLevelerConfigDialog);
    } // setupUi

    void retranslateUi(QDialog *LoadLevelerConfigDialog)
    {
        LoadLevelerConfigDialog->setWindowTitle(QCoreApplication::translate("LoadLevelerConfigDialog", "LoadLeveler Queue Configuration", nullptr));
#if QT_CONFIG(tooltip)
        label_launch->setToolTip(QCoreApplication::translate("LoadLevelerConfigDialog", "Command used to submit jobs to the PBS queue. Usually qsub.", nullptr));
#endif // QT_CONFIG(tooltip)
        label_launch->setText(QCoreApplication::translate("LoadLevelerConfigDialog", "Path to llsubmit:", nullptr));
#if QT_CONFIG(tooltip)
        edit_llsubmit->setToolTip(QCoreApplication::translate("LoadLevelerConfigDialog", "Command used to submit jobs to the PBS queue. Usually qsub.", nullptr));
#endif // QT_CONFIG(tooltip)
        edit_llsubmit->setText(QCoreApplication::translate("LoadLevelerConfigDialog", "llsubmit", nullptr));
#if QT_CONFIG(tooltip)
        label_qdel->setToolTip(QCoreApplication::translate("LoadLevelerConfigDialog", "Command used to delete jobs from the queue. Usually qdel.", nullptr));
#endif // QT_CONFIG(tooltip)
        label_qdel->setText(QCoreApplication::translate("LoadLevelerConfigDialog", "Path to llcancel:", nullptr));
#if QT_CONFIG(tooltip)
        edit_llq->setToolTip(QCoreApplication::translate("LoadLevelerConfigDialog", "Command used to check the PBS queue. Use qstat.", nullptr));
#endif // QT_CONFIG(tooltip)
        edit_llq->setText(QCoreApplication::translate("LoadLevelerConfigDialog", "llq", nullptr));
#if QT_CONFIG(tooltip)
        label_check->setToolTip(QCoreApplication::translate("LoadLevelerConfigDialog", "Command used to check the PBS queue. Use qstat.", nullptr));
#endif // QT_CONFIG(tooltip)
        label_check->setText(QCoreApplication::translate("LoadLevelerConfigDialog", "Path to llq:", nullptr));
#if QT_CONFIG(tooltip)
        edit_llcancel->setToolTip(QCoreApplication::translate("LoadLevelerConfigDialog", "Command used to delete jobs from the queue. Usually qdel.", nullptr));
#endif // QT_CONFIG(tooltip)
        edit_llcancel->setText(QCoreApplication::translate("LoadLevelerConfigDialog", "llcancel", nullptr));
        label_4->setText(QCoreApplication::translate("LoadLevelerConfigDialog", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600;\">Step Queue Interface Settings</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoadLevelerConfigDialog: public Ui_LoadLevelerConfigDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOADLEVELERDIALOG_H
