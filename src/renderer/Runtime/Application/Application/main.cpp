
#include "Core/RendererApplication.h"
#include "Misc/GlobalCmdLine.h"

int main(int argc, char* argv[])
{
	GlobalCmdLine::Get().Init(argc, argv);
	RendererApplication App;
	App.Run();
	return 0;
}
