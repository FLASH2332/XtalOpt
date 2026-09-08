/********************************************************************************
** Form generated from reading UI file 'tab_log.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TAB_LOG_H
#define UI_TAB_LOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Tab_Log
{
public:
    QGridLayout *gridLayout;
    QListWidget *list_list;

    void setupUi(QWidget *Tab_Log)
    {
        if (Tab_Log->objectName().isEmpty())
            Tab_Log->setObjectName(QString::fromUtf8("Tab_Log"));
        Tab_Log->resize(1083, 576);
        QFont font;
        font.setPointSize(11);
        Tab_Log->setFont(font);
        gridLayout = new QGridLayout(Tab_Log);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        list_list = new QListWidget(Tab_Log);
        list_list->setObjectName(QString::fromUtf8("list_list"));
        list_list->setFont(font);

        gridLayout->addWidget(list_list, 0, 0, 1, 1);


        retranslateUi(Tab_Log);

        QMetaObject::connectSlotsByName(Tab_Log);
    } // setupUi

    void retranslateUi(QWidget *Tab_Log)
    {
        Tab_Log->setWindowTitle(QCoreApplication::translate("Tab_Log", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Tab_Log: public Ui_Tab_Log {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TAB_LOG_H
