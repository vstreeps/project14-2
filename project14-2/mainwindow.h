#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include <QLabel>

QT_BEGIN_NAMESPACE
class QLabel;
QT_END_NAMESPACE
class MainWindow : public QMainWindow {
	Q_OBJECT
	public:
		MainWindow();
		
	protected:
		void mousePressEvent(QMouseEvent *event);
		void paintEvent(QPaintEvent *event);
		
	private:
		int x, y, xGlobal, yGlobal;
		int leftButton1, topButton1, widthButton1, heightButton1;
		QLabel *label;
};
#endif
