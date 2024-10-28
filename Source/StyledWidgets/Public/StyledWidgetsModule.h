#pragma once

#include "Modules/ModuleManager.h"

class UStyledWidgetsSettings;

class STYLEDWIDGETS_API FStyledWidgetsModule : public IModuleInterface
{
public:
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};
