/********************************************************************************
** Form generated from reading UI file 'tab_plot.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TAB_PLOT_H
#define UI_TAB_PLOT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>
#include <xtalopt/ui/xtalopt_plot.h>

QT_BEGIN_NAMESPACE

class Ui_Tab_Plot
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButton;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QGroupBox *gb_trend;
    QGridLayout *gridLayout_3;
    QComboBox *combo_yAxis;
    QLabel *label_23;
    QComboBox *combo_xAxis;
    QCheckBox *cb_labelPoints;
    QLabel *label_34;
    QComboBox *combo_labelType;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_4;
    QCheckBox *cb_showSimilarities;
    QCheckBox *cb_showIncompletes;
    QSpacerItem *verticalSpacer;
    QPushButton *push_refresh;
    XtalOpt::XtalOptPlot *plot;

    void setupUi(QWidget *Tab_Plot)
    {
        if (Tab_Plot->objectName().isEmpty())
            Tab_Plot->setObjectName(QString::fromUtf8("Tab_Plot"));
        Tab_Plot->resize(940, 551);
        QFont font;
        font.setPointSize(11);
        Tab_Plot->setFont(font);
        gridLayout = new QGridLayout(Tab_Plot);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalSpacer_3 = new QSpacerItem(650, 24, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 1, 1, 1, 2);

        pushButton = new QPushButton(Tab_Plot);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setFont(font);
        pushButton->setFocusPolicy(Qt::StrongFocus);
        pushButton->setCheckable(true);
        pushButton->setChecked(false);

        gridLayout->addWidget(pushButton, 1, 3, 1, 1);

        groupBox = new QGroupBox(Tab_Plot);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setFont(font);
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gb_trend = new QGroupBox(groupBox);
        gb_trend->setObjectName(QString::fromUtf8("gb_trend"));
        gridLayout_3 = new QGridLayout(gb_trend);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        combo_yAxis = new QComboBox(gb_trend);
        combo_yAxis->addItem(QString());
        combo_yAxis->addItem(QString());
        combo_yAxis->addItem(QString());
        combo_yAxis->addItem(QString());
        combo_yAxis->addItem(QString());
        combo_yAxis->addItem(QString());
        combo_yAxis->addItem(QString());
        combo_yAxis->addItem(QString());
        combo_yAxis->addItem(QString());
        combo_yAxis->addItem(QString());
        combo_yAxis->addItem(QString());
        combo_yAxis->addItem(QString());
        combo_yAxis->addItem(QString());
        combo_yAxis->addItem(QString());
        combo_yAxis->addItem(QString());
        combo_yAxis->addItem(QString());
        combo_yAxis->setObjectName(QString::fromUtf8("combo_yAxis"));
        combo_yAxis->setFont(font);
        combo_yAxis->setFocusPolicy(Qt::StrongFocus);

        gridLayout_3->addWidget(combo_yAxis, 0, 1, 1, 1);

        label_23 = new QLabel(gb_trend);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setFont(font);
        label_23->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_23, 1, 0, 1, 1);

        combo_xAxis = new QComboBox(gb_trend);
        combo_xAxis->addItem(QString());
        combo_xAxis->addItem(QString());
        combo_xAxis->addItem(QString());
        combo_xAxis->addItem(QString());
        combo_xAxis->addItem(QString());
        combo_xAxis->addItem(QString());
        combo_xAxis->addItem(QString());
        combo_xAxis->addItem(QString());
        combo_xAxis->addItem(QString());
        combo_xAxis->addItem(QString());
        combo_xAxis->addItem(QString());
        combo_xAxis->addItem(QString());
        combo_xAxis->addItem(QString());
        combo_xAxis->addItem(QString());
        combo_xAxis->addItem(QString());
        combo_xAxis->addItem(QString());
        combo_xAxis->setObjectName(QString::fromUtf8("combo_xAxis"));
        combo_xAxis->setFont(font);
        combo_xAxis->setFocusPolicy(Qt::StrongFocus);

        gridLayout_3->addWidget(combo_xAxis, 1, 1, 1, 1);

        cb_labelPoints = new QCheckBox(gb_trend);
        cb_labelPoints->setObjectName(QString::fromUtf8("cb_labelPoints"));
        cb_labelPoints->setFont(font);

        gridLayout_3->addWidget(cb_labelPoints, 2, 0, 1, 1);

        label_34 = new QLabel(gb_trend);
        label_34->setObjectName(QString::fromUtf8("label_34"));
        label_34->setFont(font);
        label_34->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_34, 0, 0, 1, 1);

        combo_labelType = new QComboBox(gb_trend);
        combo_labelType->addItem(QString());
        combo_labelType->addItem(QString());
        combo_labelType->addItem(QString());
        combo_labelType->addItem(QString());
        combo_labelType->addItem(QString());
        combo_labelType->addItem(QString());
        combo_labelType->addItem(QString());
        combo_labelType->addItem(QString());
        combo_labelType->addItem(QString());
        combo_labelType->addItem(QString());
        combo_labelType->addItem(QString());
        combo_labelType->addItem(QString());
        combo_labelType->setObjectName(QString::fromUtf8("combo_labelType"));
        combo_labelType->setFont(font);
        combo_labelType->setFocusPolicy(Qt::StrongFocus);

        gridLayout_3->addWidget(combo_labelType, 2, 1, 1, 1);


        gridLayout_2->addWidget(gb_trend, 0, 0, 1, 2);

        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_4 = new QGridLayout(groupBox_2);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        cb_showSimilarities = new QCheckBox(groupBox_2);
        cb_showSimilarities->setObjectName(QString::fromUtf8("cb_showSimilarities"));
        cb_showSimilarities->setFont(font);
        cb_showSimilarities->setFocusPolicy(Qt::StrongFocus);

        gridLayout_4->addWidget(cb_showSimilarities, 0, 0, 1, 1);

        cb_showIncompletes = new QCheckBox(groupBox_2);
        cb_showIncompletes->setObjectName(QString::fromUtf8("cb_showIncompletes"));
        cb_showIncompletes->setFont(font);
        cb_showIncompletes->setFocusPolicy(Qt::StrongFocus);

        gridLayout_4->addWidget(cb_showIncompletes, 1, 0, 1, 1);


        gridLayout_2->addWidget(groupBox_2, 1, 0, 1, 2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 2, 0, 1, 1);


        gridLayout->addWidget(groupBox, 0, 4, 1, 1);

        push_refresh = new QPushButton(Tab_Plot);
        push_refresh->setObjectName(QString::fromUtf8("push_refresh"));
        push_refresh->setFont(font);
        push_refresh->setFocusPolicy(Qt::StrongFocus);

        gridLayout->addWidget(push_refresh, 1, 0, 1, 1);

        plot = new XtalOpt::XtalOptPlot(Tab_Plot);
        plot->setObjectName(QString::fromUtf8("plot"));
        plot->setFrameShape(QFrame::StyledPanel);
        plot->setFrameShadow(QFrame::Raised);

        gridLayout->addWidget(plot, 0, 0, 1, 4);

#if QT_CONFIG(shortcut)
        label_23->setBuddy(combo_xAxis);
        label_34->setBuddy(combo_yAxis);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(combo_yAxis, combo_xAxis);
        QWidget::setTabOrder(combo_xAxis, cb_labelPoints);
        QWidget::setTabOrder(cb_labelPoints, combo_labelType);
        QWidget::setTabOrder(combo_labelType, cb_showSimilarities);
        QWidget::setTabOrder(cb_showSimilarities, cb_showIncompletes);
        QWidget::setTabOrder(cb_showIncompletes, push_refresh);
        QWidget::setTabOrder(push_refresh, pushButton);

        retranslateUi(Tab_Plot);
        QObject::connect(pushButton, SIGNAL(toggled(bool)), groupBox, SLOT(setVisible(bool)));

        QMetaObject::connectSlotsByName(Tab_Plot);
    } // setupUi

    void retranslateUi(QWidget *Tab_Plot)
    {
        Tab_Plot->setWindowTitle(QCoreApplication::translate("Tab_Plot", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("Tab_Plot", "Toggle Options...", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Tab_Plot", "Options", nullptr));
        gb_trend->setTitle(QCoreApplication::translate("Tab_Plot", "Plot Options", nullptr));
        combo_yAxis->setItemText(0, QCoreApplication::translate("Tab_Plot", "Structure Index", nullptr));
        combo_yAxis->setItemText(1, QCoreApplication::translate("Tab_Plot", "Above Hull Per Atom", nullptr));
        combo_yAxis->setItemText(2, QCoreApplication::translate("Tab_Plot", "Enthalpy per Atom", nullptr));
        combo_yAxis->setItemText(3, QCoreApplication::translate("Tab_Plot", "Volume per Atom", nullptr));
        combo_yAxis->setItemText(4, QCoreApplication::translate("Tab_Plot", "Pareto Front", nullptr));
        combo_yAxis->setItemText(5, QCoreApplication::translate("Tab_Plot", "PV Enthalpy Term", nullptr));
        combo_yAxis->setItemText(6, QCoreApplication::translate("Tab_Plot", "Enthalpy", nullptr));
        combo_yAxis->setItemText(7, QCoreApplication::translate("Tab_Plot", "Energy", nullptr));
        combo_yAxis->setItemText(8, QCoreApplication::translate("Tab_Plot", "Volume", nullptr));
        combo_yAxis->setItemText(9, QCoreApplication::translate("Tab_Plot", "Generation", nullptr));
        combo_yAxis->setItemText(10, QCoreApplication::translate("Tab_Plot", "A", nullptr));
        combo_yAxis->setItemText(11, QCoreApplication::translate("Tab_Plot", "B", nullptr));
        combo_yAxis->setItemText(12, QCoreApplication::translate("Tab_Plot", "C", nullptr));
        combo_yAxis->setItemText(13, QCoreApplication::translate("Tab_Plot", "\316\261", nullptr));
        combo_yAxis->setItemText(14, QCoreApplication::translate("Tab_Plot", "\316\262", nullptr));
        combo_yAxis->setItemText(15, QCoreApplication::translate("Tab_Plot", "\316\263", nullptr));

        label_23->setText(QCoreApplication::translate("Tab_Plot", "X axis label", nullptr));
        combo_xAxis->setItemText(0, QCoreApplication::translate("Tab_Plot", "Structure Index", nullptr));
        combo_xAxis->setItemText(1, QCoreApplication::translate("Tab_Plot", "Above Hull per Atom", nullptr));
        combo_xAxis->setItemText(2, QCoreApplication::translate("Tab_Plot", "Enthalpy per Atom", nullptr));
        combo_xAxis->setItemText(3, QCoreApplication::translate("Tab_Plot", "Volume per Atom", nullptr));
        combo_xAxis->setItemText(4, QCoreApplication::translate("Tab_Plot", "Pareto Front", nullptr));
        combo_xAxis->setItemText(5, QCoreApplication::translate("Tab_Plot", "PV Enthalpy term", nullptr));
        combo_xAxis->setItemText(6, QCoreApplication::translate("Tab_Plot", "Enthalpy", nullptr));
        combo_xAxis->setItemText(7, QCoreApplication::translate("Tab_Plot", "Energy", nullptr));
        combo_xAxis->setItemText(8, QCoreApplication::translate("Tab_Plot", "Volume", nullptr));
        combo_xAxis->setItemText(9, QCoreApplication::translate("Tab_Plot", "Generation", nullptr));
        combo_xAxis->setItemText(10, QCoreApplication::translate("Tab_Plot", "A", nullptr));
        combo_xAxis->setItemText(11, QCoreApplication::translate("Tab_Plot", "B", nullptr));
        combo_xAxis->setItemText(12, QCoreApplication::translate("Tab_Plot", "C", nullptr));
        combo_xAxis->setItemText(13, QCoreApplication::translate("Tab_Plot", "\316\261", nullptr));
        combo_xAxis->setItemText(14, QCoreApplication::translate("Tab_Plot", "\316\262", nullptr));
        combo_xAxis->setItemText(15, QCoreApplication::translate("Tab_Plot", "\316\263", nullptr));

        cb_labelPoints->setText(QCoreApplication::translate("Tab_Plot", "Label points", nullptr));
        label_34->setText(QCoreApplication::translate("Tab_Plot", "Y axis label", nullptr));
        combo_labelType->setItemText(0, QCoreApplication::translate("Tab_Plot", "Structure Tag", nullptr));
        combo_labelType->setItemText(1, QCoreApplication::translate("Tab_Plot", "Structure Index", nullptr));
        combo_labelType->setItemText(2, QCoreApplication::translate("Tab_Plot", "SG Number", nullptr));
        combo_labelType->setItemText(3, QCoreApplication::translate("Tab_Plot", "SG Symbol", nullptr));
        combo_labelType->setItemText(4, QCoreApplication::translate("Tab_Plot", "Pareto Front", nullptr));
        combo_labelType->setItemText(5, QCoreApplication::translate("Tab_Plot", "Above Hull per Atom", nullptr));
        combo_labelType->setItemText(6, QCoreApplication::translate("Tab_Plot", "Enthalpy per Atom", nullptr));
        combo_labelType->setItemText(7, QCoreApplication::translate("Tab_Plot", "Volume per Atom", nullptr));
        combo_labelType->setItemText(8, QCoreApplication::translate("Tab_Plot", "PV Enthalpy Term", nullptr));
        combo_labelType->setItemText(9, QCoreApplication::translate("Tab_Plot", "Enthalpy", nullptr));
        combo_labelType->setItemText(10, QCoreApplication::translate("Tab_Plot", "Energy", nullptr));
        combo_labelType->setItemText(11, QCoreApplication::translate("Tab_Plot", "Generation", nullptr));

        groupBox_2->setTitle(QCoreApplication::translate("Tab_Plot", "Data Options", nullptr));
        cb_showSimilarities->setText(QCoreApplication::translate("Tab_Plot", "Show similar structures", nullptr));
        cb_showIncompletes->setText(QCoreApplication::translate("Tab_Plot", "Show incomplete structures", nullptr));
        push_refresh->setText(QCoreApplication::translate("Tab_Plot", "Refresh", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Tab_Plot: public Ui_Tab_Plot {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TAB_PLOT_H
