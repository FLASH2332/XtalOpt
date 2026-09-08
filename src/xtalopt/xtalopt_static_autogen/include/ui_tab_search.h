/********************************************************************************
** Form generated from reading UI file 'tab_search.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TAB_SEARCH_H
#define UI_TAB_SEARCH_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Tab_Opt
{
public:
    QGridLayout *gridLayout_7;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_12;
    QPushButton *push_removeSeed;
    QListWidget *list_seeds;
    QPushButton *push_addSeed;
    QGroupBox *groupBox_6;
    QGridLayout *gridLayout_6;
    QFrame *line_8;
    QLabel *label_3;
    QLabel *label_22;
    QLabel *label_27;
    QDoubleSpinBox *spin_strip_amp_max;
    QDoubleSpinBox *spin_perm_strainStdev_max;
    QDoubleSpinBox *spin_strip_amp_min;
    QLabel *label_30;
    QLabel *label_19;
    QDoubleSpinBox *spin_strip_strainStdev_max;
    QSpinBox *spin_cross_minimumContribution;
    QLabel *label_7;
    QSpinBox *spin_strip_per2;
    QSpinBox *spin_perm_ex;
    QFrame *line;
    QFrame *line_2;
    QLabel *label_11;
    QSpinBox *spin_strip_per1;
    QLabel *label_5;
    QLabel *label_18;
    QSpinBox *sb_rand_supercell;
    QLabel *label_8;
    QLabel *label_6;
    QDoubleSpinBox *spin_strip_strainStdev_min;
    QSpinBox *sb_ncuts;
    QLabel *label_20;
    QSpacerItem *verticalSpacer;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox_9;
    QGridLayout *gridLayout_4;
    QLabel *label_2;
    QDoubleSpinBox *spin_tol_xcAngle;
    QLabel *label;
    QDoubleSpinBox *spin_tol_xcLength;
    QPushButton *push_sim_reset;
    QGroupBox *groupBox_11;
    QGridLayout *gridLayout_10;
    QLabel *label_15;
    QDoubleSpinBox *spin_rdf_sig;
    QDoubleSpinBox *spin_rdf_tol;
    QLabel *label_16;
    QSpinBox *spin_rdf_bin;
    QLabel *label_13;
    QDoubleSpinBox *spin_rdf_cut;
    QLabel *label_14;
    QPushButton *push_sim_reset_2;
    QGroupBox *groupBox_8;
    QGridLayout *gridLayout_5;
    QLabel *label_10;
    QDoubleSpinBox *spin_tol_spg;
    QPushButton *push_spg_reset;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout;
    QComboBox *combo_failAction;
    QSpinBox *spin_numInitial;
    QSpinBox *spin_contStructs;
    QLabel *label_26;
    QSpinBox *spin_runningJobLimit;
    QLabel *label_genTotal;
    QLabel *label_12;
    QSpinBox *spin_parentsPoolSize;
    QSpinBox *spin_cutoff;
    QFrame *line_3;
    QLabel *label_4;
    QLabel *label_9;
    QCheckBox *cb_limitRunningJobs;
    QSpinBox *spin_failLimit;
    QCheckBox *cb_saveHulls;
    QGroupBox *groupBox_5;
    QGridLayout *gridLayout_9;
    QLabel *label_29;
    QSpinBox *spin_p_cross;
    QSpinBox *spin_p_strip;
    QSpinBox *spin_p_atom;
    QLabel *label_31;
    QLabel *label_17;
    QSpinBox *spin_p_perm;
    QLabel *label_25;
    QLabel *label_21;
    QSpinBox *spin_p_comp;

    void setupUi(QWidget *Tab_Opt)
    {
        if (Tab_Opt->objectName().isEmpty())
            Tab_Opt->setObjectName(QString::fromUtf8("Tab_Opt"));
        Tab_Opt->resize(1140, 635);
        QFont font;
        font.setPointSize(11);
        Tab_Opt->setFont(font);
        gridLayout_7 = new QGridLayout(Tab_Opt);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        groupBox_3 = new QGroupBox(Tab_Opt);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setFont(font);
        gridLayout_12 = new QGridLayout(groupBox_3);
        gridLayout_12->setObjectName(QString::fromUtf8("gridLayout_12"));
        push_removeSeed = new QPushButton(groupBox_3);
        push_removeSeed->setObjectName(QString::fromUtf8("push_removeSeed"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(push_removeSeed->sizePolicy().hasHeightForWidth());
        push_removeSeed->setSizePolicy(sizePolicy);
        push_removeSeed->setFont(font);

        gridLayout_12->addWidget(push_removeSeed, 1, 1, 1, 1);

        list_seeds = new QListWidget(groupBox_3);
        list_seeds->setObjectName(QString::fromUtf8("list_seeds"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(list_seeds->sizePolicy().hasHeightForWidth());
        list_seeds->setSizePolicy(sizePolicy1);
        list_seeds->setFont(font);

        gridLayout_12->addWidget(list_seeds, 0, 0, 1, 2);

        push_addSeed = new QPushButton(groupBox_3);
        push_addSeed->setObjectName(QString::fromUtf8("push_addSeed"));
        sizePolicy.setHeightForWidth(push_addSeed->sizePolicy().hasHeightForWidth());
        push_addSeed->setSizePolicy(sizePolicy);
        push_addSeed->setFont(font);

        gridLayout_12->addWidget(push_addSeed, 1, 0, 1, 1);


        gridLayout_7->addWidget(groupBox_3, 4, 0, 2, 1);

        groupBox_6 = new QGroupBox(Tab_Opt);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        groupBox_6->setMaximumSize(QSize(16777215, 350));
        groupBox_6->setFont(font);
        gridLayout_6 = new QGridLayout(groupBox_6);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        line_8 = new QFrame(groupBox_6);
        line_8->setObjectName(QString::fromUtf8("line_8"));
        line_8->setFrameShape(QFrame::HLine);
        line_8->setFrameShadow(QFrame::Sunken);

        gridLayout_6->addWidget(line_8, 1, 0, 1, 5);

        label_3 = new QLabel(groupBox_6);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy2);
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_6->addWidget(label_3, 2, 1, 1, 1);

        label_22 = new QLabel(groupBox_6);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        sizePolicy2.setHeightForWidth(label_22->sizePolicy().hasHeightForWidth());
        label_22->setSizePolicy(sizePolicy2);

        gridLayout_6->addWidget(label_22, 3, 1, 1, 1);

        label_27 = new QLabel(groupBox_6);
        label_27->setObjectName(QString::fromUtf8("label_27"));
        sizePolicy2.setHeightForWidth(label_27->sizePolicy().hasHeightForWidth());
        label_27->setSizePolicy(sizePolicy2);
        label_27->setFont(font);
        label_27->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_6->addWidget(label_27, 9, 1, 1, 1);

        spin_strip_amp_max = new QDoubleSpinBox(groupBox_6);
        spin_strip_amp_max->setObjectName(QString::fromUtf8("spin_strip_amp_max"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(spin_strip_amp_max->sizePolicy().hasHeightForWidth());
        spin_strip_amp_max->setSizePolicy(sizePolicy3);
        spin_strip_amp_max->setMinimumSize(QSize(0, 25));
        spin_strip_amp_max->setFont(font);
        spin_strip_amp_max->setDecimals(3);
        spin_strip_amp_max->setMaximum(1.000000000000000);
        spin_strip_amp_max->setSingleStep(0.050000000000000);
        spin_strip_amp_max->setValue(1.000000000000000);

        gridLayout_6->addWidget(spin_strip_amp_max, 10, 4, 1, 1);

        spin_perm_strainStdev_max = new QDoubleSpinBox(groupBox_6);
        spin_perm_strainStdev_max->setObjectName(QString::fromUtf8("spin_perm_strainStdev_max"));
        sizePolicy3.setHeightForWidth(spin_perm_strainStdev_max->sizePolicy().hasHeightForWidth());
        spin_perm_strainStdev_max->setSizePolicy(sizePolicy3);
        spin_perm_strainStdev_max->setMinimumSize(QSize(0, 25));
        spin_perm_strainStdev_max->setFont(font);
        spin_perm_strainStdev_max->setDecimals(3);
        spin_perm_strainStdev_max->setValue(0.500000000000000);

        gridLayout_6->addWidget(spin_perm_strainStdev_max, 6, 3, 1, 2);

        spin_strip_amp_min = new QDoubleSpinBox(groupBox_6);
        spin_strip_amp_min->setObjectName(QString::fromUtf8("spin_strip_amp_min"));
        sizePolicy3.setHeightForWidth(spin_strip_amp_min->sizePolicy().hasHeightForWidth());
        spin_strip_amp_min->setSizePolicy(sizePolicy3);
        spin_strip_amp_min->setMinimumSize(QSize(0, 25));
        spin_strip_amp_min->setFont(font);
        spin_strip_amp_min->setDecimals(3);
        spin_strip_amp_min->setMaximum(1.000000000000000);
        spin_strip_amp_min->setSingleStep(0.050000000000000);
        spin_strip_amp_min->setValue(0.500000000000000);

        gridLayout_6->addWidget(spin_strip_amp_min, 10, 3, 1, 1);

        label_30 = new QLabel(groupBox_6);
        label_30->setObjectName(QString::fromUtf8("label_30"));
        sizePolicy2.setHeightForWidth(label_30->sizePolicy().hasHeightForWidth());
        label_30->setSizePolicy(sizePolicy2);
        label_30->setFont(font);
        label_30->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_6->addWidget(label_30, 7, 1, 1, 1);

        label_19 = new QLabel(groupBox_6);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setFont(font);

        gridLayout_6->addWidget(label_19, 6, 0, 1, 1);

        spin_strip_strainStdev_max = new QDoubleSpinBox(groupBox_6);
        spin_strip_strainStdev_max->setObjectName(QString::fromUtf8("spin_strip_strainStdev_max"));
        sizePolicy3.setHeightForWidth(spin_strip_strainStdev_max->sizePolicy().hasHeightForWidth());
        spin_strip_strainStdev_max->setSizePolicy(sizePolicy3);
        spin_strip_strainStdev_max->setMinimumSize(QSize(0, 25));
        spin_strip_strainStdev_max->setFont(font);
        spin_strip_strainStdev_max->setDecimals(3);
        spin_strip_strainStdev_max->setMaximum(2.000000000000000);
        spin_strip_strainStdev_max->setSingleStep(0.100000000000000);
        spin_strip_strainStdev_max->setValue(0.500000000000000);

        gridLayout_6->addWidget(spin_strip_strainStdev_max, 9, 4, 1, 1);

        spin_cross_minimumContribution = new QSpinBox(groupBox_6);
        spin_cross_minimumContribution->setObjectName(QString::fromUtf8("spin_cross_minimumContribution"));
        sizePolicy3.setHeightForWidth(spin_cross_minimumContribution->sizePolicy().hasHeightForWidth());
        spin_cross_minimumContribution->setSizePolicy(sizePolicy3);
        spin_cross_minimumContribution->setMinimumSize(QSize(0, 25));
        spin_cross_minimumContribution->setFont(font);
        spin_cross_minimumContribution->setMaximum(50);
        spin_cross_minimumContribution->setValue(20);

        gridLayout_6->addWidget(spin_cross_minimumContribution, 3, 3, 1, 2);

        label_7 = new QLabel(groupBox_6);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        sizePolicy2.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy2);
        label_7->setFont(font);
        label_7->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_6->addWidget(label_7, 11, 1, 1, 1);

        spin_strip_per2 = new QSpinBox(groupBox_6);
        spin_strip_per2->setObjectName(QString::fromUtf8("spin_strip_per2"));
        sizePolicy3.setHeightForWidth(spin_strip_per2->sizePolicy().hasHeightForWidth());
        spin_strip_per2->setSizePolicy(sizePolicy3);
        spin_strip_per2->setMinimumSize(QSize(0, 25));
        spin_strip_per2->setFont(font);
        spin_strip_per2->setValue(1);

        gridLayout_6->addWidget(spin_strip_per2, 12, 3, 1, 2);

        spin_perm_ex = new QSpinBox(groupBox_6);
        spin_perm_ex->setObjectName(QString::fromUtf8("spin_perm_ex"));
        sizePolicy3.setHeightForWidth(spin_perm_ex->sizePolicy().hasHeightForWidth());
        spin_perm_ex->setSizePolicy(sizePolicy3);
        spin_perm_ex->setMinimumSize(QSize(0, 25));
        spin_perm_ex->setFont(font);
        spin_perm_ex->setMaximum(100);
        spin_perm_ex->setValue(4);

        gridLayout_6->addWidget(spin_perm_ex, 7, 3, 1, 2);

        line = new QFrame(groupBox_6);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_6->addWidget(line, 5, 0, 1, 5);

        line_2 = new QFrame(groupBox_6);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout_6->addWidget(line_2, 8, 0, 1, 5);

        label_11 = new QLabel(groupBox_6);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setFont(font);

        gridLayout_6->addWidget(label_11, 0, 0, 1, 2);

        spin_strip_per1 = new QSpinBox(groupBox_6);
        spin_strip_per1->setObjectName(QString::fromUtf8("spin_strip_per1"));
        sizePolicy3.setHeightForWidth(spin_strip_per1->sizePolicy().hasHeightForWidth());
        spin_strip_per1->setSizePolicy(sizePolicy3);
        spin_strip_per1->setMinimumSize(QSize(0, 25));
        spin_strip_per1->setFont(font);
        spin_strip_per1->setValue(1);

        gridLayout_6->addWidget(spin_strip_per1, 11, 3, 1, 2);

        label_5 = new QLabel(groupBox_6);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        sizePolicy2.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy2);
        label_5->setFont(font);
        label_5->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_6->addWidget(label_5, 6, 1, 1, 1);

        label_18 = new QLabel(groupBox_6);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setFont(font);

        gridLayout_6->addWidget(label_18, 2, 0, 1, 1);

        sb_rand_supercell = new QSpinBox(groupBox_6);
        sb_rand_supercell->setObjectName(QString::fromUtf8("sb_rand_supercell"));
        sb_rand_supercell->setMinimumSize(QSize(0, 25));
        sb_rand_supercell->setFont(font);
        sb_rand_supercell->setMaximum(100);

        gridLayout_6->addWidget(sb_rand_supercell, 0, 3, 1, 2);

        label_8 = new QLabel(groupBox_6);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        sizePolicy2.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy2);
        label_8->setFont(font);
        label_8->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_6->addWidget(label_8, 12, 1, 1, 1);

        label_6 = new QLabel(groupBox_6);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        sizePolicy2.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy2);
        label_6->setFont(font);
        label_6->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_6->addWidget(label_6, 10, 1, 1, 1);

        spin_strip_strainStdev_min = new QDoubleSpinBox(groupBox_6);
        spin_strip_strainStdev_min->setObjectName(QString::fromUtf8("spin_strip_strainStdev_min"));
        sizePolicy3.setHeightForWidth(spin_strip_strainStdev_min->sizePolicy().hasHeightForWidth());
        spin_strip_strainStdev_min->setSizePolicy(sizePolicy3);
        spin_strip_strainStdev_min->setMinimumSize(QSize(0, 25));
        spin_strip_strainStdev_min->setFont(font);
        spin_strip_strainStdev_min->setDecimals(3);
        spin_strip_strainStdev_min->setMaximum(2.000000000000000);
        spin_strip_strainStdev_min->setSingleStep(0.100000000000000);
        spin_strip_strainStdev_min->setValue(0.500000000000000);

        gridLayout_6->addWidget(spin_strip_strainStdev_min, 9, 3, 1, 1);

        sb_ncuts = new QSpinBox(groupBox_6);
        sb_ncuts->setObjectName(QString::fromUtf8("sb_ncuts"));
        sb_ncuts->setMinimumSize(QSize(0, 25));
        sb_ncuts->setMinimum(1);
        sb_ncuts->setMaximum(10);
        sb_ncuts->setValue(1);

        gridLayout_6->addWidget(sb_ncuts, 2, 3, 1, 2);

        label_20 = new QLabel(groupBox_6);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setFont(font);

        gridLayout_6->addWidget(label_20, 9, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_6->addItem(verticalSpacer, 13, 1, 1, 1);


        gridLayout_7->addWidget(groupBox_6, 3, 1, 3, 1);

        groupBox = new QGroupBox(Tab_Opt);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        groupBox_9 = new QGroupBox(groupBox);
        groupBox_9->setObjectName(QString::fromUtf8("groupBox_9"));
        groupBox_9->setFont(font);
        gridLayout_4 = new QGridLayout(groupBox_9);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        label_2 = new QLabel(groupBox_9);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy2.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy2);
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_4->addWidget(label_2, 2, 0, 1, 1);

        spin_tol_xcAngle = new QDoubleSpinBox(groupBox_9);
        spin_tol_xcAngle->setObjectName(QString::fromUtf8("spin_tol_xcAngle"));
        sizePolicy3.setHeightForWidth(spin_tol_xcAngle->sizePolicy().hasHeightForWidth());
        spin_tol_xcAngle->setSizePolicy(sizePolicy3);
        spin_tol_xcAngle->setMinimumSize(QSize(0, 25));
        spin_tol_xcAngle->setFont(font);
        spin_tol_xcAngle->setDecimals(3);
        spin_tol_xcAngle->setMaximum(100.000000000000000);
        spin_tol_xcAngle->setSingleStep(0.050000000000000);
        spin_tol_xcAngle->setValue(2.000000000000000);

        gridLayout_4->addWidget(spin_tol_xcAngle, 2, 1, 1, 1);

        label = new QLabel(groupBox_9);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy2.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy2);
        label->setFont(font);
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_4->addWidget(label, 1, 0, 1, 1);

        spin_tol_xcLength = new QDoubleSpinBox(groupBox_9);
        spin_tol_xcLength->setObjectName(QString::fromUtf8("spin_tol_xcLength"));
        sizePolicy3.setHeightForWidth(spin_tol_xcLength->sizePolicy().hasHeightForWidth());
        spin_tol_xcLength->setSizePolicy(sizePolicy3);
        spin_tol_xcLength->setMinimumSize(QSize(0, 25));
        spin_tol_xcLength->setFont(font);
        spin_tol_xcLength->setDecimals(3);
        spin_tol_xcLength->setSingleStep(0.005000000000000);
        spin_tol_xcLength->setValue(0.100000000000000);

        gridLayout_4->addWidget(spin_tol_xcLength, 1, 1, 1, 1);

        push_sim_reset = new QPushButton(groupBox_9);
        push_sim_reset->setObjectName(QString::fromUtf8("push_sim_reset"));
        push_sim_reset->setMinimumSize(QSize(0, 25));
        push_sim_reset->setFont(font);

        gridLayout_4->addWidget(push_sim_reset, 3, 0, 1, 2);


        gridLayout_2->addWidget(groupBox_9, 2, 2, 1, 2);

        groupBox_11 = new QGroupBox(groupBox);
        groupBox_11->setObjectName(QString::fromUtf8("groupBox_11"));
        groupBox_11->setFont(font);
        gridLayout_10 = new QGridLayout(groupBox_11);
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        label_15 = new QLabel(groupBox_11);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setFont(font);

        gridLayout_10->addWidget(label_15, 2, 0, 1, 1);

        spin_rdf_sig = new QDoubleSpinBox(groupBox_11);
        spin_rdf_sig->setObjectName(QString::fromUtf8("spin_rdf_sig"));
        spin_rdf_sig->setMinimumSize(QSize(0, 25));
        spin_rdf_sig->setFont(font);
        spin_rdf_sig->setDecimals(3);
        spin_rdf_sig->setMinimum(0.001000000000000);
        spin_rdf_sig->setMaximum(2.000000000000000);
        spin_rdf_sig->setSingleStep(0.001000000000000);
        spin_rdf_sig->setValue(0.008000000000000);

        gridLayout_10->addWidget(spin_rdf_sig, 2, 1, 1, 1);

        spin_rdf_tol = new QDoubleSpinBox(groupBox_11);
        spin_rdf_tol->setObjectName(QString::fromUtf8("spin_rdf_tol"));
        spin_rdf_tol->setMinimumSize(QSize(0, 25));
        spin_rdf_tol->setFont(font);
        spin_rdf_tol->setMaximum(0.990000000000000);
        spin_rdf_tol->setSingleStep(0.010000000000000);

        gridLayout_10->addWidget(spin_rdf_tol, 0, 1, 1, 1);

        label_16 = new QLabel(groupBox_11);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setFont(font);

        gridLayout_10->addWidget(label_16, 3, 0, 1, 1);

        spin_rdf_bin = new QSpinBox(groupBox_11);
        spin_rdf_bin->setObjectName(QString::fromUtf8("spin_rdf_bin"));
        spin_rdf_bin->setMinimumSize(QSize(0, 25));
        spin_rdf_bin->setFont(font);
        spin_rdf_bin->setMinimum(100);
        spin_rdf_bin->setMaximum(10000);
        spin_rdf_bin->setSingleStep(100);
        spin_rdf_bin->setValue(3000);

        gridLayout_10->addWidget(spin_rdf_bin, 3, 1, 1, 1);

        label_13 = new QLabel(groupBox_11);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setFont(font);

        gridLayout_10->addWidget(label_13, 0, 0, 1, 1);

        spin_rdf_cut = new QDoubleSpinBox(groupBox_11);
        spin_rdf_cut->setObjectName(QString::fromUtf8("spin_rdf_cut"));
        spin_rdf_cut->setMinimumSize(QSize(0, 25));
        spin_rdf_cut->setFont(font);
        spin_rdf_cut->setMinimum(0.100000000000000);
        spin_rdf_cut->setMaximum(20.000000000000000);
        spin_rdf_cut->setSingleStep(0.100000000000000);
        spin_rdf_cut->setValue(6.000000000000000);

        gridLayout_10->addWidget(spin_rdf_cut, 1, 1, 1, 1);

        label_14 = new QLabel(groupBox_11);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setFont(font);

        gridLayout_10->addWidget(label_14, 1, 0, 1, 1);

        push_sim_reset_2 = new QPushButton(groupBox_11);
        push_sim_reset_2->setObjectName(QString::fromUtf8("push_sim_reset_2"));
        push_sim_reset_2->setMinimumSize(QSize(0, 25));
        push_sim_reset_2->setFont(font);

        gridLayout_10->addWidget(push_sim_reset_2, 4, 0, 1, 2);


        gridLayout_2->addWidget(groupBox_11, 3, 2, 1, 2);

        groupBox_8 = new QGroupBox(groupBox);
        groupBox_8->setObjectName(QString::fromUtf8("groupBox_8"));
        groupBox_8->setFont(font);
        gridLayout_5 = new QGridLayout(groupBox_8);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        label_10 = new QLabel(groupBox_8);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        sizePolicy2.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy2);
        label_10->setFont(font);
        label_10->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_5->addWidget(label_10, 0, 0, 1, 1);

        spin_tol_spg = new QDoubleSpinBox(groupBox_8);
        spin_tol_spg->setObjectName(QString::fromUtf8("spin_tol_spg"));
        sizePolicy3.setHeightForWidth(spin_tol_spg->sizePolicy().hasHeightForWidth());
        spin_tol_spg->setSizePolicy(sizePolicy3);
        spin_tol_spg->setMinimumSize(QSize(0, 25));
        spin_tol_spg->setFont(font);
        spin_tol_spg->setDecimals(3);
        spin_tol_spg->setSingleStep(0.005000000000000);
        spin_tol_spg->setValue(0.010000000000000);

        gridLayout_5->addWidget(spin_tol_spg, 0, 1, 1, 1);

        push_spg_reset = new QPushButton(groupBox_8);
        push_spg_reset->setObjectName(QString::fromUtf8("push_spg_reset"));
        push_spg_reset->setMinimumSize(QSize(0, 25));
        push_spg_reset->setFont(font);

        gridLayout_5->addWidget(push_spg_reset, 1, 0, 1, 2);


        gridLayout_2->addWidget(groupBox_8, 0, 2, 1, 2);


        gridLayout_7->addWidget(groupBox, 1, 2, 5, 1);

        groupBox_4 = new QGroupBox(Tab_Opt);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(groupBox_4->sizePolicy().hasHeightForWidth());
        groupBox_4->setSizePolicy(sizePolicy4);
        groupBox_4->setFont(font);
        gridLayout = new QGridLayout(groupBox_4);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        combo_failAction = new QComboBox(groupBox_4);
        combo_failAction->addItem(QString());
        combo_failAction->addItem(QString());
        combo_failAction->addItem(QString());
        combo_failAction->addItem(QString());
        combo_failAction->setObjectName(QString::fromUtf8("combo_failAction"));
        sizePolicy2.setHeightForWidth(combo_failAction->sizePolicy().hasHeightForWidth());
        combo_failAction->setSizePolicy(sizePolicy2);
        combo_failAction->setMinimumSize(QSize(0, 25));
        combo_failAction->setFont(font);

        gridLayout->addWidget(combo_failAction, 7, 2, 1, 1);

        spin_numInitial = new QSpinBox(groupBox_4);
        spin_numInitial->setObjectName(QString::fromUtf8("spin_numInitial"));
        sizePolicy3.setHeightForWidth(spin_numInitial->sizePolicy().hasHeightForWidth());
        spin_numInitial->setSizePolicy(sizePolicy3);
        spin_numInitial->setMinimumSize(QSize(0, 25));
        spin_numInitial->setMaximumSize(QSize(160, 16777215));
        spin_numInitial->setFont(font);
        spin_numInitial->setMaximum(9999);
        spin_numInitial->setValue(0);

        gridLayout->addWidget(spin_numInitial, 3, 2, 1, 1);

        spin_contStructs = new QSpinBox(groupBox_4);
        spin_contStructs->setObjectName(QString::fromUtf8("spin_contStructs"));
        sizePolicy3.setHeightForWidth(spin_contStructs->sizePolicy().hasHeightForWidth());
        spin_contStructs->setSizePolicy(sizePolicy3);
        spin_contStructs->setMinimumSize(QSize(0, 25));
        spin_contStructs->setMaximumSize(QSize(160, 16777215));
        spin_contStructs->setFont(font);
        spin_contStructs->setValue(15);

        gridLayout->addWidget(spin_contStructs, 1, 2, 1, 1);

        label_26 = new QLabel(groupBox_4);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        sizePolicy2.setHeightForWidth(label_26->sizePolicy().hasHeightForWidth());
        label_26->setSizePolicy(sizePolicy2);
        label_26->setFont(font);
        label_26->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(label_26, 2, 0, 1, 2);

        spin_runningJobLimit = new QSpinBox(groupBox_4);
        spin_runningJobLimit->setObjectName(QString::fromUtf8("spin_runningJobLimit"));
        spin_runningJobLimit->setEnabled(false);
        sizePolicy3.setHeightForWidth(spin_runningJobLimit->sizePolicy().hasHeightForWidth());
        spin_runningJobLimit->setSizePolicy(sizePolicy3);
        spin_runningJobLimit->setMinimumSize(QSize(0, 25));
        spin_runningJobLimit->setFont(font);
        spin_runningJobLimit->setValue(1);

        gridLayout->addWidget(spin_runningJobLimit, 6, 2, 1, 1);

        label_genTotal = new QLabel(groupBox_4);
        label_genTotal->setObjectName(QString::fromUtf8("label_genTotal"));
        sizePolicy2.setHeightForWidth(label_genTotal->sizePolicy().hasHeightForWidth());
        label_genTotal->setSizePolicy(sizePolicy2);
        label_genTotal->setFont(font);
        label_genTotal->setText(QString::fromUtf8("Continuous structures"));
        label_genTotal->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(label_genTotal, 1, 0, 1, 2);

        label_12 = new QLabel(groupBox_4);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        sizePolicy2.setHeightForWidth(label_12->sizePolicy().hasHeightForWidth());
        label_12->setSizePolicy(sizePolicy2);
        label_12->setFont(font);
        label_12->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(label_12, 0, 0, 1, 2);

        spin_parentsPoolSize = new QSpinBox(groupBox_4);
        spin_parentsPoolSize->setObjectName(QString::fromUtf8("spin_parentsPoolSize"));
        sizePolicy3.setHeightForWidth(spin_parentsPoolSize->sizePolicy().hasHeightForWidth());
        spin_parentsPoolSize->setSizePolicy(sizePolicy3);
        spin_parentsPoolSize->setMinimumSize(QSize(0, 25));
        spin_parentsPoolSize->setMaximumSize(QSize(160, 16777215));
        spin_parentsPoolSize->setFont(font);
        spin_parentsPoolSize->setMaximum(9999);
        spin_parentsPoolSize->setValue(20);

        gridLayout->addWidget(spin_parentsPoolSize, 2, 2, 1, 1);

        spin_cutoff = new QSpinBox(groupBox_4);
        spin_cutoff->setObjectName(QString::fromUtf8("spin_cutoff"));
        sizePolicy3.setHeightForWidth(spin_cutoff->sizePolicy().hasHeightForWidth());
        spin_cutoff->setSizePolicy(sizePolicy3);
        spin_cutoff->setMinimumSize(QSize(0, 25));
        spin_cutoff->setMaximumSize(QSize(160, 16777215));
        spin_cutoff->setFont(font);
        spin_cutoff->setMaximum(100000);
        spin_cutoff->setValue(100);

        gridLayout->addWidget(spin_cutoff, 0, 2, 1, 1);

        line_3 = new QFrame(groupBox_4);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_3, 5, 0, 1, 3);

        label_4 = new QLabel(groupBox_4);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);
        label_4->setFont(font);

        gridLayout->addWidget(label_4, 7, 0, 1, 1);

        label_9 = new QLabel(groupBox_4);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        sizePolicy.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy);
        label_9->setFont(font);
        label_9->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(label_9, 3, 0, 1, 2);

        cb_limitRunningJobs = new QCheckBox(groupBox_4);
        cb_limitRunningJobs->setObjectName(QString::fromUtf8("cb_limitRunningJobs"));
        sizePolicy3.setHeightForWidth(cb_limitRunningJobs->sizePolicy().hasHeightForWidth());
        cb_limitRunningJobs->setSizePolicy(sizePolicy3);
        cb_limitRunningJobs->setFont(font);

        gridLayout->addWidget(cb_limitRunningJobs, 6, 0, 1, 2);

        spin_failLimit = new QSpinBox(groupBox_4);
        spin_failLimit->setObjectName(QString::fromUtf8("spin_failLimit"));
        sizePolicy.setHeightForWidth(spin_failLimit->sizePolicy().hasHeightForWidth());
        spin_failLimit->setSizePolicy(sizePolicy);
        spin_failLimit->setMinimumSize(QSize(0, 25));
        spin_failLimit->setFont(font);
        spin_failLimit->setMinimum(1);
        spin_failLimit->setMaximum(100);
        spin_failLimit->setValue(1);

        gridLayout->addWidget(spin_failLimit, 7, 1, 1, 1);

        cb_saveHulls = new QCheckBox(groupBox_4);
        cb_saveHulls->setObjectName(QString::fromUtf8("cb_saveHulls"));

        gridLayout->addWidget(cb_saveHulls, 4, 0, 1, 2);


        gridLayout_7->addWidget(groupBox_4, 1, 0, 3, 1);

        groupBox_5 = new QGroupBox(Tab_Opt);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        QSizePolicy sizePolicy5(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(groupBox_5->sizePolicy().hasHeightForWidth());
        groupBox_5->setSizePolicy(sizePolicy5);
        groupBox_5->setFont(font);
        gridLayout_9 = new QGridLayout(groupBox_5);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        label_29 = new QLabel(groupBox_5);
        label_29->setObjectName(QString::fromUtf8("label_29"));
        sizePolicy2.setHeightForWidth(label_29->sizePolicy().hasHeightForWidth());
        label_29->setSizePolicy(sizePolicy2);
        label_29->setFont(font);
        label_29->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_9->addWidget(label_29, 2, 0, 1, 1);

        spin_p_cross = new QSpinBox(groupBox_5);
        spin_p_cross->setObjectName(QString::fromUtf8("spin_p_cross"));
        sizePolicy3.setHeightForWidth(spin_p_cross->sizePolicy().hasHeightForWidth());
        spin_p_cross->setSizePolicy(sizePolicy3);
        spin_p_cross->setMinimumSize(QSize(0, 25));
        spin_p_cross->setFont(font);
        spin_p_cross->setMaximum(999);
        spin_p_cross->setValue(35);

        gridLayout_9->addWidget(spin_p_cross, 0, 1, 1, 1);

        spin_p_strip = new QSpinBox(groupBox_5);
        spin_p_strip->setObjectName(QString::fromUtf8("spin_p_strip"));
        sizePolicy3.setHeightForWidth(spin_p_strip->sizePolicy().hasHeightForWidth());
        spin_p_strip->setSizePolicy(sizePolicy3);
        spin_p_strip->setMinimumSize(QSize(0, 25));
        spin_p_strip->setFont(font);
        spin_p_strip->setMaximum(999);
        spin_p_strip->setValue(25);

        gridLayout_9->addWidget(spin_p_strip, 2, 1, 1, 1);

        spin_p_atom = new QSpinBox(groupBox_5);
        spin_p_atom->setObjectName(QString::fromUtf8("spin_p_atom"));
        spin_p_atom->setMinimumSize(QSize(0, 25));
        spin_p_atom->setFont(font);
        spin_p_atom->setMaximum(999);
        spin_p_atom->setValue(15);

        gridLayout_9->addWidget(spin_p_atom, 3, 1, 1, 1);

        label_31 = new QLabel(groupBox_5);
        label_31->setObjectName(QString::fromUtf8("label_31"));
        sizePolicy2.setHeightForWidth(label_31->sizePolicy().hasHeightForWidth());
        label_31->setSizePolicy(sizePolicy2);
        label_31->setFont(font);
        label_31->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_9->addWidget(label_31, 1, 0, 1, 1);

        label_17 = new QLabel(groupBox_5);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setFont(font);

        gridLayout_9->addWidget(label_17, 3, 0, 1, 1);

        spin_p_perm = new QSpinBox(groupBox_5);
        spin_p_perm->setObjectName(QString::fromUtf8("spin_p_perm"));
        sizePolicy3.setHeightForWidth(spin_p_perm->sizePolicy().hasHeightForWidth());
        spin_p_perm->setSizePolicy(sizePolicy3);
        spin_p_perm->setMinimumSize(QSize(0, 25));
        spin_p_perm->setFont(font);
        spin_p_perm->setMaximum(999);
        spin_p_perm->setValue(25);

        gridLayout_9->addWidget(spin_p_perm, 1, 1, 1, 1);

        label_25 = new QLabel(groupBox_5);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        sizePolicy2.setHeightForWidth(label_25->sizePolicy().hasHeightForWidth());
        label_25->setSizePolicy(sizePolicy2);
        label_25->setFont(font);
        label_25->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_9->addWidget(label_25, 0, 0, 1, 1);

        label_21 = new QLabel(groupBox_5);
        label_21->setObjectName(QString::fromUtf8("label_21"));

        gridLayout_9->addWidget(label_21, 4, 0, 1, 1);

        spin_p_comp = new QSpinBox(groupBox_5);
        spin_p_comp->setObjectName(QString::fromUtf8("spin_p_comp"));
        spin_p_comp->setMinimumSize(QSize(0, 25));
        spin_p_comp->setMaximum(999);
        spin_p_comp->setValue(5);

        gridLayout_9->addWidget(spin_p_comp, 4, 1, 1, 1);


        gridLayout_7->addWidget(groupBox_5, 1, 1, 1, 1);

#if QT_CONFIG(shortcut)
        label_3->setBuddy(spin_cross_minimumContribution);
        label_27->setBuddy(spin_strip_strainStdev_min);
        label_30->setBuddy(spin_perm_ex);
        label_7->setBuddy(spin_strip_per1);
        label_5->setBuddy(spin_perm_strainStdev_max);
        label_8->setBuddy(spin_strip_per2);
        label_6->setBuddy(spin_strip_amp_min);
        label_26->setBuddy(spin_parentsPoolSize);
        label_genTotal->setBuddy(spin_contStructs);
        label_9->setBuddy(spin_numInitial);
        label_29->setBuddy(spin_p_strip);
        label_31->setBuddy(spin_p_perm);
        label_25->setBuddy(spin_p_cross);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(spin_cutoff, spin_contStructs);
        QWidget::setTabOrder(spin_contStructs, spin_parentsPoolSize);
        QWidget::setTabOrder(spin_parentsPoolSize, spin_numInitial);
        QWidget::setTabOrder(spin_numInitial, cb_saveHulls);
        QWidget::setTabOrder(cb_saveHulls, cb_limitRunningJobs);
        QWidget::setTabOrder(cb_limitRunningJobs, spin_runningJobLimit);
        QWidget::setTabOrder(spin_runningJobLimit, spin_failLimit);
        QWidget::setTabOrder(spin_failLimit, combo_failAction);
        QWidget::setTabOrder(combo_failAction, list_seeds);
        QWidget::setTabOrder(list_seeds, push_addSeed);
        QWidget::setTabOrder(push_addSeed, push_removeSeed);
        QWidget::setTabOrder(push_removeSeed, spin_p_cross);
        QWidget::setTabOrder(spin_p_cross, spin_p_perm);
        QWidget::setTabOrder(spin_p_perm, spin_p_strip);
        QWidget::setTabOrder(spin_p_strip, spin_p_atom);
        QWidget::setTabOrder(spin_p_atom, spin_p_comp);
        QWidget::setTabOrder(spin_p_comp, sb_rand_supercell);
        QWidget::setTabOrder(sb_rand_supercell, sb_ncuts);
        QWidget::setTabOrder(sb_ncuts, spin_cross_minimumContribution);
        QWidget::setTabOrder(spin_cross_minimumContribution, spin_perm_strainStdev_max);
        QWidget::setTabOrder(spin_perm_strainStdev_max, spin_perm_ex);
        QWidget::setTabOrder(spin_perm_ex, spin_strip_strainStdev_min);
        QWidget::setTabOrder(spin_strip_strainStdev_min, spin_strip_strainStdev_max);
        QWidget::setTabOrder(spin_strip_strainStdev_max, spin_strip_amp_min);
        QWidget::setTabOrder(spin_strip_amp_min, spin_strip_amp_max);
        QWidget::setTabOrder(spin_strip_amp_max, spin_strip_per1);
        QWidget::setTabOrder(spin_strip_per1, spin_strip_per2);
        QWidget::setTabOrder(spin_strip_per2, spin_tol_spg);
        QWidget::setTabOrder(spin_tol_spg, push_spg_reset);
        QWidget::setTabOrder(push_spg_reset, spin_tol_xcLength);
        QWidget::setTabOrder(spin_tol_xcLength, spin_tol_xcAngle);
        QWidget::setTabOrder(spin_tol_xcAngle, push_sim_reset);
        QWidget::setTabOrder(push_sim_reset, spin_rdf_tol);
        QWidget::setTabOrder(spin_rdf_tol, spin_rdf_cut);
        QWidget::setTabOrder(spin_rdf_cut, spin_rdf_sig);
        QWidget::setTabOrder(spin_rdf_sig, spin_rdf_bin);
        QWidget::setTabOrder(spin_rdf_bin, push_sim_reset_2);

        retranslateUi(Tab_Opt);

        combo_failAction->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(Tab_Opt);
    } // setupUi

    void retranslateUi(QWidget *Tab_Opt)
    {
        Tab_Opt->setWindowTitle(QCoreApplication::translate("Tab_Opt", "Form", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("Tab_Opt", "Initial Seed Structures", nullptr));
        push_removeSeed->setText(QCoreApplication::translate("Tab_Opt", "Remove", nullptr));
#if QT_CONFIG(tooltip)
        list_seeds->setToolTip(QCoreApplication::translate("Tab_Opt", "Load any initial seed structures here.", nullptr));
#endif // QT_CONFIG(tooltip)
        push_addSeed->setText(QCoreApplication::translate("Tab_Opt", "Add", nullptr));
        groupBox_6->setTitle(QCoreApplication::translate("Tab_Opt", "Genetic Operations Settings", nullptr));
        label_3->setText(QCoreApplication::translate("Tab_Opt", "number of cut points", nullptr));
        label_22->setText(QCoreApplication::translate("Tab_Opt", "minimum contribution", nullptr));
#if QT_CONFIG(tooltip)
        label_27->setToolTip(QCoreApplication::translate("Tab_Opt", "Standard deviation of the random elements of the strain matrix.\n"
"\n"
"Default: 0.07", nullptr));
#endif // QT_CONFIG(tooltip)
        label_27->setText(QCoreApplication::translate("Tab_Opt", "strain stdev range", nullptr));
#if QT_CONFIG(tooltip)
        spin_strip_amp_max->setToolTip(QCoreApplication::translate("Tab_Opt", "Maximum ripple amplitude.\n"
"\n"
"See publication for details.\n"
"\n"
"Default: 1.0", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        spin_perm_strainStdev_max->setToolTip(QCoreApplication::translate("Tab_Opt", "Maximum standard deviation for the random elements in the strain matrix.\n"
"\n"
"See publication for details.\n"
"\n"
"Default: 0.5", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        spin_strip_amp_min->setToolTip(QCoreApplication::translate("Tab_Opt", "Minimum ripple amplitude.\n"
"\n"
"See publication for details.\n"
"\n"
"Default: 0.5", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        label_30->setToolTip(QCoreApplication::translate("Tab_Opt", "Number of separate swaps in the permutation operator.\n"
"\n"
"Default: 3", nullptr));
#endif // QT_CONFIG(tooltip)
        label_30->setText(QCoreApplication::translate("Tab_Opt", "number of exchanges", nullptr));
        label_19->setText(QCoreApplication::translate("Tab_Opt", "Permustrain:", nullptr));
#if QT_CONFIG(tooltip)
        spin_strip_strainStdev_max->setToolTip(QCoreApplication::translate("Tab_Opt", "Maximum standard deviation for the random elements in the strain matrix.\n"
"\n"
"See publication for details.\n"
"\n"
"Default: 0.5", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        spin_cross_minimumContribution->setToolTip(QCoreApplication::translate("Tab_Opt", "<html><head/><body><p>This is the smallest contribution a parent may make to the offspring during crossover. This will take effect only for a &quot;single-cut&quot; crossover.</p><p><br/></p><p>Default: 25%</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        spin_cross_minimumContribution->setSuffix(QCoreApplication::translate("Tab_Opt", "%", nullptr));
        label_7->setText(QCoreApplication::translate("Tab_Opt", "waves in axis 1", nullptr));
#if QT_CONFIG(tooltip)
        spin_strip_per2->setToolTip(QCoreApplication::translate("Tab_Opt", "<html><head/><body><p>Number of waves in the other non-displaced direction for the ripple operator.</p><p>You probably don't want to change this unless using an enormous unit cell.</p><p><br/>Default: 1</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        spin_perm_ex->setToolTip(QCoreApplication::translate("Tab_Opt", "Number of separate swaps in the permutation operator.\n"
"\n"
"Default: 4", nullptr));
#endif // QT_CONFIG(tooltip)
        label_11->setText(QCoreApplication::translate("Tab_Opt", "Chances of creating a supercell", nullptr));
#if QT_CONFIG(tooltip)
        spin_strip_per1->setToolTip(QCoreApplication::translate("Tab_Opt", "<html><head/><body><p>Number of waves in one non-displaced direction for the ripple operator.</p><p>You probably don't want to change this unless using an enormous unit cell.</p><p><br/>Default: 1</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        label_5->setText(QCoreApplication::translate("Tab_Opt", "maximum strain stdev", nullptr));
        label_18->setText(QCoreApplication::translate("Tab_Opt", "Crossover:", nullptr));
#if QT_CONFIG(tooltip)
        sb_rand_supercell->setToolTip(QCoreApplication::translate("Tab_Opt", "<html><head/><body><p>If given any non-zero percentages, that will be used as the chances of expanding the unit cell generated by any of the genetic operations to a supercell. The supercell size will be chosen randomly by XtalOpt, within the limit allowed by the maximum number of atoms set by the user.</p><p>Defalut: 0%</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        sb_rand_supercell->setSuffix(QCoreApplication::translate("Tab_Opt", "%", nullptr));
        label_8->setText(QCoreApplication::translate("Tab_Opt", "waves in axis 2", nullptr));
        label_6->setText(QCoreApplication::translate("Tab_Opt", "amplitude range", nullptr));
#if QT_CONFIG(tooltip)
        spin_strip_strainStdev_min->setToolTip(QCoreApplication::translate("Tab_Opt", "Minimum standard deviation for the random elements in the strain matrix.\n"
"\n"
"See publication for details.\n"
"\n"
"Default: 0.5", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        sb_ncuts->setToolTip(QCoreApplication::translate("Tab_Opt", "<html><head/><body><p>By default, XtalOpt uses a &quot;single cut&quot; in the parent structures to produce an offspring in the crossover operation. If this value is set to a number greater than 1, crossover operation will use a &quot;multi-cut&quot; division scheme.</p><p>For &quot;<span style=\" font-weight:700;\">n&gt;1 cuts</span>&quot;, (1) the &quot;minimum contribution&quot; setting is ignored, and (2) parent cells will be divided into &quot;<span style=\" font-weight:700;\">n+1 ribbons</span>&quot;, and the selection of atoms will be made from &quot;odd&quot; ribbons of parent cell1 (1, 3, 5, ...) and &quot;even&quot; ribbons of parent cell2 (2, 4, 6, ...).</p><p><span style=\" font-weight:700;\">NOTE: an &quot;even&quot; number of cuts will produce an &quot;odd&quot; number of ribbons; hence, an uneven selection of atoms from parent cells!</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        label_20->setText(QCoreApplication::translate("Tab_Opt", "Stripple:", nullptr));
#if QT_CONFIG(tooltip)
        groupBox->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        groupBox->setTitle(QCoreApplication::translate("Tab_Opt", "Tolerances", nullptr));
        groupBox_9->setTitle(QCoreApplication::translate("Tab_Opt", "XtalComp Similarity Check", nullptr));
        label_2->setText(QCoreApplication::translate("Tab_Opt", "Angle tolerance", nullptr));
#if QT_CONFIG(tooltip)
        spin_tol_xcAngle->setToolTip(QCoreApplication::translate("Tab_Opt", "<html><head/><body><p>Angle tolerance in detecting similarities with XtalComp.</p><p>Default: 2.0 \302\260</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        spin_tol_xcAngle->setSuffix(QCoreApplication::translate("Tab_Opt", "\302\260", nullptr));
        label->setText(QCoreApplication::translate("Tab_Opt", "Length tolerance", nullptr));
#if QT_CONFIG(tooltip)
        spin_tol_xcLength->setToolTip(QCoreApplication::translate("Tab_Opt", "<html><head/><body><p>Length tolerance in detecting similarities with XtalComp.</p><p>Default: 0.1 \303\205</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        spin_tol_xcLength->setSuffix(QCoreApplication::translate("Tab_Opt", " \303\205", nullptr));
#if QT_CONFIG(tooltip)
        push_sim_reset->setToolTip(QCoreApplication::translate("Tab_Opt", "<html><head/><body><p>Re-examine the similarity of all structures (necessary after changing the above parameters).</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        push_sim_reset->setText(QCoreApplication::translate("Tab_Opt", "Redetect Similarities", nullptr));
        groupBox_11->setTitle(QCoreApplication::translate("Tab_Opt", "RDF Similarity Check", nullptr));
        label_15->setText(QCoreApplication::translate("Tab_Opt", "Gaussian spread", nullptr));
#if QT_CONFIG(tooltip)
        spin_rdf_sig->setToolTip(QCoreApplication::translate("Tab_Opt", "<html><head/><body><p>Spread of the gaussian function used to smooth the distribution of bond lengths in RDF vector.</p><p>Default: 0.008 \303\205</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        spin_rdf_sig->setSuffix(QCoreApplication::translate("Tab_Opt", " \303\205", nullptr));
#if QT_CONFIG(tooltip)
        spin_rdf_tol->setToolTip(QCoreApplication::translate("Tab_Opt", "<html><head/><body><p>If specified any non-zero value in the (0,1] range, then XtalOpt uses RDF to filter similar structures out of the parents pool.</p><p>Structures are excluded if the dot product of their normalized bond-resolved RDF with any existing structure is greater than this tolerance.</p><p>Default: 0.0</p><p>Suggested value for similarity check: 0.95</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        label_16->setText(QCoreApplication::translate("Tab_Opt", "Number of bins", nullptr));
#if QT_CONFIG(tooltip)
        spin_rdf_bin->setToolTip(QCoreApplication::translate("Tab_Opt", "<html><head/><body><p>Number of bins (data points) for which the RDF calculated within the range of [0, cutoff].</p><p>Default: 3000</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        label_13->setText(QCoreApplication::translate("Tab_Opt", "Similarity tolerance", nullptr));
#if QT_CONFIG(tooltip)
        spin_rdf_cut->setToolTip(QCoreApplication::translate("Tab_Opt", "<html><head/><body><p>The cutoff within which bonds are considered in calculating the RDF vector.</p><p>Default: 6 \303\205</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        spin_rdf_cut->setSuffix(QCoreApplication::translate("Tab_Opt", " \303\205", nullptr));
        label_14->setText(QCoreApplication::translate("Tab_Opt", "Distance cutoff", nullptr));
#if QT_CONFIG(tooltip)
        push_sim_reset_2->setToolTip(QCoreApplication::translate("Tab_Opt", "<html><head/><body><p>Re-examine the similarity of all structures (necessary after changing the above parameters).</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        push_sim_reset_2->setText(QCoreApplication::translate("Tab_Opt", "Redetect Similarties", nullptr));
        groupBox_8->setTitle(QCoreApplication::translate("Tab_Opt", "spglib Tolerance", nullptr));
        label_10->setText(QCoreApplication::translate("Tab_Opt", "Tolerance", nullptr));
#if QT_CONFIG(tooltip)
        spin_tol_spg->setToolTip(QCoreApplication::translate("Tab_Opt", "<html><head/><body><p>Tolerance used in space group determination performed by sgplib.</p><p>Default: 0.01 \303\205</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        spin_tol_spg->setSuffix(QCoreApplication::translate("Tab_Opt", " \303\205", nullptr));
#if QT_CONFIG(tooltip)
        push_spg_reset->setToolTip(QCoreApplication::translate("Tab_Opt", "<html><head/><body><p>Reset and redetect the symmetry (space group) of all structures.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        push_spg_reset->setText(QCoreApplication::translate("Tab_Opt", "Redetect Space Groups", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("Tab_Opt", "Search Parameters", nullptr));
        combo_failAction->setItemText(0, QCoreApplication::translate("Tab_Opt", "keep trying to optimize.", nullptr));
        combo_failAction->setItemText(1, QCoreApplication::translate("Tab_Opt", "kill the structure.", nullptr));
        combo_failAction->setItemText(2, QCoreApplication::translate("Tab_Opt", "replace with random.", nullptr));
        combo_failAction->setItemText(3, QCoreApplication::translate("Tab_Opt", "replace with new offspring.", nullptr));

#if QT_CONFIG(tooltip)
        combo_failAction->setToolTip(QCoreApplication::translate("Tab_Opt", "<html><head/><body><p>Perform one of the indicated tasks for a structure that fail more than the specified number of times.</p><p>Default: replace with random</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        combo_failAction->setCurrentText(QCoreApplication::translate("Tab_Opt", "replace with random.", nullptr));
#if QT_CONFIG(tooltip)
        spin_numInitial->setToolTip(QCoreApplication::translate("Tab_Opt", "<html><head/><body><p>Number of initial structures to use in first generation.</p><p>Default: 0</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        spin_contStructs->setToolTip(QCoreApplication::translate("Tab_Opt", "<html><head/><body><p>Number of structures to be kept &quot;in progress&quot; after the initial generation.</p><p>This should depend on the resources available. If a running job limit is set below,</p><p>[running job limit] + 1</p><p>is a good value here.</p><p>Default: 15</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        label_26->setToolTip(QCoreApplication::translate("Tab_Opt", "Number of structures to be considered for genetic operations.\n"
"\n"
"Structures are chosen for genetic operations based on a weighted probability list, such that the lowest enthalpy structures have the greatest probability of being chosen. The number specified here is used to determine how many of the lowest enthalpy structures will have a non-zero probability.\n"
"\n"
"Default: 60", nullptr));
#endif // QT_CONFIG(tooltip)
        label_26->setText(QCoreApplication::translate("Tab_Opt", "Parents pool size", nullptr));
#if QT_CONFIG(tooltip)
        spin_runningJobLimit->setToolTip(QCoreApplication::translate("Tab_Opt", "Maximum number of simultaneous local optimizations allowed.", nullptr));
#endif // QT_CONFIG(tooltip)
        spin_runningJobLimit->setSuffix(QCoreApplication::translate("Tab_Opt", " jobs", nullptr));
        spin_runningJobLimit->setPrefix(QCoreApplication::translate("Tab_Opt", "to ", nullptr));
#if QT_CONFIG(tooltip)
        label_genTotal->setToolTip(QCoreApplication::translate("Tab_Opt", "How many structures are created for population > 1. This has no effect in continuous mode.\n"
"\n"
"Default: 10", nullptr));
#endif // QT_CONFIG(tooltip)
        label_12->setText(QCoreApplication::translate("Tab_Opt", "Total number of structures", nullptr));
#if QT_CONFIG(tooltip)
        spin_parentsPoolSize->setToolTip(QCoreApplication::translate("Tab_Opt", "<html><head/><body><p>Number of structures to be considered for genetic operations.</p><p>Structures are chosen for genetic operations based on a weighted probability list, which can be determined from either multi-objective scalar fitness function or the Pareto optimization's non-dominated sorting process. The probability, in any case, is calculated based on the structures' distance above convex hull, plus any user-specified objectives.</p><p>The number specified here is used to determine how many of the lowest enthalpy structures will have a non-zero probability.</p><p>Default: 20</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        spin_cutoff->setToolTip(QCoreApplication::translate("Tab_Opt", "<html><head/><body><p>The maximum number of structures generated in the search.</p><p>Default: 100</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        label_4->setText(QCoreApplication::translate("Tab_Opt", "If a job fails ", nullptr));
#if QT_CONFIG(tooltip)
        label_9->setToolTip(QCoreApplication::translate("Tab_Opt", "Number of initial structures / number of structures to keep in queue for continuous mode.\n"
"\n"
"Default: 20\n"
"", nullptr));
#endif // QT_CONFIG(tooltip)
        label_9->setText(QCoreApplication::translate("Tab_Opt", "Number of initial structures", nullptr));
#if QT_CONFIG(tooltip)
        cb_limitRunningJobs->setToolTip(QCoreApplication::translate("Tab_Opt", "Check this box to set a limit on the number of jobs that are submitted for a local optimization at any given time.", nullptr));
#endif // QT_CONFIG(tooltip)
        cb_limitRunningJobs->setText(QCoreApplication::translate("Tab_Opt", "Limit running jobs", nullptr));
#if QT_CONFIG(tooltip)
        spin_failLimit->setToolTip(QCoreApplication::translate("Tab_Opt", "<html><head/><body><p>Take an action for failed local optimizations after this many failures.</p><p>Default: 2</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        spin_failLimit->setSuffix(QCoreApplication::translate("Tab_Opt", " times,", nullptr));
#if QT_CONFIG(tooltip)
        cb_saveHulls->setToolTip(QCoreApplication::translate("Tab_Opt", "<html><head/><body><p>If checked, the folder &quot;movie&quot; will be created in the local working directory, and after each successful structure optimization the snapshot of input for convex hull (i.e., a copy of the &quot;hull.txt&quot; file) will be saved in that folder under the name:<br/><br/>YYMMDD_HHmmSS_LLL<br/></p><p>where: YY (year), MM (month), DD (day), HH (hour), mm (minute), SS (seconds), and LLL (milliseconds) represent a unique identifier of when the file is written.<br/></p><p>This option is specifically designed to facilitate creation of movies of the convex hull evolution or to monitor the run progress.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        cb_saveHulls->setText(QCoreApplication::translate("Tab_Opt", "Save hull snapshots", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("Tab_Opt", "Relative Weight Of Genetic Operations", nullptr));
        label_29->setText(QCoreApplication::translate("Tab_Opt", "Weight of stripple", nullptr));
#if QT_CONFIG(tooltip)
        spin_p_cross->setToolTip(QCoreApplication::translate("Tab_Opt", "<html><head/><body><p>Relative weight for chances of using crossover in producing offspring structures.</p><p>The weights specified for all operations will be combined to determine the &quot;percentage chance&quot; of performing each operation:</p><p>% = (operation weight) / (sum of weight of operations)</p><p>In a variable-composition search the sum includes weights for crossover, stripple, permustrain, permutomic, and permucomp; otherwise the permutomic and permucomp are ignored (with their chances being set to 0 internally).</p><p><br/>Default: 35</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        spin_p_strip->setToolTip(QCoreApplication::translate("Tab_Opt", "<html><head/><body><p>Relative weight for chances of using stripple in producing offspring structures.</p><p>The weights specified for all operations will be combined to determine the &quot;percentage chance&quot; of performing each operation:</p><p>% = (operation weight) / (sum of weight of operations)</p><p>In a variable-composition search the sum includes weights for crossover, stripple, permustrain, permutomic, and permucomp; otherwise the permutomic and permucomp are ignored (with their chances being set to 0 internally).</p><p><br/>Default: 25</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        spin_p_atom->setToolTip(QCoreApplication::translate("Tab_Opt", "<html><head/><body><p>Relative weight for chances of using permutomic in producing offspring structures (applies only to the variable-composition search).</p><p>The weights specified for all operations will be combined to determine the &quot;percentage chance&quot; of performing each operation:</p><p>% = (operation weight) / (sum of weight of operations)</p><p>In a variable-composition search the sum includes weights for crossover, stripple, permustrain, permutomic, and permucomp; otherwise the permutomic and permucomp are ignored (with their chances being set to 0 internally).</p><p><br/>Default: 15</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        label_31->setToolTip(QCoreApplication::translate("Tab_Opt", "Percentage of offspring structures that will be generated from the permutation operator.\n"
"\n"
"The permutation operator will swap two atoms of different type within a single parent. Set to zero if there is only one atom type in the cell!\n"
"\n"
"Default: 5%", nullptr));
#endif // QT_CONFIG(tooltip)
        label_31->setText(QCoreApplication::translate("Tab_Opt", "Weight of permustrain", nullptr));
        label_17->setText(QCoreApplication::translate("Tab_Opt", "Weight of permutomic", nullptr));
#if QT_CONFIG(tooltip)
        spin_p_perm->setToolTip(QCoreApplication::translate("Tab_Opt", "<html><head/><body><p>Relative weight for chances of using permustrain in producing offspring structures.</p><p>The weights specified for all operations will be combined to determine the &quot;percentage chance&quot; of performing each operation:</p><p>% = (operation weight) / (sum of weight of operations)</p><p>In a variable-composition search the sum includes weights for crossover, stripple, permustrain, permutomic, and permucomp; otherwise the permutomic and permucomp are ignored (with their chances being set to 0 internally).</p><p><br/>Default: 25</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        label_25->setToolTip(QCoreApplication::translate("Tab_Opt", "Percentage of new structures to be created from the heredity operator.\n"
"\n"
"Heredity combines two random spatially coherent slabs from two unique parents to form a single offspring.\n"
"\n"
"Default: 85", nullptr));
#endif // QT_CONFIG(tooltip)
        label_25->setText(QCoreApplication::translate("Tab_Opt", "Weight of crossover", nullptr));
        label_21->setText(QCoreApplication::translate("Tab_Opt", "Weight of permucomp", nullptr));
#if QT_CONFIG(tooltip)
        spin_p_comp->setToolTip(QCoreApplication::translate("Tab_Opt", "<html><head/><body><p>Relative weight for chances of using permucomp in producing offspring structures (applies only to the variable-composition search).</p><p>The weights specified for all operations will be combined to determine the &quot;percentage chance&quot; of performing each operation:</p><p>% = (operation weight) / (sum of weight of operations)</p><p>In a variable-composition search the sum includes weights for crossover, stripple, permustrain, permutomic, and permucomp; otherwise the permutomic and permucomp are ignored (with their chances being set to 0 internally).</p><p><br/>Default: 5</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
    } // retranslateUi

};

namespace Ui {
    class Tab_Opt: public Ui_Tab_Opt {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TAB_SEARCH_H
