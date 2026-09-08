/********************************************************************************
** Form generated from reading UI file 'tab_struc.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TAB_STRUC_H
#define UI_TAB_STRUC_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Tab_Init
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_3;
    QDoubleSpinBox *spin_beta_max;
    QLabel *label_2;
    QDoubleSpinBox *spin_b_min;
    QLabel *label_11;
    QLabel *label_18;
    QDoubleSpinBox *spin_beta_min;
    QDoubleSpinBox *spin_b_max;
    QLineEdit *edit_ele_vols;
    QLabel *label_12;
    QLabel *label_4;
    QDoubleSpinBox *spin_alpha_max;
    QDoubleSpinBox *spin_c_min;
    QLabel *label_8;
    QLabel *label_3;
    QDoubleSpinBox *spin_maxVolumeScale;
    QFrame *line;
    QDoubleSpinBox *spin_vol_min;
    QDoubleSpinBox *spin_minVolumeScale;
    QLabel *label_13;
    QDoubleSpinBox *spin_gamma_max;
    QDoubleSpinBox *spin_alpha_min;
    QLabel *label_5;
    QDoubleSpinBox *spin_a_min;
    QDoubleSpinBox *spin_vol_max;
    QDoubleSpinBox *spin_gamma_min;
    QDoubleSpinBox *spin_a_max;
    QDoubleSpinBox *spin_c_max;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_4;
    QCheckBox *cb_checkStepOpt;
    QLabel *label_9;
    QCheckBox *cb_interatomicDistanceLimit;
    QCheckBox *cb_customIAD;
    QLabel *label;
    QDoubleSpinBox *spin_scaleFactor;
    QDoubleSpinBox *spin_minRadius;
    QFrame *line_2;
    QTableWidget *table_IAD;
    QGroupBox *groupBox_11;
    QGridLayout *gridLayout_2;
    QPushButton *pushButton_removeMolUnit;
    QCheckBox *cb_useMolUnit;
    QCheckBox *cb_allowRandSpg;
    QPushButton *pushButton_addMolUnit;
    QPushButton *pushButton_removeAllMolUnit;
    QTableWidget *table_molUnit;
    QPushButton *push_spgOptions;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_6;
    QLabel *label_14;
    QLabel *label_10;
    QLineEdit *edit_ref_enes;
    QTableWidget *table_comp;
    QLineEdit *edit_composition;
    QLabel *label_7;
    QSpinBox *sb_min_atoms;
    QLabel *label_6;
    QSpinBox *sb_max_atoms;
    QCheckBox *cb_vcsearch;

    void setupUi(QWidget *Tab_Init)
    {
        if (Tab_Init->objectName().isEmpty())
            Tab_Init->setObjectName(QString::fromUtf8("Tab_Init"));
        Tab_Init->resize(1211, 639);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Tab_Init->sizePolicy().hasHeightForWidth());
        Tab_Init->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(11);
        Tab_Init->setFont(font);
        gridLayout = new QGridLayout(Tab_Init);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        groupBox = new QGroupBox(Tab_Init);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setFont(font);
        gridLayout_3 = new QGridLayout(groupBox);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        spin_beta_max = new QDoubleSpinBox(groupBox);
        spin_beta_max->setObjectName(QString::fromUtf8("spin_beta_max"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(spin_beta_max->sizePolicy().hasHeightForWidth());
        spin_beta_max->setSizePolicy(sizePolicy1);
        spin_beta_max->setMinimumSize(QSize(0, 25));
        spin_beta_max->setMaximumSize(QSize(16777215, 25));
        spin_beta_max->setFont(font);
        spin_beta_max->setDecimals(5);
        spin_beta_max->setMaximum(180.000000000000000);
        spin_beta_max->setSingleStep(0.100000000000000);
        spin_beta_max->setValue(120.000000000000000);

        gridLayout_3->addWidget(spin_beta_max, 4, 2, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy2);
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_2, 2, 0, 1, 1);

        spin_b_min = new QDoubleSpinBox(groupBox);
        spin_b_min->setObjectName(QString::fromUtf8("spin_b_min"));
        sizePolicy1.setHeightForWidth(spin_b_min->sizePolicy().hasHeightForWidth());
        spin_b_min->setSizePolicy(sizePolicy1);
        spin_b_min->setMinimumSize(QSize(0, 25));
        spin_b_min->setMaximumSize(QSize(16777215, 25));
        spin_b_min->setFont(font);
        spin_b_min->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        spin_b_min->setDecimals(5);
        spin_b_min->setSingleStep(0.100000000000000);
        spin_b_min->setValue(1.000000000000000);

        gridLayout_3->addWidget(spin_b_min, 1, 1, 1, 1);

        label_11 = new QLabel(groupBox);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        sizePolicy2.setHeightForWidth(label_11->sizePolicy().hasHeightForWidth());
        label_11->setSizePolicy(sizePolicy2);
        label_11->setFont(font);
        label_11->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_11, 5, 0, 1, 1);

        label_18 = new QLabel(groupBox);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        sizePolicy2.setHeightForWidth(label_18->sizePolicy().hasHeightForWidth());
        label_18->setSizePolicy(sizePolicy2);
        label_18->setFont(font);
        label_18->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_18, 7, 0, 1, 1);

        spin_beta_min = new QDoubleSpinBox(groupBox);
        spin_beta_min->setObjectName(QString::fromUtf8("spin_beta_min"));
        sizePolicy1.setHeightForWidth(spin_beta_min->sizePolicy().hasHeightForWidth());
        spin_beta_min->setSizePolicy(sizePolicy1);
        spin_beta_min->setMinimumSize(QSize(0, 25));
        spin_beta_min->setMaximumSize(QSize(16777215, 25));
        spin_beta_min->setFont(font);
        spin_beta_min->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        spin_beta_min->setDecimals(5);
        spin_beta_min->setMaximum(180.000000000000000);
        spin_beta_min->setSingleStep(0.100000000000000);
        spin_beta_min->setValue(60.000000000000000);

        gridLayout_3->addWidget(spin_beta_min, 4, 1, 1, 1);

        spin_b_max = new QDoubleSpinBox(groupBox);
        spin_b_max->setObjectName(QString::fromUtf8("spin_b_max"));
        sizePolicy1.setHeightForWidth(spin_b_max->sizePolicy().hasHeightForWidth());
        spin_b_max->setSizePolicy(sizePolicy1);
        spin_b_max->setMinimumSize(QSize(0, 25));
        spin_b_max->setMaximumSize(QSize(16777215, 25));
        spin_b_max->setFont(font);
        spin_b_max->setDecimals(5);
        spin_b_max->setMaximum(9999.989999999999782);
        spin_b_max->setSingleStep(0.100000000000000);
        spin_b_max->setValue(10.000000000000000);

        gridLayout_3->addWidget(spin_b_max, 1, 2, 1, 1);

        edit_ele_vols = new QLineEdit(groupBox);
        edit_ele_vols->setObjectName(QString::fromUtf8("edit_ele_vols"));
        edit_ele_vols->setEnabled(true);
        edit_ele_vols->setMinimumSize(QSize(0, 25));
        edit_ele_vols->setFont(font);

        gridLayout_3->addWidget(edit_ele_vols, 9, 1, 1, 2);

        label_12 = new QLabel(groupBox);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout_3->addWidget(label_12, 8, 0, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        sizePolicy2.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy2);
        label_4->setFont(font);
        label_4->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_4, 3, 0, 1, 1);

        spin_alpha_max = new QDoubleSpinBox(groupBox);
        spin_alpha_max->setObjectName(QString::fromUtf8("spin_alpha_max"));
        sizePolicy1.setHeightForWidth(spin_alpha_max->sizePolicy().hasHeightForWidth());
        spin_alpha_max->setSizePolicy(sizePolicy1);
        spin_alpha_max->setMinimumSize(QSize(0, 25));
        spin_alpha_max->setMaximumSize(QSize(16777215, 25));
        spin_alpha_max->setFont(font);
        spin_alpha_max->setDecimals(5);
        spin_alpha_max->setMaximum(180.000000000000000);
        spin_alpha_max->setSingleStep(0.100000000000000);
        spin_alpha_max->setValue(120.000000000000000);

        gridLayout_3->addWidget(spin_alpha_max, 3, 2, 1, 1);

        spin_c_min = new QDoubleSpinBox(groupBox);
        spin_c_min->setObjectName(QString::fromUtf8("spin_c_min"));
        sizePolicy1.setHeightForWidth(spin_c_min->sizePolicy().hasHeightForWidth());
        spin_c_min->setSizePolicy(sizePolicy1);
        spin_c_min->setMinimumSize(QSize(0, 25));
        spin_c_min->setMaximumSize(QSize(16777215, 25));
        spin_c_min->setFont(font);
        spin_c_min->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        spin_c_min->setDecimals(5);
        spin_c_min->setSingleStep(0.100000000000000);
        spin_c_min->setValue(1.000000000000000);

        gridLayout_3->addWidget(spin_c_min, 2, 1, 1, 1);

        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        sizePolicy2.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy2);
        label_8->setFont(font);
        label_8->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_8, 4, 0, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy2.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy2);
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_3, 1, 0, 1, 1);

        spin_maxVolumeScale = new QDoubleSpinBox(groupBox);
        spin_maxVolumeScale->setObjectName(QString::fromUtf8("spin_maxVolumeScale"));
        spin_maxVolumeScale->setEnabled(true);
        sizePolicy1.setHeightForWidth(spin_maxVolumeScale->sizePolicy().hasHeightForWidth());
        spin_maxVolumeScale->setSizePolicy(sizePolicy1);
        spin_maxVolumeScale->setMinimumSize(QSize(0, 25));
        spin_maxVolumeScale->setMaximumSize(QSize(16777215, 25));
        spin_maxVolumeScale->setFont(font);
        spin_maxVolumeScale->setDecimals(5);
        spin_maxVolumeScale->setMaximum(999.990000000000009);
        spin_maxVolumeScale->setSingleStep(0.050000000000000);
        spin_maxVolumeScale->setValue(1.200000000000000);

        gridLayout_3->addWidget(spin_maxVolumeScale, 8, 2, 1, 1);

        line = new QFrame(groupBox);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_3->addWidget(line, 6, 0, 1, 3);

        spin_vol_min = new QDoubleSpinBox(groupBox);
        spin_vol_min->setObjectName(QString::fromUtf8("spin_vol_min"));
        sizePolicy1.setHeightForWidth(spin_vol_min->sizePolicy().hasHeightForWidth());
        spin_vol_min->setSizePolicy(sizePolicy1);
        spin_vol_min->setMinimumSize(QSize(0, 25));
        spin_vol_min->setMaximumSize(QSize(16777215, 25));
        spin_vol_min->setFont(font);
        spin_vol_min->setDecimals(5);
        spin_vol_min->setMaximum(1000000.000000000000000);
        spin_vol_min->setSingleStep(1.000000000000000);
        spin_vol_min->setValue(0.000000000000000);

        gridLayout_3->addWidget(spin_vol_min, 7, 1, 1, 1);

        spin_minVolumeScale = new QDoubleSpinBox(groupBox);
        spin_minVolumeScale->setObjectName(QString::fromUtf8("spin_minVolumeScale"));
        spin_minVolumeScale->setEnabled(true);
        sizePolicy1.setHeightForWidth(spin_minVolumeScale->sizePolicy().hasHeightForWidth());
        spin_minVolumeScale->setSizePolicy(sizePolicy1);
        spin_minVolumeScale->setMinimumSize(QSize(0, 25));
        spin_minVolumeScale->setMaximumSize(QSize(16777215, 25));
        spin_minVolumeScale->setFont(font);
        spin_minVolumeScale->setDecimals(5);
        spin_minVolumeScale->setMaximum(999.990000000000009);
        spin_minVolumeScale->setSingleStep(0.050000000000000);
        spin_minVolumeScale->setValue(0.800000000000000);

        gridLayout_3->addWidget(spin_minVolumeScale, 8, 1, 1, 1);

        label_13 = new QLabel(groupBox);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout_3->addWidget(label_13, 9, 0, 1, 1);

        spin_gamma_max = new QDoubleSpinBox(groupBox);
        spin_gamma_max->setObjectName(QString::fromUtf8("spin_gamma_max"));
        sizePolicy1.setHeightForWidth(spin_gamma_max->sizePolicy().hasHeightForWidth());
        spin_gamma_max->setSizePolicy(sizePolicy1);
        spin_gamma_max->setMinimumSize(QSize(0, 25));
        spin_gamma_max->setMaximumSize(QSize(16777215, 25));
        spin_gamma_max->setFont(font);
        spin_gamma_max->setDecimals(5);
        spin_gamma_max->setMaximum(180.000000000000000);
        spin_gamma_max->setSingleStep(0.100000000000000);
        spin_gamma_max->setValue(120.000000000000000);

        gridLayout_3->addWidget(spin_gamma_max, 5, 2, 1, 1);

        spin_alpha_min = new QDoubleSpinBox(groupBox);
        spin_alpha_min->setObjectName(QString::fromUtf8("spin_alpha_min"));
        sizePolicy1.setHeightForWidth(spin_alpha_min->sizePolicy().hasHeightForWidth());
        spin_alpha_min->setSizePolicy(sizePolicy1);
        spin_alpha_min->setMinimumSize(QSize(0, 25));
        spin_alpha_min->setMaximumSize(QSize(16777215, 25));
        spin_alpha_min->setFont(font);
        spin_alpha_min->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        spin_alpha_min->setDecimals(5);
        spin_alpha_min->setMaximum(180.000000000000000);
        spin_alpha_min->setSingleStep(0.100000000000000);
        spin_alpha_min->setValue(60.000000000000000);

        gridLayout_3->addWidget(spin_alpha_min, 3, 1, 1, 1);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        sizePolicy2.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy2);
        label_5->setFont(font);
        label_5->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_5, 0, 0, 1, 1);

        spin_a_min = new QDoubleSpinBox(groupBox);
        spin_a_min->setObjectName(QString::fromUtf8("spin_a_min"));
        sizePolicy1.setHeightForWidth(spin_a_min->sizePolicy().hasHeightForWidth());
        spin_a_min->setSizePolicy(sizePolicy1);
        spin_a_min->setMinimumSize(QSize(0, 25));
        spin_a_min->setMaximumSize(QSize(16777215, 25));
        spin_a_min->setFont(font);
        spin_a_min->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        spin_a_min->setDecimals(5);
        spin_a_min->setSingleStep(0.100000000000000);
        spin_a_min->setValue(1.000000000000000);

        gridLayout_3->addWidget(spin_a_min, 0, 1, 1, 1);

        spin_vol_max = new QDoubleSpinBox(groupBox);
        spin_vol_max->setObjectName(QString::fromUtf8("spin_vol_max"));
        sizePolicy1.setHeightForWidth(spin_vol_max->sizePolicy().hasHeightForWidth());
        spin_vol_max->setSizePolicy(sizePolicy1);
        spin_vol_max->setMinimumSize(QSize(0, 25));
        spin_vol_max->setMaximumSize(QSize(16777215, 25));
        spin_vol_max->setFont(font);
        spin_vol_max->setDecimals(5);
        spin_vol_max->setMaximum(1000000.000000000000000);
        spin_vol_max->setSingleStep(1.000000000000000);
        spin_vol_max->setValue(100.000000000000000);

        gridLayout_3->addWidget(spin_vol_max, 7, 2, 1, 1);

        spin_gamma_min = new QDoubleSpinBox(groupBox);
        spin_gamma_min->setObjectName(QString::fromUtf8("spin_gamma_min"));
        sizePolicy1.setHeightForWidth(spin_gamma_min->sizePolicy().hasHeightForWidth());
        spin_gamma_min->setSizePolicy(sizePolicy1);
        spin_gamma_min->setMinimumSize(QSize(0, 25));
        spin_gamma_min->setMaximumSize(QSize(16777215, 25));
        spin_gamma_min->setFont(font);
        spin_gamma_min->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        spin_gamma_min->setDecimals(5);
        spin_gamma_min->setMaximum(180.000000000000000);
        spin_gamma_min->setSingleStep(0.100000000000000);
        spin_gamma_min->setValue(60.000000000000000);

        gridLayout_3->addWidget(spin_gamma_min, 5, 1, 1, 1);

        spin_a_max = new QDoubleSpinBox(groupBox);
        spin_a_max->setObjectName(QString::fromUtf8("spin_a_max"));
        sizePolicy1.setHeightForWidth(spin_a_max->sizePolicy().hasHeightForWidth());
        spin_a_max->setSizePolicy(sizePolicy1);
        spin_a_max->setMinimumSize(QSize(0, 25));
        spin_a_max->setMaximumSize(QSize(16777215, 25));
        spin_a_max->setFont(font);
        spin_a_max->setDecimals(5);
        spin_a_max->setMaximum(9999.989999999999782);
        spin_a_max->setSingleStep(0.100000000000000);
        spin_a_max->setValue(10.000000000000000);

        gridLayout_3->addWidget(spin_a_max, 0, 2, 1, 1);

        spin_c_max = new QDoubleSpinBox(groupBox);
        spin_c_max->setObjectName(QString::fromUtf8("spin_c_max"));
        sizePolicy1.setHeightForWidth(spin_c_max->sizePolicy().hasHeightForWidth());
        spin_c_max->setSizePolicy(sizePolicy1);
        spin_c_max->setMinimumSize(QSize(0, 25));
        spin_c_max->setMaximumSize(QSize(16777215, 25));
        spin_c_max->setFont(font);
        spin_c_max->setDecimals(5);
        spin_c_max->setMaximum(9999.989999999999782);
        spin_c_max->setSingleStep(0.100000000000000);
        spin_c_max->setValue(10.000000000000000);

        gridLayout_3->addWidget(spin_c_max, 2, 2, 1, 1);


        gridLayout->addWidget(groupBox, 0, 2, 1, 1);

        groupBox_3 = new QGroupBox(Tab_Init);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        sizePolicy.setHeightForWidth(groupBox_3->sizePolicy().hasHeightForWidth());
        groupBox_3->setSizePolicy(sizePolicy);
        groupBox_3->setFont(font);
        gridLayout_4 = new QGridLayout(groupBox_3);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        cb_checkStepOpt = new QCheckBox(groupBox_3);
        cb_checkStepOpt->setObjectName(QString::fromUtf8("cb_checkStepOpt"));
        cb_checkStepOpt->setEnabled(false);
        cb_checkStepOpt->setFont(font);
        cb_checkStepOpt->setFocusPolicy(Qt::StrongFocus);

        gridLayout_4->addWidget(cb_checkStepOpt, 14, 0, 1, 1);

        label_9 = new QLabel(groupBox_3);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setEnabled(false);
        sizePolicy.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy);
        label_9->setMaximumSize(QSize(150, 25));
        label_9->setFont(font);
        label_9->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_4->addWidget(label_9, 3, 0, 1, 1);

        cb_interatomicDistanceLimit = new QCheckBox(groupBox_3);
        cb_interatomicDistanceLimit->setObjectName(QString::fromUtf8("cb_interatomicDistanceLimit"));
        sizePolicy1.setHeightForWidth(cb_interatomicDistanceLimit->sizePolicy().hasHeightForWidth());
        cb_interatomicDistanceLimit->setSizePolicy(sizePolicy1);
        cb_interatomicDistanceLimit->setMinimumSize(QSize(0, 18));
        cb_interatomicDistanceLimit->setFont(font);
        cb_interatomicDistanceLimit->setFocusPolicy(Qt::StrongFocus);
        cb_interatomicDistanceLimit->setChecked(false);

        gridLayout_4->addWidget(cb_interatomicDistanceLimit, 0, 0, 1, 1);

        cb_customIAD = new QCheckBox(groupBox_3);
        cb_customIAD->setObjectName(QString::fromUtf8("cb_customIAD"));
        cb_customIAD->setFont(font);
        cb_customIAD->setFocusPolicy(Qt::StrongFocus);
        cb_customIAD->setChecked(false);

        gridLayout_4->addWidget(cb_customIAD, 0, 4, 1, 1);

        label = new QLabel(groupBox_3);
        label->setObjectName(QString::fromUtf8("label"));
        label->setEnabled(false);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setMaximumSize(QSize(150, 25));
        label->setFont(font);
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_4->addWidget(label, 1, 0, 1, 1);

        spin_scaleFactor = new QDoubleSpinBox(groupBox_3);
        spin_scaleFactor->setObjectName(QString::fromUtf8("spin_scaleFactor"));
        spin_scaleFactor->setEnabled(false);
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(spin_scaleFactor->sizePolicy().hasHeightForWidth());
        spin_scaleFactor->setSizePolicy(sizePolicy3);
        spin_scaleFactor->setMinimumSize(QSize(0, 25));
        spin_scaleFactor->setMaximumSize(QSize(16777215, 25));
        spin_scaleFactor->setFont(font);
        spin_scaleFactor->setFocusPolicy(Qt::StrongFocus);
        spin_scaleFactor->setDecimals(2);
        spin_scaleFactor->setMaximum(1.000000000000000);
        spin_scaleFactor->setSingleStep(0.050000000000000);
        spin_scaleFactor->setValue(0.500000000000000);

        gridLayout_4->addWidget(spin_scaleFactor, 2, 0, 1, 1);

        spin_minRadius = new QDoubleSpinBox(groupBox_3);
        spin_minRadius->setObjectName(QString::fromUtf8("spin_minRadius"));
        spin_minRadius->setEnabled(false);
        sizePolicy3.setHeightForWidth(spin_minRadius->sizePolicy().hasHeightForWidth());
        spin_minRadius->setSizePolicy(sizePolicy3);
        spin_minRadius->setMinimumSize(QSize(0, 25));
        spin_minRadius->setMaximumSize(QSize(16777215, 25));
        spin_minRadius->setFont(font);
        spin_minRadius->setFocusPolicy(Qt::StrongFocus);
        spin_minRadius->setDecimals(2);
        spin_minRadius->setSingleStep(0.050000000000000);
        spin_minRadius->setValue(0.250000000000000);

        gridLayout_4->addWidget(spin_minRadius, 4, 0, 1, 1);

        line_2 = new QFrame(groupBox_3);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout_4->addWidget(line_2, 0, 3, 5, 1);

        table_IAD = new QTableWidget(groupBox_3);
        if (table_IAD->columnCount() < 3)
            table_IAD->setColumnCount(3);
        QFont font1;
        font1.setPointSize(10);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setFont(font1);
        table_IAD->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setFont(font1);
        table_IAD->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setFont(font1);
        table_IAD->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        table_IAD->setObjectName(QString::fromUtf8("table_IAD"));
        table_IAD->setEnabled(false);
        sizePolicy.setHeightForWidth(table_IAD->sizePolicy().hasHeightForWidth());
        table_IAD->setSizePolicy(sizePolicy);
        table_IAD->setFont(font1);
        table_IAD->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        table_IAD->horizontalHeader()->setMinimumSectionSize(20);
        table_IAD->horizontalHeader()->setDefaultSectionSize(80);
        table_IAD->horizontalHeader()->setStretchLastSection(true);
        table_IAD->verticalHeader()->setVisible(false);
        table_IAD->verticalHeader()->setMinimumSectionSize(23);
        table_IAD->verticalHeader()->setDefaultSectionSize(23);

        gridLayout_4->addWidget(table_IAD, 1, 4, 4, 1);


        gridLayout->addWidget(groupBox_3, 4, 0, 1, 1);

        groupBox_11 = new QGroupBox(Tab_Init);
        groupBox_11->setObjectName(QString::fromUtf8("groupBox_11"));
        groupBox_11->setFont(font);
        gridLayout_2 = new QGridLayout(groupBox_11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        pushButton_removeMolUnit = new QPushButton(groupBox_11);
        pushButton_removeMolUnit->setObjectName(QString::fromUtf8("pushButton_removeMolUnit"));
        pushButton_removeMolUnit->setEnabled(false);
        pushButton_removeMolUnit->setFont(font);
        pushButton_removeMolUnit->setFocusPolicy(Qt::TabFocus);

        gridLayout_2->addWidget(pushButton_removeMolUnit, 1, 3, 1, 1);

        cb_useMolUnit = new QCheckBox(groupBox_11);
        cb_useMolUnit->setObjectName(QString::fromUtf8("cb_useMolUnit"));
        cb_useMolUnit->setFont(font);
        cb_useMolUnit->setFocusPolicy(Qt::StrongFocus);

        gridLayout_2->addWidget(cb_useMolUnit, 1, 0, 1, 1);

        cb_allowRandSpg = new QCheckBox(groupBox_11);
        cb_allowRandSpg->setObjectName(QString::fromUtf8("cb_allowRandSpg"));
        cb_allowRandSpg->setFont(font);
        cb_allowRandSpg->setFocusPolicy(Qt::StrongFocus);

        gridLayout_2->addWidget(cb_allowRandSpg, 0, 0, 1, 1);

        pushButton_addMolUnit = new QPushButton(groupBox_11);
        pushButton_addMolUnit->setObjectName(QString::fromUtf8("pushButton_addMolUnit"));
        pushButton_addMolUnit->setEnabled(false);
        pushButton_addMolUnit->setFont(font);
        pushButton_addMolUnit->setFocusPolicy(Qt::TabFocus);

        gridLayout_2->addWidget(pushButton_addMolUnit, 1, 2, 1, 1);

        pushButton_removeAllMolUnit = new QPushButton(groupBox_11);
        pushButton_removeAllMolUnit->setObjectName(QString::fromUtf8("pushButton_removeAllMolUnit"));
        pushButton_removeAllMolUnit->setEnabled(false);
        pushButton_removeAllMolUnit->setFont(font);
        pushButton_removeAllMolUnit->setFocusPolicy(Qt::TabFocus);

        gridLayout_2->addWidget(pushButton_removeAllMolUnit, 1, 4, 1, 1);

        table_molUnit = new QTableWidget(groupBox_11);
        if (table_molUnit->columnCount() < 6)
            table_molUnit->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        __qtablewidgetitem3->setFont(font1);
        table_molUnit->setHorizontalHeaderItem(0, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        __qtablewidgetitem4->setFont(font1);
        table_molUnit->setHorizontalHeaderItem(1, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        __qtablewidgetitem5->setFont(font1);
        table_molUnit->setHorizontalHeaderItem(2, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        __qtablewidgetitem6->setFont(font1);
        table_molUnit->setHorizontalHeaderItem(3, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        __qtablewidgetitem7->setFont(font1);
        table_molUnit->setHorizontalHeaderItem(4, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        __qtablewidgetitem8->setFont(font1);
        table_molUnit->setHorizontalHeaderItem(5, __qtablewidgetitem8);
        table_molUnit->setObjectName(QString::fromUtf8("table_molUnit"));
        table_molUnit->setEnabled(false);
        sizePolicy.setHeightForWidth(table_molUnit->sizePolicy().hasHeightForWidth());
        table_molUnit->setSizePolicy(sizePolicy);
        table_molUnit->setFont(font1);
        table_molUnit->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        table_molUnit->horizontalHeader()->setCascadingSectionResizes(true);
        table_molUnit->horizontalHeader()->setMinimumSectionSize(20);
        table_molUnit->horizontalHeader()->setDefaultSectionSize(80);
        table_molUnit->horizontalHeader()->setStretchLastSection(true);
        table_molUnit->verticalHeader()->setVisible(false);
        table_molUnit->verticalHeader()->setMinimumSectionSize(23);
        table_molUnit->verticalHeader()->setDefaultSectionSize(23);

        gridLayout_2->addWidget(table_molUnit, 2, 0, 1, 5);

        push_spgOptions = new QPushButton(groupBox_11);
        push_spgOptions->setObjectName(QString::fromUtf8("push_spgOptions"));
        push_spgOptions->setEnabled(false);
        push_spgOptions->setFont(font);
        push_spgOptions->setFocusPolicy(Qt::TabFocus);

        gridLayout_2->addWidget(push_spgOptions, 0, 2, 1, 3);


        gridLayout->addWidget(groupBox_11, 4, 2, 1, 1);

        groupBox_2 = new QGroupBox(Tab_Init);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        sizePolicy.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy);
        groupBox_2->setFont(font);
        gridLayout_6 = new QGridLayout(groupBox_2);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        label_14 = new QLabel(groupBox_2);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        sizePolicy.setHeightForWidth(label_14->sizePolicy().hasHeightForWidth());
        label_14->setSizePolicy(sizePolicy);
        label_14->setMinimumSize(QSize(0, 18));
        label_14->setFont(font);
        label_14->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_6->addWidget(label_14, 0, 0, 1, 1);

        label_10 = new QLabel(groupBox_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setFont(font);

        gridLayout_6->addWidget(label_10, 5, 0, 1, 1);

        edit_ref_enes = new QLineEdit(groupBox_2);
        edit_ref_enes->setObjectName(QString::fromUtf8("edit_ref_enes"));
        edit_ref_enes->setMinimumSize(QSize(0, 25));
        edit_ref_enes->setFont(font);

        gridLayout_6->addWidget(edit_ref_enes, 5, 1, 1, 5);

        table_comp = new QTableWidget(groupBox_2);
        if (table_comp->columnCount() < 5)
            table_comp->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        __qtablewidgetitem9->setFont(font1);
        table_comp->setHorizontalHeaderItem(0, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        __qtablewidgetitem10->setFont(font1);
        table_comp->setHorizontalHeaderItem(1, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        __qtablewidgetitem11->setFont(font1);
        table_comp->setHorizontalHeaderItem(2, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        __qtablewidgetitem12->setFont(font1);
        table_comp->setHorizontalHeaderItem(3, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        __qtablewidgetitem13->setFont(font1);
        table_comp->setHorizontalHeaderItem(4, __qtablewidgetitem13);
        table_comp->setObjectName(QString::fromUtf8("table_comp"));
        sizePolicy.setHeightForWidth(table_comp->sizePolicy().hasHeightForWidth());
        table_comp->setSizePolicy(sizePolicy);
        table_comp->setMinimumSize(QSize(0, 0));
        table_comp->setFont(font1);
        table_comp->setFocusPolicy(Qt::StrongFocus);
        table_comp->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        table_comp->setEditTriggers(QAbstractItemView::NoEditTriggers);
        table_comp->setTabKeyNavigation(false);
        table_comp->setSelectionBehavior(QAbstractItemView::SelectRows);
        table_comp->setSortingEnabled(false);
        table_comp->setCornerButtonEnabled(false);
        table_comp->horizontalHeader()->setMinimumSectionSize(20);
        table_comp->horizontalHeader()->setDefaultSectionSize(80);
        table_comp->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        table_comp->horizontalHeader()->setStretchLastSection(true);
        table_comp->verticalHeader()->setVisible(false);
        table_comp->verticalHeader()->setMinimumSectionSize(23);
        table_comp->verticalHeader()->setDefaultSectionSize(23);

        gridLayout_6->addWidget(table_comp, 1, 0, 1, 6);

        edit_composition = new QLineEdit(groupBox_2);
        edit_composition->setObjectName(QString::fromUtf8("edit_composition"));
        QSizePolicy sizePolicy4(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(edit_composition->sizePolicy().hasHeightForWidth());
        edit_composition->setSizePolicy(sizePolicy4);
        edit_composition->setMinimumSize(QSize(0, 25));
        edit_composition->setMaximumSize(QSize(16777215, 25));
        edit_composition->setBaseSize(QSize(0, 0));
        edit_composition->setFont(font);

        gridLayout_6->addWidget(edit_composition, 0, 1, 1, 5);

        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_6->addWidget(label_7, 3, 0, 1, 1);

        sb_min_atoms = new QSpinBox(groupBox_2);
        sb_min_atoms->setObjectName(QString::fromUtf8("sb_min_atoms"));
        sb_min_atoms->setMinimumSize(QSize(60, 25));
        sb_min_atoms->setMaximumSize(QSize(60, 16777215));
        sb_min_atoms->setMinimum(1);
        sb_min_atoms->setMaximum(1000000);

        gridLayout_6->addWidget(sb_min_atoms, 3, 1, 1, 1);

        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font);

        gridLayout_6->addWidget(label_6, 3, 2, 1, 1);

        sb_max_atoms = new QSpinBox(groupBox_2);
        sb_max_atoms->setObjectName(QString::fromUtf8("sb_max_atoms"));
        sb_max_atoms->setMinimumSize(QSize(60, 25));
        sb_max_atoms->setMaximumSize(QSize(60, 16777215));
        sb_max_atoms->setFont(font);
        sb_max_atoms->setMinimum(1);
        sb_max_atoms->setMaximum(1000000);
        sb_max_atoms->setValue(20);

        gridLayout_6->addWidget(sb_max_atoms, 3, 3, 1, 1);

        cb_vcsearch = new QCheckBox(groupBox_2);
        cb_vcsearch->setObjectName(QString::fromUtf8("cb_vcsearch"));
        cb_vcsearch->setFont(font);

        gridLayout_6->addWidget(cb_vcsearch, 3, 5, 1, 1);


        gridLayout->addWidget(groupBox_2, 0, 0, 1, 1);

#if QT_CONFIG(shortcut)
        label_2->setBuddy(spin_c_min);
        label_11->setBuddy(spin_gamma_min);
        label_18->setBuddy(spin_c_min);
        label_4->setBuddy(spin_alpha_min);
        label_8->setBuddy(spin_beta_min);
        label_3->setBuddy(spin_b_min);
        label_5->setBuddy(spin_a_min);
        label_9->setBuddy(spin_minRadius);
        label->setBuddy(spin_scaleFactor);
        label_14->setBuddy(edit_composition);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(edit_composition, table_comp);
        QWidget::setTabOrder(table_comp, edit_ref_enes);
        QWidget::setTabOrder(edit_ref_enes, cb_interatomicDistanceLimit);
        QWidget::setTabOrder(cb_interatomicDistanceLimit, spin_scaleFactor);
        QWidget::setTabOrder(spin_scaleFactor, spin_minRadius);
        QWidget::setTabOrder(spin_minRadius, cb_customIAD);
        QWidget::setTabOrder(cb_customIAD, table_IAD);
        QWidget::setTabOrder(table_IAD, cb_checkStepOpt);
        QWidget::setTabOrder(cb_checkStepOpt, spin_a_min);
        QWidget::setTabOrder(spin_a_min, spin_a_max);
        QWidget::setTabOrder(spin_a_max, spin_b_min);
        QWidget::setTabOrder(spin_b_min, spin_b_max);
        QWidget::setTabOrder(spin_b_max, spin_c_min);
        QWidget::setTabOrder(spin_c_min, spin_c_max);
        QWidget::setTabOrder(spin_c_max, spin_alpha_min);
        QWidget::setTabOrder(spin_alpha_min, spin_alpha_max);
        QWidget::setTabOrder(spin_alpha_max, spin_beta_min);
        QWidget::setTabOrder(spin_beta_min, spin_beta_max);
        QWidget::setTabOrder(spin_beta_max, spin_gamma_min);
        QWidget::setTabOrder(spin_gamma_min, spin_gamma_max);
        QWidget::setTabOrder(spin_gamma_max, spin_vol_min);
        QWidget::setTabOrder(spin_vol_min, spin_vol_max);
        QWidget::setTabOrder(spin_vol_max, spin_minVolumeScale);
        QWidget::setTabOrder(spin_minVolumeScale, spin_maxVolumeScale);
        QWidget::setTabOrder(spin_maxVolumeScale, edit_ele_vols);
        QWidget::setTabOrder(edit_ele_vols, cb_allowRandSpg);
        QWidget::setTabOrder(cb_allowRandSpg, push_spgOptions);
        QWidget::setTabOrder(push_spgOptions, cb_useMolUnit);
        QWidget::setTabOrder(cb_useMolUnit, pushButton_addMolUnit);
        QWidget::setTabOrder(pushButton_addMolUnit, pushButton_removeMolUnit);
        QWidget::setTabOrder(pushButton_removeMolUnit, pushButton_removeAllMolUnit);
        QWidget::setTabOrder(pushButton_removeAllMolUnit, table_molUnit);

        retranslateUi(Tab_Init);
        QObject::connect(cb_interatomicDistanceLimit, SIGNAL(toggled(bool)), spin_scaleFactor, SLOT(setEnabled(bool)));
        QObject::connect(cb_interatomicDistanceLimit, SIGNAL(toggled(bool)), label, SLOT(setEnabled(bool)));
        QObject::connect(cb_interatomicDistanceLimit, SIGNAL(toggled(bool)), label_9, SLOT(setEnabled(bool)));
        QObject::connect(cb_interatomicDistanceLimit, SIGNAL(toggled(bool)), spin_minRadius, SLOT(setEnabled(bool)));
        QObject::connect(cb_useMolUnit, SIGNAL(toggled(bool)), table_molUnit, SLOT(setEnabled(bool)));
        QObject::connect(cb_useMolUnit, SIGNAL(toggled(bool)), pushButton_addMolUnit, SLOT(setEnabled(bool)));
        QObject::connect(cb_useMolUnit, SIGNAL(toggled(bool)), pushButton_removeAllMolUnit, SLOT(setEnabled(bool)));
        QObject::connect(cb_useMolUnit, SIGNAL(toggled(bool)), pushButton_removeMolUnit, SLOT(setEnabled(bool)));
        QObject::connect(cb_useMolUnit, SIGNAL(toggled(bool)), cb_allowRandSpg, SLOT(setDisabled(bool)));
        QObject::connect(cb_allowRandSpg, SIGNAL(toggled(bool)), cb_useMolUnit, SLOT(setDisabled(bool)));
        QObject::connect(cb_allowRandSpg, SIGNAL(toggled(bool)), push_spgOptions, SLOT(setEnabled(bool)));
        QObject::connect(cb_customIAD, SIGNAL(toggled(bool)), table_IAD, SLOT(setEnabled(bool)));
        QObject::connect(cb_customIAD, SIGNAL(toggled(bool)), cb_interatomicDistanceLimit, SLOT(setDisabled(bool)));
        QObject::connect(cb_interatomicDistanceLimit, SIGNAL(toggled(bool)), cb_customIAD, SLOT(setDisabled(bool)));
        QObject::connect(cb_customIAD, SIGNAL(toggled(bool)), cb_checkStepOpt, SLOT(setEnabled(bool)));
        QObject::connect(cb_interatomicDistanceLimit, SIGNAL(toggled(bool)), cb_checkStepOpt, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(Tab_Init);
    } // setupUi

    void retranslateUi(QWidget *Tab_Init)
    {
        Tab_Init->setWindowTitle(QCoreApplication::translate("Tab_Init", "Form", nullptr));
#if QT_CONFIG(tooltip)
        Tab_Init->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        groupBox->setTitle(QCoreApplication::translate("Tab_Init", "Unit Cell Parameters", nullptr));
        label_2->setText(QCoreApplication::translate("Tab_Init", "Length C (\303\205)", nullptr));
        label_11->setText(QCoreApplication::translate("Tab_Init", "Angle \316\263 (\302\260)", nullptr));
        label_18->setText(QCoreApplication::translate("Tab_Init", "<html><head/><body><p>Volume (\303\205<span style=\" vertical-align:super;\">3</span>/Atom)</p></body></html>", nullptr));
#if QT_CONFIG(tooltip)
        edit_ele_vols->setToolTip(QCoreApplication::translate("Tab_Init", "<html><head/><body><p>If desire to use volume limits for elements, enter a comma-delimited list of &quot;full formula&quot; of all elemens persent in the chemical system. Each entry must be the &quot;full chemical formula&quot; of elemental unit cell followed by the corresponding volume limits (minimum then maximum).</p><p>Using the entered composition, XtalOpt will calculate the &quot;volume per atom&quot; values for all elements, and if values are entered properly, the table of elements at the top left corner will be updated by the &quot;volume per atom&quot; values.</p><p>For example, entering &quot;Ti4 40 80, O2 30 60&quot; will set the minimum and maximum for Ti and O to &quot;10, 20&quot; and &quot;15,30&quot; (\303\205<span style=\" vertical-align:super;\">3</span>/Atom) for Ti and O, respectively.</p><p>This will take effect only if acceptable values are specified for all elements in the chemical system.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        label_12->setText(QCoreApplication::translate("Tab_Init", "Scaled volume factors", nullptr));
        label_4->setText(QCoreApplication::translate("Tab_Init", "Angle \316\261 (\302\260)", nullptr));
        label_8->setText(QCoreApplication::translate("Tab_Init", "Angle \316\262 (\302\260)", nullptr));
        label_3->setText(QCoreApplication::translate("Tab_Init", "Length B (\303\205)", nullptr));
#if QT_CONFIG(tooltip)
        spin_maxVolumeScale->setToolTip(QCoreApplication::translate("Tab_Init", "<html><head/><body><p>If specified by a non-zero value such that minimum factor is smaller than (or equal to) the maximum factor, these values will be used to determine generated cell volume.</p><p><br/>XtalOpt calculates the total volume of spheres with covalent radius for all atoms in the cell, and minimum and maximum limits of the cell will be specified by multiplying the minimum and maximum factors in the above volume.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        spin_vol_min->setToolTip(QCoreApplication::translate("Tab_Init", "<html><head/><body><p>The minimum limit for the volume of the generated cells (in \303\205<span style=\" vertical-align:super;\">3</span>/Atom units).</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        spin_minVolumeScale->setToolTip(QCoreApplication::translate("Tab_Init", "<html><head/><body><p>If specified by a non-zero value such that minimum factor is smaller than (or equal to) the maximum factor, these values will be used to determine generated cell volume.</p><p><br/>XtalOpt calculates the total volume of spheres with covalent radius for all atoms in the cell, and minimum and maximum limits of the cell will be specified by multiplying the minimum and maximum factors in the above volume.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        label_13->setText(QCoreApplication::translate("Tab_Init", "<html><head/><body><p>Elemental volumes (\303\205<span style=\" vertical-align:super;\">3</span>)</p></body></html>", nullptr));
        label_5->setText(QCoreApplication::translate("Tab_Init", "Length A (\303\205)", nullptr));
#if QT_CONFIG(tooltip)
        spin_vol_max->setToolTip(QCoreApplication::translate("Tab_Init", "<html><head/><body><p>The maximum limit for the volume of the generated cells (in \303\205<span style=\" vertical-align:super;\">3</span>/Atom units).</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        groupBox_3->setTitle(QCoreApplication::translate("Tab_Init", "Interatomic Distances", nullptr));
        cb_checkStepOpt->setText(QCoreApplication::translate("Tab_Init", "Check IAD post-optimization", nullptr));
        label_9->setText(QCoreApplication::translate("Tab_Init", "Minimum radius", nullptr));
#if QT_CONFIG(tooltip)
        cb_interatomicDistanceLimit->setToolTip(QCoreApplication::translate("Tab_Init", "<html><head/><body><p>Use this to limit the shortest interatomic distance between atoms.</p><p>This ensures that atoms aren't overlapping.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        cb_interatomicDistanceLimit->setText(QCoreApplication::translate("Tab_Init", "Scaled interatomic distances", nullptr));
        cb_customIAD->setText(QCoreApplication::translate("Tab_Init", "Custom interatomic distances", nullptr));
        label->setText(QCoreApplication::translate("Tab_Init", "Scale factor", nullptr));
#if QT_CONFIG(tooltip)
        spin_scaleFactor->setToolTip(QCoreApplication::translate("Tab_Init", "<html><head/><body><p>Use this to limit the shortest interatomic distance between atoms. This ensures that atoms aren't overlapping.</p><p>The value specified here is multiplied by each atom's covalent radius, and the sum of the scaled radii are used to enforce a minimum atomic separation between atoms.</p><p>The default recommended value is 0.5.</p><p>This ensures that atoms will not be unphysically close<br/>(which may prevent certain optimization codes from working).<br/>Using a higher value is acceptable while creating random structures<br/>in the first generation, but may prevent the crossover operator<br/>from being able to create offspring that meet this restriction.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        spin_scaleFactor->setSuffix(QCoreApplication::translate("Tab_Init", " * radii", nullptr));
        spin_minRadius->setSuffix(QCoreApplication::translate("Tab_Init", " \303\205", nullptr));
        QTableWidgetItem *___qtablewidgetitem = table_IAD->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("Tab_Init", "Atom 1", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = table_IAD->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("Tab_Init", "Atom 2", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = table_IAD->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("Tab_Init", "Min. IAD", nullptr));
        groupBox_11->setTitle(QCoreApplication::translate("Tab_Init", "Cell Initialization", nullptr));
#if QT_CONFIG(tooltip)
        pushButton_removeMolUnit->setToolTip(QCoreApplication::translate("Tab_Init", "<html><head/><body><p>Remove selected row from the 'molecular unit' table</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_removeMolUnit->setText(QCoreApplication::translate("Tab_Init", "Remove", nullptr));
#if QT_CONFIG(tooltip)
        cb_useMolUnit->setToolTip(QCoreApplication::translate("Tab_Init", "<html><head/><body><p>By enabling, allows the user the freedom to select atom types from the above composition to generate &quot;molecular units&quot;.</p><p>**This is currently limited to single-center moelcules with 1-6 coordinated atoms to the central atom.**</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        cb_useMolUnit->setText(QCoreApplication::translate("Tab_Init", "Use molecular units", nullptr));
#if QT_CONFIG(tooltip)
        cb_allowRandSpg->setToolTip(QCoreApplication::translate("Tab_Init", "<html><head/><body><p>Use RandSpg, a built-in program for generating random crystals with space groups, to create the initial generation.</p><p>You may select the space groups to be generated with the &quot;Space Group Options&quot; button on the right. If you do not select space groups, it will select them randomly based upon which space groups may be generated.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        cb_allowRandSpg->setText(QCoreApplication::translate("Tab_Init", "Use RandSpg", nullptr));
#if QT_CONFIG(tooltip)
        pushButton_addMolUnit->setToolTip(QCoreApplication::translate("Tab_Init", "<html><head/><body><p>Add a new row to the 'molecular unit' table</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_addMolUnit->setText(QCoreApplication::translate("Tab_Init", "Add", nullptr));
#if QT_CONFIG(tooltip)
        pushButton_removeAllMolUnit->setToolTip(QCoreApplication::translate("Tab_Init", "<html><head/><body><p>Remove all rows from the 'molecular unit' table</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_removeAllMolUnit->setText(QCoreApplication::translate("Tab_Init", "Remove All", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = table_molUnit->horizontalHeaderItem(0);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("Tab_Init", "Center", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = table_molUnit->horizontalHeaderItem(1);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("Tab_Init", "#", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = table_molUnit->horizontalHeaderItem(2);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("Tab_Init", "Neighbor", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = table_molUnit->horizontalHeaderItem(3);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("Tab_Init", "#", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = table_molUnit->horizontalHeaderItem(4);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("Tab_Init", "Geometry", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = table_molUnit->horizontalHeaderItem(5);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("Tab_Init", "Distance", nullptr));
#if QT_CONFIG(tooltip)
        table_molUnit->setToolTip(QCoreApplication::translate("Tab_Init", "<html><head/><body><p>Center: Choose the atom type to be the center of the 'molecular unit'</p><p>#: Number of center atoms to coordinate the neighbor atoms</p><p>Neighbor: Choose the atom type to coordinate to the center atom</p><p>#: Number of neighbor atoms to coordinate to the center atom</p><p>Geometry: How to orient the neighbor around the center atom</p><p>Distance: Distance to place each neighbor atom from the center atom</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        push_spgOptions->setToolTip(QCoreApplication::translate("Tab_Init", "<html><head/><body><p>Use this menu to select the space groups to be generated by RandSpg.</p><p>This displays a table of spacegroups and each spacegroup that is possible.<p>This table will be reset if the user changes the composition after setting the table.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        push_spgOptions->setText(QCoreApplication::translate("Tab_Init", "Space Group Options", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("Tab_Init", "Composition", nullptr));
        label_14->setText(QCoreApplication::translate("Tab_Init", "Chemical formulas", nullptr));
        label_10->setText(QCoreApplication::translate("Tab_Init", "Reference energies", nullptr));
#if QT_CONFIG(tooltip)
        edit_ref_enes->setToolTip(QCoreApplication::translate("Tab_Init", "<html><head/><body><p>By default, XtalOpt uses 0 as the reference energy for elements in calculating the distance above hull. If user desires to specify other values, they can be enetered as a comma-delimited list of entries. Each entry must be the &quot;full chemical formula&quot; of the cell followed by its &quot;total energy&quot;, which is internally converted to energy per atom and used to calculate convex hull. Example of a valid entry is:</p><p>Ti2 -4.5, O3 -7.8</p><p>which results in -2.25 and -2.6 per atom (in the intended units) for Ti and O, respectively.</p><p>(1) Energies must be specified in the units that is being used by local optimizer.</p><p>(2) Any structure which is relevant/important in computing the convex hull can be entered. E.g., for a ternary system, reference energies for all elemental, binary and ternary structures can be enetered. Valid inputs will be then included in convex hull by XtalOpt.</p><p>(3) If the user choses to enter reference energies, they will be accepted only if val"
                        "ues for all elements in the system are given.</p><p>(4) In any case, the successfully read elemental reference energies are being shown in the element list table at the top left corner of the tab.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        QTableWidgetItem *___qtablewidgetitem9 = table_comp->horizontalHeaderItem(0);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("Tab_Init", "Symbol", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = table_comp->horizontalHeaderItem(1);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("Tab_Init", "Min. Radius", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = table_comp->horizontalHeaderItem(2);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("Tab_Init", "Ref. Ene./Atom", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = table_comp->horizontalHeaderItem(3);
        ___qtablewidgetitem12->setText(QCoreApplication::translate("Tab_Init", "Min. Vol./Atom", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = table_comp->horizontalHeaderItem(4);
        ___qtablewidgetitem13->setText(QCoreApplication::translate("Tab_Init", "Max. Vol./Atom", nullptr));
#if QT_CONFIG(tooltip)
        edit_composition->setToolTip(QCoreApplication::translate("Tab_Init", "<html><head/><body><p>List of chemical formulas to be used to generate the initial set of structures. The entered formula, in combination with the variable-composition setting, will determine the type of the evolutionary search.</p><p>If variable-search is not checked, the search will be over a fixed composition (if all inputs have the same composition) or multi-composition (if input includes different compositions).</p><p>Valid input is a comma-delimited list of full chemical formula for the &quot;unit cells&quot;, such that all entries belong to the same chemical system (same number and types of elements).</p><p>Each entry must include chemical symbols followed by a number (non-case sensitive, spaces are allowed, order of the elements does not matter), e.g.,</p><p>Ti1 O4, Ti2 O3, O2Ti2, Ti4O4</p><p>Different &quot;formula units&quot; of the same composition can be also specified be a hyphen-separated pair of entries with two ends having the same composition, and the second one being a proper super cell of th"
                        "e left-hand side, e.g.,</p><p>Ti1O2- O8Ti4, Ti7 O2</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        label_7->setText(QCoreApplication::translate("Tab_Init", "Minimum atoms", nullptr));
#if QT_CONFIG(tooltip)
        sb_min_atoms->setToolTip(QCoreApplication::translate("Tab_Init", "<html><head/><body><p>Specifies the minimum number of atoms in the search.</p><p>This is relevant in variable-composition search where unit cells of various sizes are being produced.</p><p>This value can't be larger than the maximum number of atoms setting, and if the input formulas include a cell with total number of atoms smaller than current value of minimum number of atoms, this parameter is automatically updated.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        label_6->setText(QCoreApplication::translate("Tab_Init", "Maximum atoms", nullptr));
#if QT_CONFIG(tooltip)
        sb_max_atoms->setToolTip(QCoreApplication::translate("Tab_Init", "<html><head/><body><p>Specifies the maximum number of atoms in the search.</p><p>This is relevant in variable-composition search where unit cells of various sizes are being produced; and in generating random supercells.</p><p>(1) If the input formulas include a cell with total number of atoms larger than current value of maximum number of atoms, this parameter is automatically updated.</p><p>(2) If the generation of random supercells selected by a percent chance of greater than 0, then the supercells are generated only if the maximum number of atoms allows.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        cb_vcsearch->setToolTip(QCoreApplication::translate("Tab_Init", "<html><head/><body><p>If checked, after generating the initial set of structures from the input list of chemical formulas, the evolutionary operation crossover (and permutomic if given a non-zero weight) will produce unit cells of new chemical compositions and sizes (up to specified maximum number of atoms).</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        cb_vcsearch->setText(QCoreApplication::translate("Tab_Init", "Variable-composition search", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Tab_Init: public Ui_Tab_Init {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TAB_STRUC_H
