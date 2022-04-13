#pragma once
#include "Engine_Core_API.h"
#include "Application/Application.h"

class Engine_Core_API RendererApplication : public Application
{
protected:
	void Init() override;
	void Uninit() override;
	bool ShouldQuit() override;
};