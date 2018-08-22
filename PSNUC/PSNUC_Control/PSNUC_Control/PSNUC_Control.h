#pragma once

#include <QtWidgets/QMainWindow>
#include "GeneratedFiles/ui_PSNUC_Control.h"
#include <QTimer>
#include "ViewPlotScreen.h"
#include "setDDscreen.h"
#include "setServoscreen.h"

class PSNUC_Control : public QMainWindow
{
	Q_OBJECT

public:
	PSNUC_Control(QWidget *parent = Q_NULLPTR);

private slots:
	void on_exitBtn_clicked();
	void on_openurlBtn_clicked();
	void on_helpBtn_clicked();
	void system_time_update();
	void on_runBtn_clicked();
	void on_stopBtn_clicked();
	void on_goBtn_clicked();
	void on_go2homeBtn_clicked();
	void on_set2homeBtn_clicked();
	void on_showplotBtn_clicked();
	void on_setddBtn_clicked();
	void on_setservoBtn_clicked();

private:
	Ui::PSNUC_ControlClass ui;
	ViewPlotScreen *plotScreen;
	setDDscreen *setDDScreen;
	setServoscreen *setServoScreen;
	QTimer *timer;
	char version[17] = "Version : v0.0.2";
	bool allConnection = false;
};