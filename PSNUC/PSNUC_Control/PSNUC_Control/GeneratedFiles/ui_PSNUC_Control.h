/********************************************************************************
** Form generated from reading UI file 'PSNUC_Control.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PSNUC_CONTROL_H
#define UI_PSNUC_CONTROL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PSNUC_ControlClass
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_16;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_6;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_27;
    QHBoxLayout *horizontalLayout_26;
    QVBoxLayout *verticalLayout_13;
    QLabel *progressLabel;
    QProgressBar *progressBar;
    QVBoxLayout *verticalLayout_15;
    QTextBrowser *textBrowser;
    QVBoxLayout *verticalLayout_8;
    QVBoxLayout *verticalLayout_17;
    QSpacerItem *verticalSpacer_2;
    QVBoxLayout *verticalLayout_12;
    QLabel *versionLabel;
    QPushButton *openurlBtn;
    QHBoxLayout *horizontalLayout_28;
    QLabel *developerLabel;
    QHBoxLayout *exitbtnLayout;
    QHBoxLayout *horizontalLayout_9;
    QPushButton *helpBtn;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *runBtn;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *stopBtn;
    QHBoxLayout *horizontalLayout_13;
    QPushButton *exitBtn;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;

    void setupUi(QMainWindow *PSNUC_ControlClass)
    {
        if (PSNUC_ControlClass->objectName().isEmpty())
            PSNUC_ControlClass->setObjectName(QStringLiteral("PSNUC_ControlClass"));
        PSNUC_ControlClass->resize(550, 700);
        centralWidget = new QWidget(PSNUC_ControlClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout_16 = new QVBoxLayout(centralWidget);
        verticalLayout_16->setSpacing(6);
        verticalLayout_16->setContentsMargins(11, 11, 11, 11);
        verticalLayout_16->setObjectName(QStringLiteral("verticalLayout_16"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_16->addItem(verticalSpacer);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        horizontalLayout_27 = new QHBoxLayout();
        horizontalLayout_27->setSpacing(6);
        horizontalLayout_27->setObjectName(QStringLiteral("horizontalLayout_27"));
        horizontalLayout_26 = new QHBoxLayout();
        horizontalLayout_26->setSpacing(6);
        horizontalLayout_26->setObjectName(QStringLiteral("horizontalLayout_26"));
        verticalLayout_13 = new QVBoxLayout();
        verticalLayout_13->setSpacing(6);
        verticalLayout_13->setObjectName(QStringLiteral("verticalLayout_13"));
        progressLabel = new QLabel(centralWidget);
        progressLabel->setObjectName(QStringLiteral("progressLabel"));

        verticalLayout_13->addWidget(progressLabel);

        progressBar = new QProgressBar(centralWidget);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(progressBar->sizePolicy().hasHeightForWidth());
        progressBar->setSizePolicy(sizePolicy);
        progressBar->setValue(24);

        verticalLayout_13->addWidget(progressBar);

        verticalLayout_15 = new QVBoxLayout();
        verticalLayout_15->setSpacing(6);
        verticalLayout_15->setObjectName(QStringLiteral("verticalLayout_15"));
        textBrowser = new QTextBrowser(centralWidget);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));

        verticalLayout_15->addWidget(textBrowser);


        verticalLayout_13->addLayout(verticalLayout_15);


        horizontalLayout_26->addLayout(verticalLayout_13);


        horizontalLayout_27->addLayout(horizontalLayout_26);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        verticalLayout_17 = new QVBoxLayout();
        verticalLayout_17->setSpacing(6);
        verticalLayout_17->setObjectName(QStringLiteral("verticalLayout_17"));

        verticalLayout_8->addLayout(verticalLayout_17);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_8->addItem(verticalSpacer_2);

        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setSpacing(6);
        verticalLayout_12->setObjectName(QStringLiteral("verticalLayout_12"));
        versionLabel = new QLabel(centralWidget);
        versionLabel->setObjectName(QStringLiteral("versionLabel"));

        verticalLayout_12->addWidget(versionLabel);

        openurlBtn = new QPushButton(centralWidget);
        openurlBtn->setObjectName(QStringLiteral("openurlBtn"));

        verticalLayout_12->addWidget(openurlBtn);


        verticalLayout_8->addLayout(verticalLayout_12);

        horizontalLayout_28 = new QHBoxLayout();
        horizontalLayout_28->setSpacing(6);
        horizontalLayout_28->setObjectName(QStringLiteral("horizontalLayout_28"));
        developerLabel = new QLabel(centralWidget);
        developerLabel->setObjectName(QStringLiteral("developerLabel"));
        developerLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_28->addWidget(developerLabel);


        verticalLayout_8->addLayout(horizontalLayout_28);


        horizontalLayout_27->addLayout(verticalLayout_8);


        verticalLayout_7->addLayout(horizontalLayout_27);


        verticalLayout_6->addLayout(verticalLayout_7);

        exitbtnLayout = new QHBoxLayout();
        exitbtnLayout->setSpacing(6);
        exitbtnLayout->setObjectName(QStringLiteral("exitbtnLayout"));
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        helpBtn = new QPushButton(centralWidget);
        helpBtn->setObjectName(QStringLiteral("helpBtn"));

        horizontalLayout_9->addWidget(helpBtn);


        exitbtnLayout->addLayout(horizontalLayout_9);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        exitbtnLayout->addItem(horizontalSpacer);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        runBtn = new QPushButton(centralWidget);
        runBtn->setObjectName(QStringLiteral("runBtn"));

        horizontalLayout_8->addWidget(runBtn);


        exitbtnLayout->addLayout(horizontalLayout_8);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        stopBtn = new QPushButton(centralWidget);
        stopBtn->setObjectName(QStringLiteral("stopBtn"));

        horizontalLayout_7->addWidget(stopBtn);


        exitbtnLayout->addLayout(horizontalLayout_7);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        exitBtn = new QPushButton(centralWidget);
        exitBtn->setObjectName(QStringLiteral("exitBtn"));

        horizontalLayout_13->addWidget(exitBtn);


        exitbtnLayout->addLayout(horizontalLayout_13);


        verticalLayout_6->addLayout(exitbtnLayout);


        verticalLayout_16->addLayout(verticalLayout_6);

        PSNUC_ControlClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(PSNUC_ControlClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 550, 21));
        PSNUC_ControlClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(PSNUC_ControlClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        PSNUC_ControlClass->addToolBar(Qt::TopToolBarArea, mainToolBar);

        retranslateUi(PSNUC_ControlClass);

        QMetaObject::connectSlotsByName(PSNUC_ControlClass);
    } // setupUi

    void retranslateUi(QMainWindow *PSNUC_ControlClass)
    {
        PSNUC_ControlClass->setWindowTitle(QApplication::translate("PSNUC_ControlClass", "PSNUC_Control", nullptr));
        progressLabel->setText(QApplication::translate("PSNUC_ControlClass", "Progress", nullptr));
        versionLabel->setText(QApplication::translate("PSNUC_ControlClass", "Version : v 0.0.2", nullptr));
        openurlBtn->setText(QApplication::translate("PSNUC_ControlClass", "Open the code resource", nullptr));
        developerLabel->setText(QApplication::translate("PSNUC_ControlClass", "Produced by : J. Kang", nullptr));
        helpBtn->setText(QApplication::translate("PSNUC_ControlClass", "Help", nullptr));
        runBtn->setText(QApplication::translate("PSNUC_ControlClass", "Run", nullptr));
        stopBtn->setText(QApplication::translate("PSNUC_ControlClass", "Stop", nullptr));
        exitBtn->setText(QApplication::translate("PSNUC_ControlClass", "Exit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PSNUC_ControlClass: public Ui_PSNUC_ControlClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PSNUC_CONTROL_H
