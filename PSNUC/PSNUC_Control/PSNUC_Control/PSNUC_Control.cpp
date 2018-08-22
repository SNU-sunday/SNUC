#include "PSNUC_Control.h"
#include <QDesktopServices>
#include <QUrl>
#include <QDatetime>
#include <QMessageBox>


PSNUC_Control::PSNUC_Control(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	ui.versionLabel->setText(version);
	timer = new QTimer(this);
	connect(timer, SIGNAL(timeout()), this, SLOT(system_time_update()));
//	connect(ui.exitBtn, SIGNAL(clicked()), this, SLOT(quit()));
	timer->start(100);
}

void PSNUC_Control::on_exitBtn_clicked()
{
	close();
}

void PSNUC_Control::on_openurlBtn_clicked()
{
	QString link = "https://github.com/SNU-sunday/SNUC/tree/PSNUC_Qt";
	QDesktopServices::openUrl(QUrl(link));
}

void PSNUC_Control::on_helpBtn_clicked()
{
	QString link = "https://github.com/SNU-sunday/SNUC/tree/PSNUC_Qt";
	QDesktopServices::openUrl(QUrl(link));
}

void PSNUC_Control::system_time_update()
{
	QString stimeText = "System Time : ";
	QString utnull = "              ";
	QString kst = " KST";
	QString UT = " UT";
	QDateTime sysTime = QDateTime::currentDateTime();
	QDateTime sysTimeUT = QDateTime::currentDateTimeUtc();
	QString systimeText = stimeText + sysTime.toString("yyyy/MM/dd hh:mm:ss") + kst;
	QString systimeTextUt = utnull + sysTimeUT.toString("yyyy/MM/dd hh:mm:ss") + UT;
	ui.systimeLabel->setText(systimeText);
	ui.sysTimeUTLabel->setText(systimeTextUt);
}

void PSNUC_Control::on_runBtn_clicked()
{
	// void				about
	// void				aboutQt
	// StandardButton	critical
	// StandardButton	information
	// StandardButton	question
	// StandardButton	warning
	if (!allConnection) {
		QMessageBox::critical(this, "Run Error", "Fatal Error : The motors and encoder are not connected!");
	} 
	else {
		QMessageBox::StandardButton runQuestionReply = QMessageBox::question(this,
							"Run", "Do you want to run the PSNUC?",
							QMessageBox::Yes | QMessageBox::No);
	}
}

void PSNUC_Control::on_stopBtn_clicked()
{
	if (!allConnection) {
		QMessageBox::critical(this, "Stop Error", "Fatal Error : The motors and encoder are not connected!");
	}
}

void PSNUC_Control::on_goBtn_clicked()
{
	if (!allConnection) {
		QMessageBox::critical(this, "Go Error", "Fatal Error : The motors and encoder are not connected!");
	}
	else {
		QMessageBox::StandardButton runQuestionReply = QMessageBox::question(this,
			"Go", "Do you want to run the PSNUC?",
			QMessageBox::Yes | QMessageBox::No);
	}
}

void PSNUC_Control::on_go2homeBtn_clicked()
{
	if (!allConnection) {
		QMessageBox::critical(this, "Go to Home Error", "Fatal Error : The motors and encoder are not connected!");
	}
	else {
		
	}
}

void PSNUC_Control::on_set2homeBtn_clicked()
{
	if (!allConnection) {
		QMessageBox::critical(this, "Set to Home Error", "Fatal Error : The motors and encoder are not connected!");
	}
	else {

	}
}

void PSNUC_Control::on_showplotBtn_clicked()
{
	plotScreen = new ViewPlotScreen();
	plotScreen->show();
}

void PSNUC_Control::on_setddBtn_clicked()
{
	setDDScreen = new setDDscreen();
	setDDScreen->show();
}

void PSNUC_Control::on_setservoBtn_clicked()
{
	setServoScreen = new setServoscreen();
	setServoScreen->show();
}