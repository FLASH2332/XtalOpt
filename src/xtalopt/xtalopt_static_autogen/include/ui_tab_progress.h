/********************************************************************************
** Form generated from reading UI file 'tab_progress.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TAB_PROGRESS_H
#define UI_TAB_PROGRESS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Tab_Progress
{
public:
    QGridLayout *gridLayout;
    QLabel *label_36;
    QSpinBox *spin_period;
    QSpacerItem *horizontalSpacer;
    QPushButton *push_refresh;
    QPushButton *push_hull;
    QCheckBox *cb_verbose;
    QPushButton *push_clear;
    QSpacerItem *horizontalSpacer_2;
    QTableWidget *table_list;
    QPushButton *push_refreshAll;

    void setupUi(QWidget *Tab_Progress)
    {
        if (Tab_Progress->objectName().isEmpty())
            Tab_Progress->setObjectName(QString::fromUtf8("Tab_Progress"));
        Tab_Progress->resize(1142, 597);
        QFont font;
        font.setPointSize(11);
        Tab_Progress->setFont(font);
        gridLayout = new QGridLayout(Tab_Progress);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_36 = new QLabel(Tab_Progress);
        label_36->setObjectName(QString::fromUtf8("label_36"));
        label_36->setFont(font);

        gridLayout->addWidget(label_36, 2, 1, 1, 1);

        spin_period = new QSpinBox(Tab_Progress);
        spin_period->setObjectName(QString::fromUtf8("spin_period"));
        spin_period->setFont(font);
        spin_period->setMaximum(3600);
        spin_period->setSingleStep(1);
        spin_period->setValue(1);

        gridLayout->addWidget(spin_period, 2, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 3, 1, 1);

        push_refresh = new QPushButton(Tab_Progress);
        push_refresh->setObjectName(QString::fromUtf8("push_refresh"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(push_refresh->sizePolicy().hasHeightForWidth());
        push_refresh->setSizePolicy(sizePolicy);
        push_refresh->setFont(font);

        gridLayout->addWidget(push_refresh, 2, 0, 1, 1);

        push_hull = new QPushButton(Tab_Progress);
        push_hull->setObjectName(QString::fromUtf8("push_hull"));

        gridLayout->addWidget(push_hull, 2, 8, 1, 1);

        cb_verbose = new QCheckBox(Tab_Progress);
        cb_verbose->setObjectName(QString::fromUtf8("cb_verbose"));

        gridLayout->addWidget(cb_verbose, 2, 4, 1, 1);

        push_clear = new QPushButton(Tab_Progress);
        push_clear->setObjectName(QString::fromUtf8("push_clear"));
        push_clear->setFont(font);

        gridLayout->addWidget(push_clear, 2, 7, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 2, 5, 1, 1);

        table_list = new QTableWidget(Tab_Progress);
        if (table_list->columnCount() < 11)
            table_list->setColumnCount(11);
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
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        __qtablewidgetitem4->setFont(font1);
        table_list->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        __qtablewidgetitem5->setFont(font1);
        table_list->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        __qtablewidgetitem6->setFont(font1);
        table_list->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        __qtablewidgetitem7->setFont(font1);
        table_list->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        __qtablewidgetitem8->setFont(font1);
        table_list->setHorizontalHeaderItem(8, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        __qtablewidgetitem9->setFont(font1);
        table_list->setHorizontalHeaderItem(9, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        __qtablewidgetitem10->setFont(font1);
        table_list->setHorizontalHeaderItem(10, __qtablewidgetitem10);
        table_list->setObjectName(QString::fromUtf8("table_list"));
        table_list->setFont(font1);
        table_list->setContextMenuPolicy(Qt::CustomContextMenu);
        table_list->setEditTriggers(QAbstractItemView::NoEditTriggers);
        table_list->setAlternatingRowColors(true);
        table_list->setSelectionMode(QAbstractItemView::SingleSelection);
        table_list->setSelectionBehavior(QAbstractItemView::SelectRows);
        table_list->setSortingEnabled(false);
        table_list->horizontalHeader()->setMinimumSectionSize(20);
        table_list->horizontalHeader()->setDefaultSectionSize(80);
        table_list->horizontalHeader()->setStretchLastSection(true);
        table_list->verticalHeader()->setMinimumSectionSize(23);
        table_list->verticalHeader()->setDefaultSectionSize(23);

        gridLayout->addWidget(table_list, 0, 0, 1, 10);

        push_refreshAll = new QPushButton(Tab_Progress);
        push_refreshAll->setObjectName(QString::fromUtf8("push_refreshAll"));
        push_refreshAll->setFont(font);

        gridLayout->addWidget(push_refreshAll, 2, 9, 1, 1);

#if QT_CONFIG(shortcut)
        label_36->setBuddy(spin_period);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(table_list, push_refresh);
        QWidget::setTabOrder(push_refresh, spin_period);
        QWidget::setTabOrder(spin_period, cb_verbose);
        QWidget::setTabOrder(cb_verbose, push_clear);
        QWidget::setTabOrder(push_clear, push_refreshAll);

        retranslateUi(Tab_Progress);

        QMetaObject::connectSlotsByName(Tab_Progress);
    } // setupUi

    void retranslateUi(QWidget *Tab_Progress)
    {
        Tab_Progress->setWindowTitle(QCoreApplication::translate("Tab_Progress", "Form", nullptr));
        label_36->setText(QCoreApplication::translate("Tab_Progress", "Refresh period:", nullptr));
        spin_period->setSuffix(QCoreApplication::translate("Tab_Progress", " seconds", nullptr));
#if QT_CONFIG(tooltip)
        push_refresh->setToolTip(QCoreApplication::translate("Tab_Progress", "<html><head/><body><p><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        push_refresh->setText(QCoreApplication::translate("Tab_Progress", "Refresh", nullptr));
#if QT_CONFIG(tooltip)
        push_hull->setToolTip(QCoreApplication::translate("Tab_Progress", "<html><head/><body><p>Refresh the distance above hull (and Pareto front index) of all structures in the list.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        push_hull->setText(QCoreApplication::translate("Tab_Progress", "Refresh Hulls", nullptr));
#if QT_CONFIG(tooltip)
        cb_verbose->setToolTip(QCoreApplication::translate("Tab_Progress", "<html><head/><body><p>If checked, the run output will contain additional information relevant to monitoring the run progress and debugging the code. </p><p>It should be noted that in the GUI mode, the output file &quot;output.log&quot; will be produced only if the code is already compiled with the cmake flag:</p><p>-DXTALOPT_DEBUG=ON</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        cb_verbose->setText(QCoreApplication::translate("Tab_Progress", "Verbose output log file", nullptr));
#if QT_CONFIG(tooltip)
        push_clear->setToolTip(QCoreApplication::translate("Tab_Progress", "<html><head/><body><p>This button is used for VASP runs. It removes any extraneous files<br/>in each local subdirectory in order to reduce disk usage.</p><p>Files kept are structure.state, POTCAR, CONTCAR, and OUTCAR.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        push_clear->setText(QCoreApplication::translate("Tab_Progress", "Remove Extra Files", nullptr));
        QTableWidgetItem *___qtablewidgetitem = table_list->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("Tab_Progress", "Structure", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = table_list->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("Tab_Progress", "Formula", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = table_list->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("Tab_Progress", "Job ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = table_list->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("Tab_Progress", "Status", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = table_list->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("Tab_Progress", "Time Elapsed", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = table_list->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("Tab_Progress", "Enthalpy/Atom", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = table_list->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("Tab_Progress", "Above Hull/Atom", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = table_list->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("Tab_Progress", "Front", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = table_list->horizontalHeaderItem(8);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("Tab_Progress", "Volume/Atom", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = table_list->horizontalHeaderItem(9);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("Tab_Progress", "Space Group", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = table_list->horizontalHeaderItem(10);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("Tab_Progress", "Ancestry", nullptr));
#if QT_CONFIG(tooltip)
        push_refreshAll->setToolTip(QCoreApplication::translate("Tab_Progress", "<html><head/><body><p>Refresh all the information for all structures in the list.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        push_refreshAll->setText(QCoreApplication::translate("Tab_Progress", "Refresh All", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Tab_Progress: public Ui_Tab_Progress {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TAB_PROGRESS_H
