/********************************************************************************
** Form generated from reading UI file 'setDDscreen.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETDDSCREEN_H
#define UI_SETDDSCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_setDDscreen
{
public:

    void setupUi(QWidget *setDDscreen)
    {
        if (setDDscreen->objectName().isEmpty())
            setDDscreen->setObjectName(QStringLiteral("setDDscreen"));
        setDDscreen->resize(400, 300);

        retranslateUi(setDDscreen);

        QMetaObject::connectSlotsByName(setDDscreen);
    } // setupUi

    void retranslateUi(QWidget *setDDscreen)
    {
        setDDscreen->setWindowTitle(QApplication::translate("setDDscreen", "setDDscreen", nullptr));
    } // retranslateUi

};

namespace Ui {
    class setDDscreen: public Ui_setDDscreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETDDSCREEN_H
