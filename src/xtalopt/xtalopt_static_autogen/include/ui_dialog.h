/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_XtalOptDialog
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_prog;
    QPushButton *push_begin;
    QPushButton *push_import;
    QFrame *frame_2;
    QGridLayout *gridLayout_3;
    QLabel *label_3;
    QLabel *label_run;
    QPushButton *push_save;
    QSpacerItem *horizontalSpacer;
    QFrame *frame;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QLabel *label_opt;
    QPushButton *push_resume;
    QTabWidget *tabs;
    QWidget *tab_log;
    QGridLayout *gridLayout_7;
    QFrame *frame_4;
    QGridLayout *gridLayout_5;
    QLabel *label_7;
    QLabel *label_fail;
    QFrame *frame_3;
    QGridLayout *gridLayout_4;
    QLabel *label_2;
    QLabel *label_tot;
    QProgressBar *progbar;
    QPushButton *push_export;

    void setupUi(QDialog *XtalOptDialog)
    {
        if (XtalOptDialog->objectName().isEmpty())
            XtalOptDialog->setObjectName(QString::fromUtf8("XtalOptDialog"));
        XtalOptDialog->resize(1097, 436);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(XtalOptDialog->sizePolicy().hasHeightForWidth());
        XtalOptDialog->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(11);
        XtalOptDialog->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/xtalopt/icons/images/xtalopt-logo.png"), QSize(), QIcon::Normal, QIcon::Off);
        XtalOptDialog->setWindowIcon(icon);
        gridLayout = new QGridLayout(XtalOptDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 4, 10, 1, 1);

        label_prog = new QLabel(XtalOptDialog);
        label_prog->setObjectName(QString::fromUtf8("label_prog"));

        gridLayout->addWidget(label_prog, 5, 0, 1, 2);

        push_begin = new QPushButton(XtalOptDialog);
        push_begin->setObjectName(QString::fromUtf8("push_begin"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(push_begin->sizePolicy().hasHeightForWidth());
        push_begin->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(push_begin, 4, 11, 1, 1);

        push_import = new QPushButton(XtalOptDialog);
        push_import->setObjectName(QString::fromUtf8("push_import"));

        gridLayout->addWidget(push_import, 4, 2, 1, 1);

        frame_2 = new QFrame(XtalOptDialog);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        gridLayout_3 = new QGridLayout(frame_2);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_3 = new QLabel(frame_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_3->addWidget(label_3, 0, 0, 1, 1);

        label_run = new QLabel(frame_2);
        label_run->setObjectName(QString::fromUtf8("label_run"));

        gridLayout_3->addWidget(label_run, 0, 1, 1, 1);


        gridLayout->addWidget(frame_2, 4, 8, 1, 1);

        push_save = new QPushButton(XtalOptDialog);
        push_save->setObjectName(QString::fromUtf8("push_save"));

        gridLayout->addWidget(push_save, 4, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 4, 4, 1, 1);

        frame = new QFrame(XtalOptDialog);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(frame);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        label_opt = new QLabel(frame);
        label_opt->setObjectName(QString::fromUtf8("label_opt"));

        gridLayout_2->addWidget(label_opt, 0, 1, 1, 1);


        gridLayout->addWidget(frame, 4, 7, 1, 1);

        push_resume = new QPushButton(XtalOptDialog);
        push_resume->setObjectName(QString::fromUtf8("push_resume"));

        gridLayout->addWidget(push_resume, 4, 1, 1, 1);

        tabs = new QTabWidget(XtalOptDialog);
        tabs->setObjectName(QString::fromUtf8("tabs"));
        tabs->setUsesScrollButtons(false);
        tab_log = new QWidget();
        tab_log->setObjectName(QString::fromUtf8("tab_log"));
        gridLayout_7 = new QGridLayout(tab_log);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        tabs->addTab(tab_log, QString());

        gridLayout->addWidget(tabs, 2, 0, 1, 13);

        frame_4 = new QFrame(XtalOptDialog);
        frame_4->setObjectName(QString::fromUtf8("frame_4"));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        gridLayout_5 = new QGridLayout(frame_4);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        label_7 = new QLabel(frame_4);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_5->addWidget(label_7, 0, 0, 1, 1);

        label_fail = new QLabel(frame_4);
        label_fail->setObjectName(QString::fromUtf8("label_fail"));

        gridLayout_5->addWidget(label_fail, 0, 1, 1, 1);


        gridLayout->addWidget(frame_4, 4, 9, 1, 1);

        frame_3 = new QFrame(XtalOptDialog);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(frame_3->sizePolicy().hasHeightForWidth());
        frame_3->setSizePolicy(sizePolicy2);
        frame_3->setMaximumSize(QSize(125, 16777215));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        gridLayout_4 = new QGridLayout(frame_3);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        label_2 = new QLabel(frame_3);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_4->addWidget(label_2, 0, 0, 1, 1);

        label_tot = new QLabel(frame_3);
        label_tot->setObjectName(QString::fromUtf8("label_tot"));

        gridLayout_4->addWidget(label_tot, 0, 1, 1, 1);


        gridLayout->addWidget(frame_3, 4, 6, 1, 1);

        progbar = new QProgressBar(XtalOptDialog);
        progbar->setObjectName(QString::fromUtf8("progbar"));
        progbar->setValue(24);

        gridLayout->addWidget(progbar, 5, 6, 1, 7);

        push_export = new QPushButton(XtalOptDialog);
        push_export->setObjectName(QString::fromUtf8("push_export"));

        gridLayout->addWidget(push_export, 4, 3, 1, 1);

        QWidget::setTabOrder(tabs, push_save);
        QWidget::setTabOrder(push_save, push_resume);
        QWidget::setTabOrder(push_resume, push_begin);

        retranslateUi(XtalOptDialog);

        push_begin->setDefault(false);
        tabs->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(XtalOptDialog);
    } // setupUi

    void retranslateUi(QDialog *XtalOptDialog)
    {
        XtalOptDialog->setWindowTitle(QCoreApplication::translate("XtalOptDialog", "XtalOpt", nullptr));
        label_prog->setText(QCoreApplication::translate("XtalOptDialog", "TextLabel", nullptr));
        push_begin->setText(QCoreApplication::translate("XtalOptDialog", "&Begin...", nullptr));
#if QT_CONFIG(tooltip)
        push_import->setToolTip(QCoreApplication::translate("XtalOptDialog", "<html><head/><body><p>Read the settings from a CLI input file and initialize the corresponding GUI entries using those values.</p><p><span style=\" font-weight:700;\">NOTE: This is an experimental option and is provided for convenience. Importing settings from a CLI input file might fail to properly initialize GUI entries, and the user must double-check every setting in all tabs to make sure they match their expectation.</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        push_import->setText(QCoreApplication::translate("XtalOptDialog", "Import Settings", nullptr));
        label_3->setText(QCoreApplication::translate("XtalOptDialog", "Running: ", nullptr));
        label_run->setText(QCoreApplication::translate("XtalOptDialog", "0", nullptr));
        push_save->setText(QCoreApplication::translate("XtalOptDialog", "S&ave Session", nullptr));
        label->setText(QCoreApplication::translate("XtalOptDialog", "Optimized: ", nullptr));
        label_opt->setText(QCoreApplication::translate("XtalOptDialog", "0", nullptr));
        push_resume->setText(QCoreApplication::translate("XtalOptDialog", "R&esume Session", nullptr));
        tabs->setTabText(tabs->indexOf(tab_log), QCoreApplication::translate("XtalOptDialog", "&Log", nullptr));
        label_7->setText(QCoreApplication::translate("XtalOptDialog", "Failures: ", nullptr));
        label_fail->setText(QCoreApplication::translate("XtalOptDialog", "0", nullptr));
        label_2->setText(QCoreApplication::translate("XtalOptDialog", "Total:", nullptr));
        label_tot->setText(QCoreApplication::translate("XtalOptDialog", "0", nullptr));
#if QT_CONFIG(tooltip)
        push_export->setToolTip(QCoreApplication::translate("XtalOptDialog", "<html><head/><body><p>Write the settings initialized in the GUI to an XtalOpt CLI input file.</p><p><span style=\" font-weight:700;\">NOTE: This is an experimental option and is provided for convenience. Exporting settings to a CLI input file might fail to properly produce a fully working input file. Especially, various templates (job, optimizer, queue, etc) are not exported. The user must double-check every entry in the produced file before using it for a CLI run.</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        push_export->setText(QCoreApplication::translate("XtalOptDialog", "Export Settings", nullptr));
    } // retranslateUi

};

namespace Ui {
    class XtalOptDialog: public Ui_XtalOptDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
