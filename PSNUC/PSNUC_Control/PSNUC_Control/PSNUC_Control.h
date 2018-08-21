#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_PSNUC_Control.h"

class PSNUC_Control : public QMainWindow
{
	Q_OBJECT

public:
	PSNUC_Control(QWidget *parent = Q_NULLPTR);

private:
	Ui::PSNUC_ControlClass ui;
};
