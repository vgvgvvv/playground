//
// Created by 35207 on 2022/4/10 0010.
//
#include "Windows.h"
#include <QApplication>

int main(int argc, char* argv[])
{
	QApplication App(argc, argv);

	Windows Window;

	Window.show();

	App.exec();

    return 0;
}