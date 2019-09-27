#pragma once
#include "PluginSettings.h"
#include <iostream>
#include <fstream>
#include <string>
#include <ostream>

class PLUGIN_API SimpleClass
{
public:
	int SimpleFunction();
	void Load1();
	void Save1(float x, float y, float z);
	
	float GetX();
	float GetY();
	float GetZ();
	float X;
	float Y;
	float Z;
	
};