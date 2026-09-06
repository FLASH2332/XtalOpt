/********************************************************************************
** Form generated from reading UI file 'xrdOptionsDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_XRDOPTIONSDIALOG_H
#define UI_XRDOPTIONSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_XrdOptionsDialog
{
public:
    QGridLayout *gridLayout;
    QDoubleSpinBox *spin_max2theta;
    QDoubleSpinBox *spin_peakwidth;
    QLabel *label_3;
    QLabel *label_2;
    QLabel *label;
    QDoubleSpinBox *spin_wavelength;
    QSpinBox *spin_numpoints;
    QLabel *label_4;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *XrdOptionsDialog)
    {
        if (XrdOptionsDialog->objectName().isEmpty())
            XrdOptionsDialog->setObjectName(QString::fromUtf8("XrdOptionsDialog"));
        XrdOptionsDialog->resize(324, 237);
        QFont font;
        font.setPointSize(11);
        XrdOptionsDialog->setFont(font);
        gridLayout = new QGridLayout(XrdOptionsDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        spin_max2theta = new QDoubleSpinBox(XrdOptionsDialog);
        spin_max2theta->setObjectName(QString::fromUtf8("spin_max2theta"));
        spin_max2theta->setDecimals(2);
        spin_max2theta->setMaximum(360.000000000000000);
        spin_max2theta->setSingleStep(0.100000000000000);
        spin_max2theta->setValue(162.000000000000000);

        gridLayout->addWidget(spin_max2theta, 3, 1, 1, 1);

        spin_peakwidth = new QDoubleSpinBox(XrdOptionsDialog);
        spin_peakwidth->setObjectName(QString::fromUtf8("spin_peakwidth"));
        spin_peakwidth->setDecimals(5);
        spin_peakwidth->setMaximum(100.000000000000000);
        spin_peakwidth->setSingleStep(0.100000000000000);
        spin_peakwidth->setValue(0.529580000000000);

        gridLayout->addWidget(spin_peakwidth, 1, 1, 1, 1);

        label_3 = new QLabel(XrdOptionsDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        label_2 = new QLabel(XrdOptionsDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label = new QLabel(XrdOptionsDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        spin_wavelength = new QDoubleSpinBox(XrdOptionsDialog);
        spin_wavelength->setObjectName(QString::fromUtf8("spin_wavelength"));
        spin_wavelength->setDecimals(5);
        spin_wavelength->setMinimum(0.000000000000000);
        spin_wavelength->setMaximum(100.000000000000000);
        spin_wavelength->setSingleStep(0.100000000000000);
        spin_wavelength->setValue(1.505600000000000);

        gridLayout->addWidget(spin_wavelength, 0, 1, 1, 1);

        spin_numpoints = new QSpinBox(XrdOptionsDialog);
        spin_numpoints->setObjectName(QString::fromUtf8("spin_numpoints"));
        spin_numpoints->setMinimum(1);
        spin_numpoints->setMaximum(100000);
        spin_numpoints->setValue(1000);

        gridLayout->addWidget(spin_numpoints, 2, 1, 1, 1);

        label_4 = new QLabel(XrdOptionsDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setLayoutDirection(Qt::LeftToRight);
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        buttonBox = new QDialogButtonBox(XrdOptionsDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 4, 1, 1, 1);

        QWidget::setTabOrder(spin_wavelength, spin_peakwidth);
        QWidget::setTabOrder(spin_peakwidth, spin_numpoints);
        QWidget::setTabOrder(spin_numpoints, spin_max2theta);

        retranslateUi(XrdOptionsDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), XrdOptionsDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), XrdOptionsDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(XrdOptionsDialog);
    } // setupUi

    void retranslateUi(QDialog *XrdOptionsDialog)
    {
        XrdOptionsDialog->setWindowTitle(QCoreApplication::translate("XrdOptionsDialog", "Generate Simulated XRD Pattern Options", nullptr));
#if QT_CONFIG(tooltip)
        XrdOptionsDialog->setToolTip(QCoreApplication::translate("XrdOptionsDialog", "<html><head/><body><p>The broadening of the peak at the base (in degrees).</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        spin_max2theta->setToolTip(QCoreApplication::translate("XrdOptionsDialog", "<html><head/><body><p>The max 2theta value in degrees.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        spin_max2theta->setSuffix(QCoreApplication::translate("XrdOptionsDialog", "\302\260", nullptr));
        spin_peakwidth->setSuffix(QCoreApplication::translate("XrdOptionsDialog", "\302\260", nullptr));
        label_3->setText(QCoreApplication::translate("XrdOptionsDialog", "Number of points:", nullptr));
        label_2->setText(QCoreApplication::translate("XrdOptionsDialog", "Peak width:", nullptr));
        label->setText(QCoreApplication::translate("XrdOptionsDialog", "Wavelength:", nullptr));
#if QT_CONFIG(tooltip)
        spin_wavelength->setToolTip(QCoreApplication::translate("XrdOptionsDialog", "<html><head/><body><p>The wavelength of the x-ray in Angstroms.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        spin_wavelength->setSuffix(QCoreApplication::translate("XrdOptionsDialog", " \303\205", nullptr));
#if QT_CONFIG(tooltip)
        spin_numpoints->setToolTip(QCoreApplication::translate("XrdOptionsDialog", "<html><head/><body><p>The number of 2theta points.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        label_4->setText(QCoreApplication::translate("XrdOptionsDialog", "Max 2*theta:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class XrdOptionsDialog: public Ui_XrdOptionsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_XRDOPTIONSDIALOG_H
