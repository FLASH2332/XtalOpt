/********************************************************************************
** Form generated from reading UI file 'tab_mo.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TAB_MO_H
#define UI_TAB_MO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Tab_Mo
{
public:
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_3;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_4;
    QLineEdit *line_output;
    QComboBox *combo_type;
    QLabel *label_4;
    QLineEdit *line_path;
    QLabel *label_2;
    QDoubleSpinBox *sb_weight;
    QLabel *label;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *push_addObjectives;
    QSpacerItem *horizontalSpacer;
    QCheckBox *cb_redo_objectives;
    QGroupBox *groupBox_12;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *push_removeObjectives;
    QSpacerItem *horizontalSpacer_2;
    QTableWidget *table_objectives;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_5;
    QComboBox *combo_optType;
    QLabel *label_6;
    QCheckBox *cb_crowding;
    QLabel *label_5;
    QSpinBox *sb_prec;
    QCheckBox *cb_tournament;
    QCheckBox *cb_restrictPool;

    void setupUi(QWidget *Tab_Mo)
    {
        if (Tab_Mo->objectName().isEmpty())
            Tab_Mo->setObjectName(QString::fromUtf8("Tab_Mo"));
        Tab_Mo->resize(1140, 635);
        QFont font;
        font.setPointSize(11);
        Tab_Mo->setFont(font);
        Tab_Mo->setFocusPolicy(Qt::StrongFocus);
        gridLayout_2 = new QGridLayout(Tab_Mo);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        groupBox = new QGroupBox(Tab_Mo);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setFont(font);
        gridLayout_3 = new QGridLayout(groupBox);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_4 = new QGridLayout(groupBox_2);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        line_output = new QLineEdit(groupBox_2);
        line_output->setObjectName(QString::fromUtf8("line_output"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(line_output->sizePolicy().hasHeightForWidth());
        line_output->setSizePolicy(sizePolicy);
        line_output->setMinimumSize(QSize(300, 25));
        line_output->setMaximumSize(QSize(1000, 25));
        line_output->setFont(font);

        gridLayout_4->addWidget(line_output, 2, 4, 1, 1);

        combo_type = new QComboBox(groupBox_2);
        combo_type->addItem(QString());
        combo_type->addItem(QString());
        combo_type->addItem(QString());
        combo_type->setObjectName(QString::fromUtf8("combo_type"));
        combo_type->setMinimumSize(QSize(150, 25));
        combo_type->setMaximumSize(QSize(220, 25));
        combo_type->setFont(font);
        combo_type->setMouseTracking(true);
        combo_type->setFocusPolicy(Qt::StrongFocus);
        combo_type->setAutoFillBackground(false);
        combo_type->setEditable(false);

        gridLayout_4->addWidget(combo_type, 1, 2, 1, 1);

        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMinimumSize(QSize(0, 20));
        label_4->setFont(font);

        gridLayout_4->addWidget(label_4, 2, 3, 1, 1);

        line_path = new QLineEdit(groupBox_2);
        line_path->setObjectName(QString::fromUtf8("line_path"));
        sizePolicy.setHeightForWidth(line_path->sizePolicy().hasHeightForWidth());
        line_path->setSizePolicy(sizePolicy);
        line_path->setMinimumSize(QSize(300, 25));
        line_path->setMaximumSize(QSize(1000, 25));
        line_path->setFont(font);

        gridLayout_4->addWidget(line_path, 1, 4, 1, 1);

        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(0, 20));
        label_2->setFont(font);

        gridLayout_4->addWidget(label_2, 1, 3, 1, 1);

        sb_weight = new QDoubleSpinBox(groupBox_2);
        sb_weight->setObjectName(QString::fromUtf8("sb_weight"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(sb_weight->sizePolicy().hasHeightForWidth());
        sb_weight->setSizePolicy(sizePolicy1);
        sb_weight->setMinimumSize(QSize(150, 25));
        sb_weight->setMaximumSize(QSize(220, 25));
        sb_weight->setFont(font);
        sb_weight->setMouseTracking(true);
        sb_weight->setFocusPolicy(Qt::StrongFocus);
        sb_weight->setStyleSheet(QString::fromUtf8(""));
        sb_weight->setButtonSymbols(QAbstractSpinBox::UpDownArrows);
        sb_weight->setMaximum(1.000000000000000);
        sb_weight->setSingleStep(0.050000000000000);

        gridLayout_4->addWidget(sb_weight, 2, 2, 1, 1);

        label = new QLabel(groupBox_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(0, 20));
        label->setFont(font);

        gridLayout_4->addWidget(label, 1, 1, 1, 1);

        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMinimumSize(QSize(0, 20));
        label_3->setFont(font);

        gridLayout_4->addWidget(label_3, 2, 1, 1, 1);


        gridLayout_3->addWidget(groupBox_2, 1, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        push_addObjectives = new QPushButton(groupBox);
        push_addObjectives->setObjectName(QString::fromUtf8("push_addObjectives"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(push_addObjectives->sizePolicy().hasHeightForWidth());
        push_addObjectives->setSizePolicy(sizePolicy2);
        push_addObjectives->setMinimumSize(QSize(160, 25));
        push_addObjectives->setFont(font);
        push_addObjectives->setFocusPolicy(Qt::StrongFocus);

        horizontalLayout_5->addWidget(push_addObjectives);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);


        gridLayout_3->addLayout(horizontalLayout_5, 3, 0, 1, 1);


        gridLayout_2->addWidget(groupBox, 0, 1, 1, 2);

        cb_redo_objectives = new QCheckBox(Tab_Mo);
        cb_redo_objectives->setObjectName(QString::fromUtf8("cb_redo_objectives"));
        cb_redo_objectives->setFont(font);
        cb_redo_objectives->setMouseTracking(true);
        cb_redo_objectives->setFocusPolicy(Qt::StrongFocus);
        cb_redo_objectives->setTristate(false);

        gridLayout_2->addWidget(cb_redo_objectives, 3, 0, 1, 1);

        groupBox_12 = new QGroupBox(Tab_Mo);
        groupBox_12->setObjectName(QString::fromUtf8("groupBox_12"));
        groupBox_12->setMinimumSize(QSize(0, 0));
        groupBox_12->setFont(font);
        gridLayout = new QGridLayout(groupBox_12);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        push_removeObjectives = new QPushButton(groupBox_12);
        push_removeObjectives->setObjectName(QString::fromUtf8("push_removeObjectives"));
        sizePolicy2.setHeightForWidth(push_removeObjectives->sizePolicy().hasHeightForWidth());
        push_removeObjectives->setSizePolicy(sizePolicy2);
        push_removeObjectives->setMinimumSize(QSize(160, 25));
        push_removeObjectives->setFont(font);
        push_removeObjectives->setFocusPolicy(Qt::StrongFocus);

        horizontalLayout_6->addWidget(push_removeObjectives);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_2);


        gridLayout->addLayout(horizontalLayout_6, 2, 0, 1, 1);

        table_objectives = new QTableWidget(groupBox_12);
        if (table_objectives->columnCount() < 4)
            table_objectives->setColumnCount(4);
        QFont font1;
        font1.setPointSize(10);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setFont(font1);
        table_objectives->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setFont(font1);
        table_objectives->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setFont(font1);
        table_objectives->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        __qtablewidgetitem3->setFont(font1);
        table_objectives->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        table_objectives->setObjectName(QString::fromUtf8("table_objectives"));
        table_objectives->setFont(font1);
        table_objectives->setFocusPolicy(Qt::StrongFocus);
        table_objectives->setEditTriggers(QAbstractItemView::NoEditTriggers);
        table_objectives->setTabKeyNavigation(false);
        table_objectives->setProperty("showDropIndicator", QVariant(false));
        table_objectives->setDragDropOverwriteMode(false);
        table_objectives->setSelectionBehavior(QAbstractItemView::SelectRows);
        table_objectives->setWordWrap(true);
        table_objectives->horizontalHeader()->setCascadingSectionResizes(true);
        table_objectives->horizontalHeader()->setMinimumSectionSize(20);
        table_objectives->horizontalHeader()->setDefaultSectionSize(80);
        table_objectives->horizontalHeader()->setHighlightSections(false);
        table_objectives->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        table_objectives->horizontalHeader()->setStretchLastSection(true);
        table_objectives->verticalHeader()->setVisible(false);
        table_objectives->verticalHeader()->setMinimumSectionSize(23);
        table_objectives->verticalHeader()->setDefaultSectionSize(23);

        gridLayout->addWidget(table_objectives, 1, 0, 1, 1);


        gridLayout_2->addWidget(groupBox_12, 2, 0, 1, 3);

        groupBox_3 = new QGroupBox(Tab_Mo);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setFont(font);
        gridLayout_5 = new QGridLayout(groupBox_3);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        combo_optType = new QComboBox(groupBox_3);
        combo_optType->addItem(QString());
        combo_optType->addItem(QString());
        combo_optType->setObjectName(QString::fromUtf8("combo_optType"));
        combo_optType->setFont(font);
        combo_optType->setFocusPolicy(Qt::StrongFocus);
        combo_optType->setEditable(false);

        gridLayout_5->addWidget(combo_optType, 0, 1, 1, 1);

        label_6 = new QLabel(groupBox_3);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font);

        gridLayout_5->addWidget(label_6, 4, 0, 1, 1);

        cb_crowding = new QCheckBox(groupBox_3);
        cb_crowding->setObjectName(QString::fromUtf8("cb_crowding"));
        cb_crowding->setFont(font);
        cb_crowding->setFocusPolicy(Qt::StrongFocus);
        cb_crowding->setChecked(true);

        gridLayout_5->addWidget(cb_crowding, 3, 0, 1, 2);

        label_5 = new QLabel(groupBox_3);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font);

        gridLayout_5->addWidget(label_5, 0, 0, 1, 1);

        sb_prec = new QSpinBox(groupBox_3);
        sb_prec->setObjectName(QString::fromUtf8("sb_prec"));
        sb_prec->setMinimumSize(QSize(0, 25));
        sb_prec->setFont(font);
        sb_prec->setFocusPolicy(Qt::StrongFocus);
        sb_prec->setMinimum(-1);
        sb_prec->setMaximum(24);
        sb_prec->setValue(-1);

        gridLayout_5->addWidget(sb_prec, 4, 1, 1, 1);

        cb_tournament = new QCheckBox(groupBox_3);
        cb_tournament->setObjectName(QString::fromUtf8("cb_tournament"));

        gridLayout_5->addWidget(cb_tournament, 1, 0, 1, 1);

        cb_restrictPool = new QCheckBox(groupBox_3);
        cb_restrictPool->setObjectName(QString::fromUtf8("cb_restrictPool"));

        gridLayout_5->addWidget(cb_restrictPool, 1, 1, 1, 1);


        gridLayout_2->addWidget(groupBox_3, 0, 0, 1, 1);

        QWidget::setTabOrder(combo_optType, cb_crowding);
        QWidget::setTabOrder(cb_crowding, sb_prec);
        QWidget::setTabOrder(sb_prec, combo_type);
        QWidget::setTabOrder(combo_type, sb_weight);
        QWidget::setTabOrder(sb_weight, line_path);
        QWidget::setTabOrder(line_path, line_output);
        QWidget::setTabOrder(line_output, push_addObjectives);
        QWidget::setTabOrder(push_addObjectives, table_objectives);
        QWidget::setTabOrder(table_objectives, push_removeObjectives);
        QWidget::setTabOrder(push_removeObjectives, cb_redo_objectives);

        retranslateUi(Tab_Mo);

        combo_type->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Tab_Mo);
    } // setupUi

    void retranslateUi(QWidget *Tab_Mo)
    {
        Tab_Mo->setWindowTitle(QCoreApplication::translate("Tab_Mo", "Form", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Tab_Mo", "Add New Objectives", nullptr));
        groupBox_2->setTitle(QString());
#if QT_CONFIG(tooltip)
        line_output->setToolTip(QCoreApplication::translate("Tab_Mo", "<html><head/><body><p>Output file name that user-defined script generates. Basically, this is a text file that contains a digit (integer or float) as the &quot;first entry&quot; of its &quot;first line&quot;; which is being read by XtalOpt.</p><p>This entry should not contain any white space character in between.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        line_output->setText(QString());
        combo_type->setItemText(0, QCoreApplication::translate("Tab_Mo", "Minimization", nullptr));
        combo_type->setItemText(1, QCoreApplication::translate("Tab_Mo", "Maximization", nullptr));
        combo_type->setItemText(2, QCoreApplication::translate("Tab_Mo", "Filtration", nullptr));

#if QT_CONFIG(tooltip)
        combo_type->setToolTip(QCoreApplication::translate("Tab_Mo", "<html><head/><body><p>Objective type from:</p><p>1- Minimization</p><p>2- Maximization</p><p>3- Filtration</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        combo_type->setCurrentText(QCoreApplication::translate("Tab_Mo", "Minimization", nullptr));
        label_4->setText(QCoreApplication::translate("Tab_Mo", "Output file name", nullptr));
#if QT_CONFIG(tooltip)
        line_path->setToolTip(QCoreApplication::translate("Tab_Mo", "<html><head/><body><p>The user-defined &quot;executable&quot; script which performs the calculations for objective.</p><p>(1) This entry should include &quot;abolute&quot; path to avoid issues in locating the script.</p><p>(2) This field is mandatory for all objectives.</p><p>(3) For a remote job the script should be on the remote cluster, while for a local run it should be in a local path.</p><p>(4) This field should not contain any white space character in between.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        line_path->setText(QString());
        label_2->setText(QCoreApplication::translate("Tab_Mo", "User-defined script", nullptr));
#if QT_CONFIG(tooltip)
        sb_weight->setToolTip(QCoreApplication::translate("Tab_Mo", "<html><head/><body><p>Optimization weight for the objective.</p><p>(1) This should be a float number, larger than or equal to 0.0, and less than or equal to 1.0.</p><p>(2) For &quot;Filtration&quot; task, this must be set to 0.0.</p><p>(3) Total weight for all objectives should be less than or equal to 1.0.</p><p>(4) If this is set to zero for any non-Filtration objective; that objective is being calculated but will not be included in the optimization.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        label->setText(QCoreApplication::translate("Tab_Mo", "Objective type", nullptr));
        label_3->setText(QCoreApplication::translate("Tab_Mo", "Weight", nullptr));
#if QT_CONFIG(tooltip)
        push_addObjectives->setToolTip(QCoreApplication::translate("Tab_Mo", "<html><head/><body><p>Add an objective:</p><p>(1) A zero weight for any objective results in calculation of that objective; but excluding that from optimization.</p><p>(2) Sum of the total weight for introduced objectives can't exceed 1.0.</p><p>(3) Path to script and output filename entries can't contain any white space character.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        push_addObjectives->setText(QCoreApplication::translate("Tab_Mo", "Add Objective", nullptr));
#if QT_CONFIG(tooltip)
        cb_redo_objectives->setToolTip(QCoreApplication::translate("Tab_Mo", "<html><head/><body><p>If selected, the code will perform the &quot;jobFailAction&quot; task for any structure that is marked for dismissing by a filtration objective.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        cb_redo_objectives->setText(QCoreApplication::translate("Tab_Mo", "Handle structures discarded in filtration", nullptr));
        groupBox_12->setTitle(QCoreApplication::translate("Tab_Mo", "List Of Added Objectives", nullptr));
#if QT_CONFIG(tooltip)
        push_removeObjectives->setToolTip(QCoreApplication::translate("Tab_Mo", "<html><head/><body><p>Remove the selected objective from the list.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        push_removeObjectives->setText(QCoreApplication::translate("Tab_Mo", "Remove Objective", nullptr));
        QTableWidgetItem *___qtablewidgetitem = table_objectives->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("Tab_Mo", "Objective Type", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = table_objectives->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("Tab_Mo", "User Script", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = table_objectives->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("Tab_Mo", "Output Filename", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = table_objectives->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("Tab_Mo", "Weight", nullptr));
#if QT_CONFIG(tooltip)
        groupBox_3->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        groupBox_3->setTitle(QCoreApplication::translate("Tab_Mo", "Optimization", nullptr));
        combo_optType->setItemText(0, QCoreApplication::translate("Tab_Mo", "Basic", nullptr));
        combo_optType->setItemText(1, QCoreApplication::translate("Tab_Mo", "Pareto", nullptr));

#if QT_CONFIG(tooltip)
        combo_optType->setToolTip(QCoreApplication::translate("Tab_Mo", "<html><head/><body><p>Specify the optimization type from the following options:</p><p>(1) Basic: the parent selection is based on the &quot;weighted sum of normalized objective(s) value&quot; that is represented by the (generalized) scalar fitness function.</p><p>(2) Pareto: the parent selection is performed through Pareto optimization, i.e., performing a non-dominated sorting (and optionally applying crowding distances). The rank/distance information are then used to choose a parent structure by a &quot;binary tournament selection&quot; from two randomly chosen structures from the pool.</p><p>For tournament selection in Pareto optimization, if the &quot;Restricted pool&quot; is checked the choice of two random structures will be made from the top &quot;pool size&quot; number of structures from the entire pool.</p><p>Also, if the &quot;Tournament selection&quot; is un-checked, the rank/distance information are converted to a scalar fitness function for the selection of a new parent.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        label_6->setText(QCoreApplication::translate("Tab_Mo", "Numeric precision", nullptr));
#if QT_CONFIG(tooltip)
        cb_crowding->setToolTip(QCoreApplication::translate("Tab_Mo", "<html><head/><body><p>For the case of Pareto optimization, check (uncheck) for using (not using) crowding distances correction to probabilities.</p><p><br/>For &quot;Basic&quot; optimization, this is irrelevant.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        cb_crowding->setText(QCoreApplication::translate("Tab_Mo", "Apply crowding distance adjustments", nullptr));
#if QT_CONFIG(tooltip)
        label_5->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        label_5->setText(QCoreApplication::translate("Tab_Mo", "Optimization type", nullptr));
#if QT_CONFIG(tooltip)
        sb_prec->setToolTip(QCoreApplication::translate("Tab_Mo", "<html><head/><body><p>The percision, in terms of number of decimal digits, used to specify all objective values in calculating the structures' fitness, hence, probability of them being selected for generating an offspring structure.</p><p>This is in particular important if Pareto optimization is used.</p><p>If the precision is set to &quot;-1&quot;, the numerical values will be used as is, i.e., no rounding is performed.</p><p>Default: -1 (no rounding)</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        sb_prec->setSuffix(QString());
#if QT_CONFIG(tooltip)
        cb_tournament->setToolTip(QCoreApplication::translate("Tab_Mo", "<html><head/><body><p>Use the &quot;binary tournament selection&quot; in Pareto optimization, instead of converting the rank/distance information to a scalar fitness function.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        cb_tournament->setText(QCoreApplication::translate("Tab_Mo", "Tournament selection", nullptr));
#if QT_CONFIG(tooltip)
        cb_restrictPool->setToolTip(QCoreApplication::translate("Tab_Mo", "<html><head/><body><p>Applicable only when &quot;tournament selection&quot; is checked; if checked the selection will be done from up to &quot;pool size&quot; number of the &quot;best&quot; structures, instead of randomly choosing the parent structure from the entire pool.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        cb_restrictPool->setText(QCoreApplication::translate("Tab_Mo", "Restricted pool", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Tab_Mo: public Ui_Tab_Mo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TAB_MO_H
