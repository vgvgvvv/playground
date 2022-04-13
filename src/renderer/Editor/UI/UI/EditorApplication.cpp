#include "EditorApplication.h"
#include "Misc/GlobalCmdLine.h"
#include <QApplication>

void EditorApplication::Init()
{
	auto Argc = GlobalCmdLine::Get().GetArgc();
	auto Argv = GlobalCmdLine::Get().GetArgv();
	QApplication App(Argc, Argv);

	App.exec();
}

void EditorApplication::UnInit()
{
}
