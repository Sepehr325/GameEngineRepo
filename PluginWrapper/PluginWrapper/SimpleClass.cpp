#include "SimpleClass.h"

int SimpleClass::SimpleFunction()
{
	return 0;
}


void SimpleClass::Load1() {
	std::ifstream myfile("unitytest.txt", std::ifstream::in);


	if (myfile.good()) {

		std::string x;
		std::string y;
		std::string z;

		getline(myfile, x);
		getline(myfile, y);
		getline(myfile, z);

		this->X = stof(x);
		this->Y = stof(y);
		this->Z = stof(z);
	}

}


void SimpleClass::Save1(float x, float y, float z) {
	std::string XString = std::to_string(x);
	std::string YString = std::to_string(y);
	std::string ZString = std::to_string(z);


	std::ofstream myfile;

	myfile.open("unitytest.txt");
	myfile.clear();
	if (myfile.is_open()) {
		myfile << XString << std::endl;
		myfile << YString << std::endl;
		myfile << ZString << std::endl;
	}
	myfile.close();
	
}




float SimpleClass::GetX()
{
	return this->X;
}

float SimpleClass::GetY()
{
	return this->Y;
}

float SimpleClass::GetZ()
{
	return this->Z;
}


