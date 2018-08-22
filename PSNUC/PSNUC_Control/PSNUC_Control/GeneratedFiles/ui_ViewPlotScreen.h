/********************************************************************************
** Form generated from reading UI file 'ViewPlotScreen.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWPLOTSCREEN_H
#define UI_VIEWPLOTSCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ViewPlotScreen
{
public:

    void setupUi(QWidget *ViewPlotScreen)
    {
        if (ViewPlotScreen->objectName().isEmpty())
            ViewPlotScreen->setObjectName(QStringLiteral("ViewPlotScreen"));
        ViewPlotScreen->resize(400, 300);

        retranslateUi(ViewPlotScreen);

        QMetaObject::connectSlotsByName(ViewPlotScreen);
    } // setupUi

    void retranslateUi(QWidget *ViewPlotScreen)
    {
        ViewPlotScreen->setWindowTitle(QApplication::translate("ViewPlotScreen", "ViewPlotScreen", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ViewPlotScreen: public Ui_ViewPlotScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWPLOTSCREEN_H
