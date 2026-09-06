/********************************************************************************
** Form generated from reading UI file 'tab_about.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TAB_ABOUT_H
#define UI_TAB_ABOUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Tab_About
{
public:
    QGridLayout *gridLayout;
    QLabel *about_title;
    QLabel *about_details;
    QLabel *about_logo;

    void setupUi(QWidget *Tab_About)
    {
        if (Tab_About->objectName().isEmpty())
            Tab_About->setObjectName(QString::fromUtf8("Tab_About"));
        Tab_About->resize(1083, 576);
        QFont font;
        font.setPointSize(11);
        Tab_About->setFont(font);
        Tab_About->setStyleSheet(QString::fromUtf8(""));
        gridLayout = new QGridLayout(Tab_About);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        about_title = new QLabel(Tab_About);
        about_title->setObjectName(QString::fromUtf8("about_title"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(about_title->sizePolicy().hasHeightForWidth());
        about_title->setSizePolicy(sizePolicy);
        about_title->setAlignment(Qt::AlignCenter);
        about_title->setOpenExternalLinks(false);

        gridLayout->addWidget(about_title, 1, 0, 1, 1);

        about_details = new QLabel(Tab_About);
        about_details->setObjectName(QString::fromUtf8("about_details"));
        about_details->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        about_details->setOpenExternalLinks(true);

        gridLayout->addWidget(about_details, 2, 0, 1, 1);

        about_logo = new QLabel(Tab_About);
        about_logo->setObjectName(QString::fromUtf8("about_logo"));
        about_logo->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(about_logo, 0, 0, 1, 1);


        retranslateUi(Tab_About);

        QMetaObject::connectSlotsByName(Tab_About);
    } // setupUi

    void retranslateUi(QWidget *Tab_About)
    {
        Tab_About->setWindowTitle(QCoreApplication::translate("Tab_About", "Form", nullptr));
        about_title->setText(QCoreApplication::translate("Tab_About", "<html><head/><body><p><br/></p></body></html>", nullptr));
        about_details->setText(QCoreApplication::translate("Tab_About", "<html><head/><body><p>XtalOpt is an open-source and cross-platform software, developed and maintained in <a href=\"https://www.acsu.buffalo.edu/~ezurek/\"><span style=\" text-decoration: underline; color:#007af4;\">Zurek Group</span></a>.</p><p>Department of Chemistry<br/>777 Natural Sciences Complex<br/>State University of New York at Buffalo<br/>Buffalo, NY 14260-3000, USA </p><p>ezurek-at-buffalo.edu</p><p><br/></p><p>For more information about the code and downloading the binaries for various operating systems, visit <a href=\"https://xtalopt.github.io/\"><span style=\" text-decoration: underline; color:#007af4;\">XtalOpt</span></a> website.</p><p>The latest source-code is available through the <a href=\"https://github.com/xtalopt/XtalOpt\"><span style=\" text-decoration: underline; color:#007af4;\">github repository</span></a> of the code.</p></body></html>", nullptr));
        about_logo->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Tab_About: public Ui_Tab_About {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TAB_ABOUT_H
