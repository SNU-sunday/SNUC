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
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PSNUC_ControlClass
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_16;
    QVBoxLayout *verticalLayout_6;
    QVBoxLayout *verticalLayout;
    QLabel *systimeLabel;
    QLabel *sysTimeUTLabel;
    QFrame *line_6;
    QHBoxLayout *horizontalLayout_27;
    QVBoxLayout *verticalLayout_13;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_17;
    QLabel *connectionLabel;
    QPushButton *connectddBtn;
    QPushButton *connectservoBtn;
    QPushButton *connectallBtn;
    QFrame *line_9;
    QVBoxLayout *verticalLayout_15;
    QLabel *setLabel;
    QPushButton *setddBtn;
    QPushButton *setservoBtn;
    QFrame *line_8;
    QVBoxLayout *verticalLayout_7;
    QLabel *controlLabel;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_8;
    QPushButton *go2homeBtn;
    QPushButton *set2homeBtn;
    QSpacerItem *horizontalSpacer_2;
    QFrame *line_10;
    QFormLayout *formLayout_2;
    QLabel *angleLabel;
    QLineEdit *agleLineEdit;
    QLabel *positionLabel;
    QLineEdit *positionLineEdit;
    QPushButton *goBtn;
    QFrame *line_7;
    QLabel *progressLabel;
    QProgressBar *progressBar;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QFrame *line;
    QVBoxLayout *verticalLayout_12;
    QVBoxLayout *verticalLayout_11;
    QLabel *viewLabel;
    QPushButton *showplotBtn;
    QSpacerItem *verticalSpacer;
    QFrame *line_3;
    QVBoxLayout *verticalLayout_3;
    QLabel *statusLabel;
    QSpacerItem *verticalSpacer_2;
    QFrame *line_4;
    QVBoxLayout *verticalLayout_2;
    QLabel *currentsettingLabel;
    QSpacerItem *verticalSpacer_3;
    QFrame *line_5;
    QVBoxLayout *verticalLayout_10;
    QLabel *informationLabel;
    QLabel *versionLabel;
    QPushButton *openurlBtn;
    QLabel *developerLabel;
    QFrame *line_2;
    QHBoxLayout *horizontalLayout_13;
    QPushButton *helpBtn;
    QSpacerItem *horizontalSpacer;
    QPushButton *runBtn;
    QPushButton *stopBtn;
    QPushButton *exitBtn;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;

    void setupUi(QMainWindow *PSNUC_ControlClass)
    {
        if (PSNUC_ControlClass->objectName().isEmpty())
            PSNUC_ControlClass->setObjectName(QStringLiteral("PSNUC_ControlClass"));
        PSNUC_ControlClass->resize(475, 700);
        centralWidget = new QWidget(PSNUC_ControlClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout_16 = new QVBoxLayout(centralWidget);
        verticalLayout_16->setSpacing(6);
        verticalLayout_16->setContentsMargins(11, 11, 11, 11);
        verticalLayout_16->setObjectName(QStringLiteral("verticalLayout_16"));
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        systimeLabel = new QLabel(centralWidget);
        systimeLabel->setObjectName(QStringLiteral("systimeLabel"));
        QFont font;
        font.setFamily(QStringLiteral("AcadEref"));
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        systimeLabel->setFont(font);
        systimeLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        verticalLayout->addWidget(systimeLabel);

        sysTimeUTLabel = new QLabel(centralWidget);
        sysTimeUTLabel->setObjectName(QStringLiteral("sysTimeUTLabel"));
        sysTimeUTLabel->setFont(font);
        sysTimeUTLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        verticalLayout->addWidget(sysTimeUTLabel);


        verticalLayout_6->addLayout(verticalLayout);

        line_6 = new QFrame(centralWidget);
        line_6->setObjectName(QStringLiteral("line_6"));
        line_6->setFrameShape(QFrame::HLine);
        line_6->setFrameShadow(QFrame::Sunken);

        verticalLayout_6->addWidget(line_6);

        horizontalLayout_27 = new QHBoxLayout();
        horizontalLayout_27->setSpacing(6);
        horizontalLayout_27->setObjectName(QStringLiteral("horizontalLayout_27"));
        verticalLayout_13 = new QVBoxLayout();
        verticalLayout_13->setSpacing(6);
        verticalLayout_13->setObjectName(QStringLiteral("verticalLayout_13"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        verticalLayout_17 = new QVBoxLayout();
        verticalLayout_17->setSpacing(6);
        verticalLayout_17->setObjectName(QStringLiteral("verticalLayout_17"));
        connectionLabel = new QLabel(centralWidget);
        connectionLabel->setObjectName(QStringLiteral("connectionLabel"));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        connectionLabel->setFont(font1);
        connectionLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        verticalLayout_17->addWidget(connectionLabel);

        connectddBtn = new QPushButton(centralWidget);
        connectddBtn->setObjectName(QStringLiteral("connectddBtn"));

        verticalLayout_17->addWidget(connectddBtn);

        connectservoBtn = new QPushButton(centralWidget);
        connectservoBtn->setObjectName(QStringLiteral("connectservoBtn"));

        verticalLayout_17->addWidget(connectservoBtn);

        connectallBtn = new QPushButton(centralWidget);
        connectallBtn->setObjectName(QStringLiteral("connectallBtn"));

        verticalLayout_17->addWidget(connectallBtn);


        horizontalLayout_5->addLayout(verticalLayout_17);

        line_9 = new QFrame(centralWidget);
        line_9->setObjectName(QStringLiteral("line_9"));
        line_9->setFrameShape(QFrame::VLine);
        line_9->setFrameShadow(QFrame::Sunken);

        horizontalLayout_5->addWidget(line_9);

        verticalLayout_15 = new QVBoxLayout();
        verticalLayout_15->setSpacing(6);
        verticalLayout_15->setObjectName(QStringLiteral("verticalLayout_15"));
        setLabel = new QLabel(centralWidget);
        setLabel->setObjectName(QStringLiteral("setLabel"));
        setLabel->setFont(font1);
        setLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        verticalLayout_15->addWidget(setLabel);

        setddBtn = new QPushButton(centralWidget);
        setddBtn->setObjectName(QStringLiteral("setddBtn"));

        verticalLayout_15->addWidget(setddBtn);

        setservoBtn = new QPushButton(centralWidget);
        setservoBtn->setObjectName(QStringLiteral("setservoBtn"));

        verticalLayout_15->addWidget(setservoBtn);


        horizontalLayout_5->addLayout(verticalLayout_15);


        verticalLayout_13->addLayout(horizontalLayout_5);

        line_8 = new QFrame(centralWidget);
        line_8->setObjectName(QStringLiteral("line_8"));
        line_8->setFrameShape(QFrame::HLine);
        line_8->setFrameShadow(QFrame::Sunken);

        verticalLayout_13->addWidget(line_8);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        controlLabel = new QLabel(centralWidget);
        controlLabel->setObjectName(QStringLiteral("controlLabel"));
        controlLabel->setFont(font1);

        verticalLayout_7->addWidget(controlLabel);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        verticalLayout_8->setSizeConstraint(QLayout::SetMaximumSize);
        go2homeBtn = new QPushButton(centralWidget);
        go2homeBtn->setObjectName(QStringLiteral("go2homeBtn"));

        verticalLayout_8->addWidget(go2homeBtn);

        set2homeBtn = new QPushButton(centralWidget);
        set2homeBtn->setObjectName(QStringLiteral("set2homeBtn"));

        verticalLayout_8->addWidget(set2homeBtn);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout_8->addItem(horizontalSpacer_2);


        horizontalLayout_4->addLayout(verticalLayout_8);

        line_10 = new QFrame(centralWidget);
        line_10->setObjectName(QStringLiteral("line_10"));
        line_10->setFrameShape(QFrame::VLine);
        line_10->setFrameShadow(QFrame::Sunken);

        horizontalLayout_4->addWidget(line_10);

        formLayout_2 = new QFormLayout();
        formLayout_2->setSpacing(6);
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        angleLabel = new QLabel(centralWidget);
        angleLabel->setObjectName(QStringLiteral("angleLabel"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, angleLabel);

        agleLineEdit = new QLineEdit(centralWidget);
        agleLineEdit->setObjectName(QStringLiteral("agleLineEdit"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(agleLineEdit->sizePolicy().hasHeightForWidth());
        agleLineEdit->setSizePolicy(sizePolicy);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, agleLineEdit);

        positionLabel = new QLabel(centralWidget);
        positionLabel->setObjectName(QStringLiteral("positionLabel"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, positionLabel);

        positionLineEdit = new QLineEdit(centralWidget);
        positionLineEdit->setObjectName(QStringLiteral("positionLineEdit"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, positionLineEdit);

        goBtn = new QPushButton(centralWidget);
        goBtn->setObjectName(QStringLiteral("goBtn"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(goBtn->sizePolicy().hasHeightForWidth());
        goBtn->setSizePolicy(sizePolicy1);

        formLayout_2->setWidget(2, QFormLayout::FieldRole, goBtn);


        horizontalLayout_4->addLayout(formLayout_2);


        verticalLayout_7->addLayout(horizontalLayout_4);


        verticalLayout_13->addLayout(verticalLayout_7);

        line_7 = new QFrame(centralWidget);
        line_7->setObjectName(QStringLiteral("line_7"));
        line_7->setFrameShape(QFrame::HLine);
        line_7->setFrameShadow(QFrame::Sunken);

        verticalLayout_13->addWidget(line_7);

        progressLabel = new QLabel(centralWidget);
        progressLabel->setObjectName(QStringLiteral("progressLabel"));
        progressLabel->setFont(font1);

        verticalLayout_13->addWidget(progressLabel);

        progressBar = new QProgressBar(centralWidget);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        sizePolicy.setHeightForWidth(progressBar->sizePolicy().hasHeightForWidth());
        progressBar->setSizePolicy(sizePolicy);
        progressBar->setValue(24);

        verticalLayout_13->addWidget(progressBar);

        scrollArea = new QScrollArea(centralWidget);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 296, 185));
        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_13->addWidget(scrollArea);


        horizontalLayout_27->addLayout(verticalLayout_13);

        line = new QFrame(centralWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout_27->addWidget(line);

        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setSpacing(6);
        verticalLayout_12->setObjectName(QStringLiteral("verticalLayout_12"));
        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setSpacing(6);
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        viewLabel = new QLabel(centralWidget);
        viewLabel->setObjectName(QStringLiteral("viewLabel"));
        viewLabel->setFont(font1);
        viewLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        verticalLayout_11->addWidget(viewLabel);

        showplotBtn = new QPushButton(centralWidget);
        showplotBtn->setObjectName(QStringLiteral("showplotBtn"));

        verticalLayout_11->addWidget(showplotBtn);


        verticalLayout_12->addLayout(verticalLayout_11);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_12->addItem(verticalSpacer);

        line_3 = new QFrame(centralWidget);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        verticalLayout_12->addWidget(line_3);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        statusLabel = new QLabel(centralWidget);
        statusLabel->setObjectName(QStringLiteral("statusLabel"));
        statusLabel->setFont(font1);
        statusLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        verticalLayout_3->addWidget(statusLabel);


        verticalLayout_12->addLayout(verticalLayout_3);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_12->addItem(verticalSpacer_2);

        line_4 = new QFrame(centralWidget);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        verticalLayout_12->addWidget(line_4);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        currentsettingLabel = new QLabel(centralWidget);
        currentsettingLabel->setObjectName(QStringLiteral("currentsettingLabel"));
        currentsettingLabel->setFont(font1);
        currentsettingLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        verticalLayout_2->addWidget(currentsettingLabel);


        verticalLayout_12->addLayout(verticalLayout_2);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_12->addItem(verticalSpacer_3);

        line_5 = new QFrame(centralWidget);
        line_5->setObjectName(QStringLiteral("line_5"));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);

        verticalLayout_12->addWidget(line_5);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setSpacing(6);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        informationLabel = new QLabel(centralWidget);
        informationLabel->setObjectName(QStringLiteral("informationLabel"));
        informationLabel->setFont(font1);
        informationLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        verticalLayout_10->addWidget(informationLabel);

        versionLabel = new QLabel(centralWidget);
        versionLabel->setObjectName(QStringLiteral("versionLabel"));
        versionLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_10->addWidget(versionLabel);

        openurlBtn = new QPushButton(centralWidget);
        openurlBtn->setObjectName(QStringLiteral("openurlBtn"));
        openurlBtn->setIconSize(QSize(16, 16));

        verticalLayout_10->addWidget(openurlBtn);

        developerLabel = new QLabel(centralWidget);
        developerLabel->setObjectName(QStringLiteral("developerLabel"));
        developerLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_10->addWidget(developerLabel);


        verticalLayout_12->addLayout(verticalLayout_10);


        horizontalLayout_27->addLayout(verticalLayout_12);


        verticalLayout_6->addLayout(horizontalLayout_27);

        line_2 = new QFrame(centralWidget);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout_6->addWidget(line_2);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        helpBtn = new QPushButton(centralWidget);
        helpBtn->setObjectName(QStringLiteral("helpBtn"));

        horizontalLayout_13->addWidget(helpBtn);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer);

        runBtn = new QPushButton(centralWidget);
        runBtn->setObjectName(QStringLiteral("runBtn"));

        horizontalLayout_13->addWidget(runBtn);

        stopBtn = new QPushButton(centralWidget);
        stopBtn->setObjectName(QStringLiteral("stopBtn"));

        horizontalLayout_13->addWidget(stopBtn);

        exitBtn = new QPushButton(centralWidget);
        exitBtn->setObjectName(QStringLiteral("exitBtn"));

        horizontalLayout_13->addWidget(exitBtn);


        verticalLayout_6->addLayout(horizontalLayout_13);


        verticalLayout_16->addLayout(verticalLayout_6);

        PSNUC_ControlClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(PSNUC_ControlClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 475, 21));
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
        systimeLabel->setText(QString());
        sysTimeUTLabel->setText(QString());
        connectionLabel->setText(QApplication::translate("PSNUC_ControlClass", "Connection", nullptr));
        connectddBtn->setText(QApplication::translate("PSNUC_ControlClass", "Connect DD Motor", nullptr));
        connectservoBtn->setText(QApplication::translate("PSNUC_ControlClass", "Connect Servo Motor", nullptr));
        connectallBtn->setText(QApplication::translate("PSNUC_ControlClass", "Connect All", nullptr));
        setLabel->setText(QApplication::translate("PSNUC_ControlClass", "Setting", nullptr));
        setddBtn->setText(QApplication::translate("PSNUC_ControlClass", "Set DD motor", nullptr));
        setservoBtn->setText(QApplication::translate("PSNUC_ControlClass", "Set Servo Motor", nullptr));
        controlLabel->setText(QApplication::translate("PSNUC_ControlClass", "Control", nullptr));
        go2homeBtn->setText(QApplication::translate("PSNUC_ControlClass", "Go to Home", nullptr));
        set2homeBtn->setText(QApplication::translate("PSNUC_ControlClass", "Set to Home", nullptr));
        angleLabel->setText(QApplication::translate("PSNUC_ControlClass", "Rotation Angle (deg)", nullptr));
        positionLabel->setText(QApplication::translate("PSNUC_ControlClass", "Slope Position (mm)", nullptr));
        goBtn->setText(QApplication::translate("PSNUC_ControlClass", "Go", nullptr));
        progressLabel->setText(QApplication::translate("PSNUC_ControlClass", "Progress", nullptr));
        viewLabel->setText(QApplication::translate("PSNUC_ControlClass", "View", nullptr));
        showplotBtn->setText(QApplication::translate("PSNUC_ControlClass", "Show Plot", nullptr));
        statusLabel->setText(QApplication::translate("PSNUC_ControlClass", "Status", nullptr));
        currentsettingLabel->setText(QApplication::translate("PSNUC_ControlClass", "Current Setting", nullptr));
        informationLabel->setText(QApplication::translate("PSNUC_ControlClass", "Information", nullptr));
        versionLabel->setText(QApplication::translate("PSNUC_ControlClass", "Version : v 0.0.2", nullptr));
        openurlBtn->setText(QApplication::translate("PSNUC_ControlClass", "Open the source code", nullptr));
#ifndef QT_NO_SHORTCUT
        openurlBtn->setShortcut(QString());
#endif // QT_NO_SHORTCUT
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
