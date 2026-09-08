/********************************************************************************
** Form generated from reading UI file 'globalqueueinterfacesettingswidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GLOBALQUEUEINTERFACESETTINGSWIDGET_H
#define UI_GLOBALQUEUEINTERFACESETTINGSWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GlobalQueueInterfaceSettingsWidget
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLabel *label_18;
    QSpinBox *spin_port;
    QLineEdit *edit_host;
    QLineEdit *edit_description;
    QLineEdit *edit_username;
    QLabel *label_20;
    QLabel *label_21;
    QLineEdit *edit_rempath;
    QLineEdit *edit_locpath;
    QSpinBox *spin_interval;
    QCheckBox *cb_cancelJobAfterTime;
    QLabel *label_19;
    QLabel *label_3;
    QLabel *label;
    QDoubleSpinBox *spin_hoursForCancelJobAfterTime;
    QCheckBox *cb_logErrorDirs;
    QCheckBox *cb_cleanRemoteOnStop;

    void setupUi(QWidget *GlobalQueueInterfaceSettingsWidget)
    {
        if (GlobalQueueInterfaceSettingsWidget->objectName().isEmpty())
            GlobalQueueInterfaceSettingsWidget->setObjectName(QString::fromUtf8("GlobalQueueInterfaceSettingsWidget"));
        GlobalQueueInterfaceSettingsWidget->resize(643, 377);
        QFont font;
        font.setPointSize(11);
        GlobalQueueInterfaceSettingsWidget->setFont(font);
        gridLayout_2 = new QGridLayout(GlobalQueueInterfaceSettingsWidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_2 = new QLabel(GlobalQueueInterfaceSettingsWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 6, 0, 1, 1);

        label_18 = new QLabel(GlobalQueueInterfaceSettingsWidget);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_18->sizePolicy().hasHeightForWidth());
        label_18->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_18, 1, 0, 1, 1);

        spin_port = new QSpinBox(GlobalQueueInterfaceSettingsWidget);
        spin_port->setObjectName(QString::fromUtf8("spin_port"));
        spin_port->setMaximum(99999);
        spin_port->setValue(22);

        gridLayout->addWidget(spin_port, 1, 2, 1, 1);

        edit_host = new QLineEdit(GlobalQueueInterfaceSettingsWidget);
        edit_host->setObjectName(QString::fromUtf8("edit_host"));

        gridLayout->addWidget(edit_host, 1, 1, 1, 1);

        edit_description = new QLineEdit(GlobalQueueInterfaceSettingsWidget);
        edit_description->setObjectName(QString::fromUtf8("edit_description"));

        gridLayout->addWidget(edit_description, 5, 1, 1, 2);

        edit_username = new QLineEdit(GlobalQueueInterfaceSettingsWidget);
        edit_username->setObjectName(QString::fromUtf8("edit_username"));

        gridLayout->addWidget(edit_username, 2, 1, 1, 2);

        label_20 = new QLabel(GlobalQueueInterfaceSettingsWidget);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        sizePolicy.setHeightForWidth(label_20->sizePolicy().hasHeightForWidth());
        label_20->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_20, 3, 0, 1, 1);

        label_21 = new QLabel(GlobalQueueInterfaceSettingsWidget);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        sizePolicy.setHeightForWidth(label_21->sizePolicy().hasHeightForWidth());
        label_21->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_21, 4, 0, 1, 1);

        edit_rempath = new QLineEdit(GlobalQueueInterfaceSettingsWidget);
        edit_rempath->setObjectName(QString::fromUtf8("edit_rempath"));

        gridLayout->addWidget(edit_rempath, 3, 1, 1, 2);

        edit_locpath = new QLineEdit(GlobalQueueInterfaceSettingsWidget);
        edit_locpath->setObjectName(QString::fromUtf8("edit_locpath"));

        gridLayout->addWidget(edit_locpath, 4, 1, 1, 2);

        spin_interval = new QSpinBox(GlobalQueueInterfaceSettingsWidget);
        spin_interval->setObjectName(QString::fromUtf8("spin_interval"));
        spin_interval->setMinimum(1);
        spin_interval->setMaximum(99999);
        spin_interval->setValue(10);

        gridLayout->addWidget(spin_interval, 6, 1, 1, 2);

        cb_cancelJobAfterTime = new QCheckBox(GlobalQueueInterfaceSettingsWidget);
        cb_cancelJobAfterTime->setObjectName(QString::fromUtf8("cb_cancelJobAfterTime"));

        gridLayout->addWidget(cb_cancelJobAfterTime, 10, 0, 1, 1);

        label_19 = new QLabel(GlobalQueueInterfaceSettingsWidget);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        sizePolicy.setHeightForWidth(label_19->sizePolicy().hasHeightForWidth());
        label_19->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_19, 2, 0, 1, 1);

        label_3 = new QLabel(GlobalQueueInterfaceSettingsWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 0, 0, 1, 3);

        label = new QLabel(GlobalQueueInterfaceSettingsWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 5, 0, 1, 1);

        spin_hoursForCancelJobAfterTime = new QDoubleSpinBox(GlobalQueueInterfaceSettingsWidget);
        spin_hoursForCancelJobAfterTime->setObjectName(QString::fromUtf8("spin_hoursForCancelJobAfterTime"));
        spin_hoursForCancelJobAfterTime->setEnabled(false);
        spin_hoursForCancelJobAfterTime->setMinimum(0.000000000000000);
        spin_hoursForCancelJobAfterTime->setMaximum(10000.000000000000000);
        spin_hoursForCancelJobAfterTime->setValue(100.000000000000000);

        gridLayout->addWidget(spin_hoursForCancelJobAfterTime, 10, 1, 1, 2);

        cb_logErrorDirs = new QCheckBox(GlobalQueueInterfaceSettingsWidget);
        cb_logErrorDirs->setObjectName(QString::fromUtf8("cb_logErrorDirs"));

        gridLayout->addWidget(cb_logErrorDirs, 8, 0, 1, 3);

        cb_cleanRemoteOnStop = new QCheckBox(GlobalQueueInterfaceSettingsWidget);
        cb_cleanRemoteOnStop->setObjectName(QString::fromUtf8("cb_cleanRemoteOnStop"));

        gridLayout->addWidget(cb_cleanRemoteOnStop, 7, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

#if QT_CONFIG(shortcut)
        label_18->setBuddy(edit_host);
        label_20->setBuddy(edit_rempath);
        label_21->setBuddy(edit_locpath);
        label_19->setBuddy(edit_username);
        label->setBuddy(edit_description);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(edit_host, spin_port);
        QWidget::setTabOrder(spin_port, edit_username);
        QWidget::setTabOrder(edit_username, edit_rempath);
        QWidget::setTabOrder(edit_rempath, edit_locpath);
        QWidget::setTabOrder(edit_locpath, edit_description);
        QWidget::setTabOrder(edit_description, spin_interval);
        QWidget::setTabOrder(spin_interval, cb_cleanRemoteOnStop);
        QWidget::setTabOrder(cb_cleanRemoteOnStop, cb_logErrorDirs);
        QWidget::setTabOrder(cb_logErrorDirs, cb_cancelJobAfterTime);
        QWidget::setTabOrder(cb_cancelJobAfterTime, spin_hoursForCancelJobAfterTime);

        retranslateUi(GlobalQueueInterfaceSettingsWidget);
        QObject::connect(cb_cancelJobAfterTime, SIGNAL(toggled(bool)), spin_hoursForCancelJobAfterTime, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(GlobalQueueInterfaceSettingsWidget);
    } // setupUi

    void retranslateUi(QWidget *GlobalQueueInterfaceSettingsWidget)
    {
        GlobalQueueInterfaceSettingsWidget->setWindowTitle(QCoreApplication::translate("GlobalQueueInterfaceSettingsWidget", "Form", nullptr));
#if QT_CONFIG(tooltip)
        label_2->setToolTip(QCoreApplication::translate("GlobalQueueInterfaceSettingsWidget", "<html><head/><body><p>The number of seconds to wait before querying the jobs' statuses again with the queue interface.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        label_2->setText(QCoreApplication::translate("GlobalQueueInterfaceSettingsWidget", "Queue refresh interval:", nullptr));
        label_18->setText(QCoreApplication::translate("GlobalQueueInterfaceSettingsWidget", "Host:", nullptr));
        spin_port->setPrefix(QCoreApplication::translate("GlobalQueueInterfaceSettingsWidget", "SSH Port ", nullptr));
#if QT_CONFIG(tooltip)
        edit_host->setToolTip(QCoreApplication::translate("GlobalQueueInterfaceSettingsWidget", "Address of host. Can use IP or host name.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        edit_description->setToolTip(QCoreApplication::translate("GlobalQueueInterfaceSettingsWidget", "Short description of optimization (used as %description% template keyword in input templates).", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        edit_username->setToolTip(QCoreApplication::translate("GlobalQueueInterfaceSettingsWidget", "Username on above host.", nullptr));
#endif // QT_CONFIG(tooltip)
        label_20->setText(QCoreApplication::translate("GlobalQueueInterfaceSettingsWidget", "Working directory (Server):", nullptr));
        label_21->setText(QCoreApplication::translate("GlobalQueueInterfaceSettingsWidget", "Working directory (Local):", nullptr));
#if QT_CONFIG(tooltip)
        edit_rempath->setToolTip(QCoreApplication::translate("GlobalQueueInterfaceSettingsWidget", "Path on remote host to use during optimizations. Do not use wildcard characters or BASH-specific characters (e.g. '~' in place of /home/user).", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        edit_locpath->setToolTip(QCoreApplication::translate("GlobalQueueInterfaceSettingsWidget", "Local path to store files", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        spin_interval->setToolTip(QCoreApplication::translate("GlobalQueueInterfaceSettingsWidget", "<html><head/><body><p>The number of seconds to wait before querying the jobs' statuses again with the queue interface.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        cb_cancelJobAfterTime->setToolTip(QCoreApplication::translate("GlobalQueueInterfaceSettingsWidget", "<html><head/><body><p>Automatically cancel a job after a specified amount of time. The next pending job will then be submitted.</p><p><br/></p><p>This option is present primarily because there are sometimes bugs in optimizers that can cause them to run forever. In addition, every once in a while, XtalOpt does not recognize that a job is no longer in the queue; this option prevents that from eventually stopping all jobs.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        cb_cancelJobAfterTime->setText(QCoreApplication::translate("GlobalQueueInterfaceSettingsWidget", "Automatically cancel job after:", nullptr));
        label_19->setText(QCoreApplication::translate("GlobalQueueInterfaceSettingsWidget", "User:", nullptr));
        label_3->setText(QCoreApplication::translate("GlobalQueueInterfaceSettingsWidget", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600;\">Global Queue Interface Settings</span></p></body></html>", nullptr));
        label->setText(QCoreApplication::translate("GlobalQueueInterfaceSettingsWidget", "Description:", nullptr));
#if QT_CONFIG(tooltip)
        spin_hoursForCancelJobAfterTime->setToolTip(QCoreApplication::translate("GlobalQueueInterfaceSettingsWidget", "<html><head/><body><p>Automatically cancel a job after a specified amount of time. The next pending job will then be submitted.</p><p><br/></p><p>This option is present primarily because there are sometimes bugs in optimizers that can cause them to run forever. In addition, every once in a while, XtalOpt does not recognize that a job is no longer in the queue; this option prevents that from eventually stopping all jobs.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        spin_hoursForCancelJobAfterTime->setSuffix(QCoreApplication::translate("GlobalQueueInterfaceSettingsWidget", " hours", nullptr));
#if QT_CONFIG(tooltip)
        cb_logErrorDirs->setToolTip(QCoreApplication::translate("GlobalQueueInterfaceSettingsWidget", "<html><head/><body><p>Leaves a copy of a directory in which an error occurred in &lt;local_path&gt;/errorDirs.</p><p><br/></p><p>This can help when figuring out why an xtal fails when submitted.</p><p><br/></p><p>Only keeps one copy for each xtal directory (so if an error occurred in 00001x00001 twice, the first error directory would have been overwritten by the second)</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        cb_logErrorDirs->setText(QCoreApplication::translate("GlobalQueueInterfaceSettingsWidget", "Log error directories", nullptr));
        cb_cleanRemoteOnStop->setText(QCoreApplication::translate("GlobalQueueInterfaceSettingsWidget", "Clean remote directories when finished", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GlobalQueueInterfaceSettingsWidget: public Ui_GlobalQueueInterfaceSettingsWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GLOBALQUEUEINTERFACESETTINGSWIDGET_H
