#pragma once
#include "Editor_UI_API.h"
#include "Application/Layer.h"

class Editor_UI_API EditorUILayer : public Layer
{
	DEFINE_DERIVED_CLASS(EditorUILayer, Layer)

public:
	void OnInit() override;
	void OnShutDown() override;
};