#pragma once
#include "PluginSettings.h"
#include "SimpleClass.h"
#ifdef __cplusplus
extern "C"
{
#endif
	// Put your functions here
	PLUGIN_API int SimpleFunction();

	PLUGIN_API void Load2();
	PLUGIN_API void Save2(float x, float y, float z);
	PLUGIN_API float GetX();
	PLUGIN_API float GetY();
	PLUGIN_API float GetZ();
#ifdef __cplusplus
}
#endif