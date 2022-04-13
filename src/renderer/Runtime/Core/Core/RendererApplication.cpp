#include "RendererApplication.h"

#include "UI/EditorUILayer.h"

void RendererApplication::Init()
{
	Application::Init();
	LayerManager.PushLayer(std::make_shared<EditorUILayer>());
}

void RendererApplication::Uninit()
{
	Application::Uninit();
}

bool RendererApplication::ShouldQuit()
{
	return Application::ShouldQuit();
}
