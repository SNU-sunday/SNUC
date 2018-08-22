/********************************************************************************
** Form generated from reading UI file 'setServoscreen.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETSERVOSCREEN_H
#define UI_SETSERVOSCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_setServoscreen
{
public:

    void setupUi(QWidget *setServoscreen)
    {
        if (setServoscreen->objectName().isEmpty())
            setServoscreen->setObjectName(QStringLiteral("setServoscreen"));
        setServoscreen->resize(400, 300);

        retranslateUi(setServoscreen);

        QMetaObject::connectSlotsByName(setServoscreen);
    } // setupUi

    void retranslateUi(QWidget *setServoscreen)
    {
        setServoscreen->setWindowTitle(QApplication::translate("setServoscreen", "setServoscreen", nullptr));
    } // retranslateUi

};

namespace Ui {
    class setServoscreen: public Ui_setServoscreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETSERVOSCREEN_H
