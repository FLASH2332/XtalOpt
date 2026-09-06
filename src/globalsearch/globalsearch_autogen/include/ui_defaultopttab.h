/********************************************************************************
** Form generated from reading UI file 'defaultopttab.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEFAULTOPTTAB_H
#define UI_DEFAULTOPTTAB_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DefaultOptTab
{
public:
    QGridLayout *gridLayout;
    QLabel *label_6;
    QComboBox *combo_queueInterfaces;
    QPushButton *push_queueInterfaceConfig;
    QTextEdit *edit_edit;
    QListWidget *list_edit;
    QLabel *label_5;
    QComboBox *combo_optimizers;
    QPushButton *push_optimizerConfig;
    QLabel *label_15;
    QComboBox *combo_templates;
    QListWidget *list_optStep;
    QPushButton *push_add;
    QPushButton *push_remove;
    QPushButton *push_help;
    QPushButton *push_saveScheme;
    QPushButton *push_loadScheme;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *edit_user1;
    QLineEdit *edit_user2;
    QLineEdit *edit_user3;
    QLineEdit *edit_user4;

    void setupUi(QWidget *DefaultOptTab)
    {
        if (DefaultOptTab->objectName().isEmpty())
            DefaultOptTab->setObjectName(QString::fromUtf8("DefaultOptTab"));
        DefaultOptTab->resize(969, 622);
        QFont font;
        font.setPointSize(11);
        DefaultOptTab->setFont(font);
        gridLayout = new QGridLayout(DefaultOptTab);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_6 = new QLabel(DefaultOptTab);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy);
        label_6->setFont(font);
        label_6->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(label_6, 0, 0, 1, 1);

        combo_queueInterfaces = new QComboBox(DefaultOptTab);
        combo_queueInterfaces->setObjectName(QString::fromUtf8("combo_queueInterfaces"));
        combo_queueInterfaces->setMinimumSize(QSize(0, 25));
        combo_queueInterfaces->setFont(font);
        combo_queueInterfaces->setFocusPolicy(Qt::StrongFocus);

        gridLayout->addWidget(combo_queueInterfaces, 0, 1, 1, 3);

        push_queueInterfaceConfig = new QPushButton(DefaultOptTab);
        push_queueInterfaceConfig->setObjectName(QString::fromUtf8("push_queueInterfaceConfig"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(push_queueInterfaceConfig->sizePolicy().hasHeightForWidth());
        push_queueInterfaceConfig->setSizePolicy(sizePolicy1);
        push_queueInterfaceConfig->setFont(font);
        push_queueInterfaceConfig->setFocusPolicy(Qt::StrongFocus);

        gridLayout->addWidget(push_queueInterfaceConfig, 0, 4, 1, 1);

        edit_edit = new QTextEdit(DefaultOptTab);
        edit_edit->setObjectName(QString::fromUtf8("edit_edit"));
        QSizePolicy sizePolicy2(QSizePolicy::MinimumExpanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(edit_edit->sizePolicy().hasHeightForWidth());
        edit_edit->setSizePolicy(sizePolicy2);
        edit_edit->setFont(font);

        gridLayout->addWidget(edit_edit, 0, 5, 10, 1);

        list_edit = new QListWidget(DefaultOptTab);
        list_edit->setObjectName(QString::fromUtf8("list_edit"));
        sizePolicy2.setHeightForWidth(list_edit->sizePolicy().hasHeightForWidth());
        list_edit->setSizePolicy(sizePolicy2);
        list_edit->setFont(font);

        gridLayout->addWidget(list_edit, 0, 6, 10, 1);

        label_5 = new QLabel(DefaultOptTab);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font);
        label_5->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(label_5, 1, 0, 1, 1);

        combo_optimizers = new QComboBox(DefaultOptTab);
        combo_optimizers->setObjectName(QString::fromUtf8("combo_optimizers"));
        combo_optimizers->setMinimumSize(QSize(0, 25));
        combo_optimizers->setFont(font);
        combo_optimizers->setFocusPolicy(Qt::StrongFocus);

        gridLayout->addWidget(combo_optimizers, 1, 1, 1, 3);

        push_optimizerConfig = new QPushButton(DefaultOptTab);
        push_optimizerConfig->setObjectName(QString::fromUtf8("push_optimizerConfig"));
        push_optimizerConfig->setFont(font);
        push_optimizerConfig->setFocusPolicy(Qt::StrongFocus);

        gridLayout->addWidget(push_optimizerConfig, 1, 4, 1, 1);

        label_15 = new QLabel(DefaultOptTab);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setFont(font);
        label_15->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(label_15, 2, 0, 1, 1);

        combo_templates = new QComboBox(DefaultOptTab);
        combo_templates->setObjectName(QString::fromUtf8("combo_templates"));
        combo_templates->setMinimumSize(QSize(0, 25));
        combo_templates->setFont(font);
        combo_templates->setFocusPolicy(Qt::StrongFocus);

        gridLayout->addWidget(combo_templates, 2, 1, 1, 3);

        list_optStep = new QListWidget(DefaultOptTab);
        list_optStep->setObjectName(QString::fromUtf8("list_optStep"));
        list_optStep->setFont(font);

        gridLayout->addWidget(list_optStep, 3, 0, 1, 5);

        push_add = new QPushButton(DefaultOptTab);
        push_add->setObjectName(QString::fromUtf8("push_add"));
        push_add->setFont(font);
        push_add->setFocusPolicy(Qt::StrongFocus);

        gridLayout->addWidget(push_add, 4, 0, 1, 2);

        push_remove = new QPushButton(DefaultOptTab);
        push_remove->setObjectName(QString::fromUtf8("push_remove"));
        push_remove->setFont(font);
        push_remove->setFocusPolicy(Qt::StrongFocus);

        gridLayout->addWidget(push_remove, 4, 2, 1, 2);

        push_help = new QPushButton(DefaultOptTab);
        push_help->setObjectName(QString::fromUtf8("push_help"));
        push_help->setFont(font);
        push_help->setFocusPolicy(Qt::StrongFocus);

        gridLayout->addWidget(push_help, 4, 4, 1, 1);

        push_saveScheme = new QPushButton(DefaultOptTab);
        push_saveScheme->setObjectName(QString::fromUtf8("push_saveScheme"));
        push_saveScheme->setFont(font);
        push_saveScheme->setFocusPolicy(Qt::StrongFocus);

        gridLayout->addWidget(push_saveScheme, 5, 0, 1, 3);

        push_loadScheme = new QPushButton(DefaultOptTab);
        push_loadScheme->setObjectName(QString::fromUtf8("push_loadScheme"));
        push_loadScheme->setFont(font);
        push_loadScheme->setFocusPolicy(Qt::StrongFocus);

        gridLayout->addWidget(push_loadScheme, 5, 3, 1, 2);

        label = new QLabel(DefaultOptTab);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font);
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label, 6, 0, 1, 1);

        label_2 = new QLabel(DefaultOptTab);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_2, 7, 0, 1, 1);

        label_3 = new QLabel(DefaultOptTab);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_3, 8, 0, 1, 1);

        label_4 = new QLabel(DefaultOptTab);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_4, 9, 0, 1, 1);

        edit_user1 = new QLineEdit(DefaultOptTab);
        edit_user1->setObjectName(QString::fromUtf8("edit_user1"));
        edit_user1->setMinimumSize(QSize(0, 25));
        edit_user1->setFont(font);

        gridLayout->addWidget(edit_user1, 6, 1, 1, 4);

        edit_user2 = new QLineEdit(DefaultOptTab);
        edit_user2->setObjectName(QString::fromUtf8("edit_user2"));
        edit_user2->setMinimumSize(QSize(0, 25));
        edit_user2->setFont(font);

        gridLayout->addWidget(edit_user2, 7, 1, 1, 4);

        edit_user3 = new QLineEdit(DefaultOptTab);
        edit_user3->setObjectName(QString::fromUtf8("edit_user3"));
        edit_user3->setMinimumSize(QSize(0, 25));
        edit_user3->setFont(font);

        gridLayout->addWidget(edit_user3, 8, 1, 1, 4);

        edit_user4 = new QLineEdit(DefaultOptTab);
        edit_user4->setObjectName(QString::fromUtf8("edit_user4"));
        edit_user4->setMinimumSize(QSize(0, 25));
        edit_user4->setFont(font);

        gridLayout->addWidget(edit_user4, 9, 1, 1, 4);

#if QT_CONFIG(shortcut)
        label_6->setBuddy(combo_queueInterfaces);
        label_5->setBuddy(combo_optimizers);
        label_15->setBuddy(combo_templates);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(combo_queueInterfaces, push_queueInterfaceConfig);
        QWidget::setTabOrder(push_queueInterfaceConfig, combo_optimizers);
        QWidget::setTabOrder(combo_optimizers, push_optimizerConfig);
        QWidget::setTabOrder(push_optimizerConfig, combo_templates);
        QWidget::setTabOrder(combo_templates, list_optStep);
        QWidget::setTabOrder(list_optStep, push_add);
        QWidget::setTabOrder(push_add, push_remove);
        QWidget::setTabOrder(push_remove, push_help);
        QWidget::setTabOrder(push_help, push_saveScheme);
        QWidget::setTabOrder(push_saveScheme, push_loadScheme);
        QWidget::setTabOrder(push_loadScheme, edit_user1);
        QWidget::setTabOrder(edit_user1, edit_user2);
        QWidget::setTabOrder(edit_user2, edit_user3);
        QWidget::setTabOrder(edit_user3, edit_user4);
        QWidget::setTabOrder(edit_user4, edit_edit);
        QWidget::setTabOrder(edit_edit, list_edit);

        retranslateUi(DefaultOptTab);

        QMetaObject::connectSlotsByName(DefaultOptTab);
    } // setupUi

    void retranslateUi(QWidget *DefaultOptTab)
    {
        DefaultOptTab->setWindowTitle(QCoreApplication::translate("DefaultOptTab", "Form", nullptr));
        label_6->setText(QCoreApplication::translate("DefaultOptTab", "Queue", nullptr));
        push_queueInterfaceConfig->setText(QCoreApplication::translate("DefaultOptTab", "Configure...", nullptr));
        label_5->setText(QCoreApplication::translate("DefaultOptTab", "Optimizer", nullptr));
        push_optimizerConfig->setText(QCoreApplication::translate("DefaultOptTab", "Configure...", nullptr));
        label_15->setText(QCoreApplication::translate("DefaultOptTab", "Template", nullptr));
        push_add->setText(QCoreApplication::translate("DefaultOptTab", "Add..", nullptr));
        push_remove->setText(QCoreApplication::translate("DefaultOptTab", "Remove...", nullptr));
        push_help->setText(QCoreApplication::translate("DefaultOptTab", "Help", nullptr));
        push_saveScheme->setText(QCoreApplication::translate("DefaultOptTab", "Save Opt Scheme", nullptr));
        push_loadScheme->setText(QCoreApplication::translate("DefaultOptTab", "Load Opt Scheme", nullptr));
        label->setText(QCoreApplication::translate("DefaultOptTab", "user1", nullptr));
        label_2->setText(QCoreApplication::translate("DefaultOptTab", "user2", nullptr));
        label_3->setText(QCoreApplication::translate("DefaultOptTab", "user3", nullptr));
        label_4->setText(QCoreApplication::translate("DefaultOptTab", "user4", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DefaultOptTab: public Ui_DefaultOptTab {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEFAULTOPTTAB_H
