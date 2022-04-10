//
// Created by 35207 on 2022/4/10 0010.
//

#include "MainWindow.h"
#include "DXWidget.h"

MainWindow::MainWindow(QWidget *parent)
	: QMainWindow(parent)
{
	auto DX = new DXWidget(this);
	setCentralWidget(DX);
}
