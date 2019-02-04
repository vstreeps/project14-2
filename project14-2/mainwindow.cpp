#include <QtGui>
#include <QTimer>
#include "mainwindow.h"

MainWindow::MainWindow() {
	setWindowTitle(tr("My Button"));
	resize(500, 500);
	
	label = new QLabel(this);
	label->setGeometry(10, 10, 120, 20);
	label->setText( "No" );

	leftButton1 = 100;
	topButton1 = 100;
	widthButton1 = 300;
	heightButton1 = 150;

}

void MainWindow::mousePressEvent(QMouseEvent *event) {

	x = event->x();
	y = event->y();
	
	xGlobal = event->globalX();
	yGlobal = event->globalY();
	
	QString act;

	if( x >= leftButton1 && x <= (leftButton1 + widthButton1) && y >= topButton1 && y <= (topButton1 + heightButton1) )
		act = "Yes";
	else
		act = "No";

	label->setText("Clicked: " + act);

}

void MainWindow::paintEvent(QPaintEvent *) {

	QPainter p(this);
	p.setPen(QPen(Qt::green, 4, Qt::SolidLine, Qt::RoundCap));
	p.setBrush(QBrush(Qt::NoBrush));
	p.drawRect(leftButton1, topButton1, widthButton1, heightButton1);

}