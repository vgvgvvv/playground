//
// Created by 35207 on 2022/4/10 0010.
//

#pragma once

#include <QWidget>
#include <QLabel>

class DXWidget : public QWidget
{
	Q_OBJECT

public:

	DXWidget(QWidget* parent)
		: QWidget(parent)
	{
		auto label = new QLabel(this);
		label->setText("hello world");
	}
};




