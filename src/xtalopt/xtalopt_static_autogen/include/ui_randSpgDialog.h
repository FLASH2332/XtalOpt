/********************************************************************************
** Form generated from reading UI file 'randSpgDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RANDSPGDIALOG_H
#define UI_RANDSPGDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RandSpgDialog
{
public:
    QGridLayout *gridLayout;
    QPushButton *push_deselectAll;
    QPushButton *push_decrementAll;
    QPushButton *push_selectAll;
    QTableWidget *table_list;
    QPushButton *push_incrementAll;
    QLabel *ui_label;

    void setupUi(QWidget *RandSpgDialog)
    {
        if (RandSpgDialog->objectName().isEmpty())
            RandSpgDialog->setObjectName(QString::fromUtf8("RandSpgDialog"));
        RandSpgDialog->resize(760, 597);
        QFont font;
        font.setPointSize(11);
        RandSpgDialog->setFont(font);
        gridLayout = new QGridLayout(RandSpgDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        push_deselectAll = new QPushButton(RandSpgDialog);
        push_deselectAll->setObjectName(QString::fromUtf8("push_deselectAll"));

        gridLayout->addWidget(push_deselectAll, 2, 2, 1, 1);

        push_decrementAll = new QPushButton(RandSpgDialog);
        push_decrementAll->setObjectName(QString::fromUtf8("push_decrementAll"));

        gridLayout->addWidget(push_decrementAll, 2, 4, 1, 1);

        push_selectAll = new QPushButton(RandSpgDialog);
        push_selectAll->setObjectName(QString::fromUtf8("push_selectAll"));

        gridLayout->addWidget(push_selectAll, 2, 1, 1, 1);

        table_list = new QTableWidget(RandSpgDialog);
        if (table_list->columnCount() < 4)
            table_list->setColumnCount(4);
        QFont font1;
        font1.setPointSize(10);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setFont(font1);
        table_list->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setFont(font1);
        table_list->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setFont(font1);
        table_list->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        __qtablewidgetitem3->setFont(font1);
        table_list->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        table_list->setObjectName(QString::fromUtf8("table_list"));
        table_list->setFont(font1);
        table_list->setContextMenuPolicy(Qt::CustomContextMenu);
        table_list->setEditTriggers(QAbstractItemView::NoEditTriggers);
        table_list->setAlternatingRowColors(true);
        table_list->setSelectionMode(QAbstractItemView::SingleSelection);
        table_list->setSelectionBehavior(QAbstractItemView::SelectRows);
        table_list->setSortingEnabled(false);
        table_list->horizontalHeader()->setVisible(true);
        table_list->horizontalHeader()->setCascadingSectionResizes(true);
        table_list->horizontalHeader()->setMinimumSectionSize(95);
        table_list->horizontalHeader()->setDefaultSectionSize(150);
        table_list->horizontalHeader()->setHighlightSections(true);
        table_list->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        table_list->horizontalHeader()->setStretchLastSection(false);
        table_list->verticalHeader()->setMinimumSectionSize(23);
        table_list->verticalHeader()->setDefaultSectionSize(23);

        gridLayout->addWidget(table_list, 1, 1, 1, 4);

        push_incrementAll = new QPushButton(RandSpgDialog);
        push_incrementAll->setObjectName(QString::fromUtf8("push_incrementAll"));

        gridLayout->addWidget(push_incrementAll, 2, 3, 1, 1);

        ui_label = new QLabel(RandSpgDialog);
        ui_label->setObjectName(QString::fromUtf8("ui_label"));
        ui_label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(ui_label, 0, 2, 1, 2);

        push_selectAll->raise();
        push_deselectAll->raise();
        table_list->raise();
        push_decrementAll->raise();
        push_incrementAll->raise();
        ui_label->raise();

        retranslateUi(RandSpgDialog);

        QMetaObject::connectSlotsByName(RandSpgDialog);
    } // setupUi

    void retranslateUi(QWidget *RandSpgDialog)
    {
        RandSpgDialog->setWindowTitle(QCoreApplication::translate("RandSpgDialog", "Spacegroup Options", nullptr));
        push_deselectAll->setText(QCoreApplication::translate("RandSpgDialog", "Deselect all", nullptr));
        push_decrementAll->setText(QCoreApplication::translate("RandSpgDialog", "Decrement All", nullptr));
        push_selectAll->setText(QCoreApplication::translate("RandSpgDialog", "Select all", nullptr));
        QTableWidgetItem *___qtablewidgetitem = table_list->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("RandSpgDialog", "Space Group", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = table_list->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("RandSpgDialog", "Possible Composition(s)", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = table_list->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("RandSpgDialog", "Allow randSpg?", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = table_list->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("RandSpgDialog", "Min xtals per Spg", nullptr));
        push_incrementAll->setText(QCoreApplication::translate("RandSpgDialog", "Increment All", nullptr));
        ui_label->setText(QCoreApplication::translate("RandSpgDialog", "Empty", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RandSpgDialog: public Ui_RandSpgDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RANDSPGDIALOG_H
