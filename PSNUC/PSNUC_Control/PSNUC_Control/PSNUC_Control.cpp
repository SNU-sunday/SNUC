#include "PSNUC_Control.h"

PSNUC_Control::PSNUC_Control(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	connect(ui.exitBtn, SIGNAL(clicked()), qApp, SLOT(quit()), Qt::QueuedConnection);
}
