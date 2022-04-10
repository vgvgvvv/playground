//
// Created by 35207 on 2022/4/10 0010.
//


#include <QApplication>
#include "Windows/MainWindow.h"

int main(int argc, char* argv[])
{
	QApplication App(argc, argv);

	MainWindow Windows;

	Windows.show();

	QApplication::exec();
	return 0;
}