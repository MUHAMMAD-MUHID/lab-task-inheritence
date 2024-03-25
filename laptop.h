#pragma once
#ifndef laptop_H
#define laptop_H
#include"ElectroniDevice.h"
using namespace std;
class laptop :public ElectronicDevice
{
private:
	int speakers;
	float keyboardsize;
public:
	laptop();
	laptop(int id, const string& name, const string& model, float price, float keyboardsize ,int speakers );
	~laptop();
	int getspeakers();
	float getkeyboardsize();
	void setspeakers(int speakers);
	void setkeyboardsize(float keyboardsize);
	string toString();
	static void displayfromfile();
	void savetofile();
};
#endif
