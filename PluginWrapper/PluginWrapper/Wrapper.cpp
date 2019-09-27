#include "Wrapper.h"
SimpleClass simpleClass;
int SimpleFunction()
{
	return simpleClass.SimpleFunction();
}

PLUGIN_API void Load2() {
	simpleClass.Load1();
}

PLUGIN_API void Save2(float x, float y, float z)
{
	simpleClass.Save1(x, y, z);
}

PLUGIN_API float GetX()
{
	return simpleClass.GetX();
}

PLUGIN_API float GetY()
{
	return simpleClass.GetY();
}

PLUGIN_API float GetZ()
{
	return simpleClass.GetZ();
}


