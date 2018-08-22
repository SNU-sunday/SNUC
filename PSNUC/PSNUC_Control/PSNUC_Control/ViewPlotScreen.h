#pragma once

#include <QWidget>
#include "GeneratedFiles/ui_ViewPlotScreen.h"

class ViewPlotScreen : public QWidget
{
	Q_OBJECT

public:
	ViewPlotScreen(QWidget *parent = Q_NULLPTR);
	~ViewPlotScreen();

private:
	Ui::ViewPlotScreen *ui;
};
