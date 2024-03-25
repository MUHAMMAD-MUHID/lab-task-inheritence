#ifndef MOBILE_H
#define MOBILE_H
#include"ElectroniDevice.h"
using namespace std;
class mobile :public ElectronicDevice
{
private:
	int camera;
	float screensize;
public:
	mobile();
	mobile(int id, const string& name, const string& model, float price, float screensize, int camera);
	mobile(mobile& m);
	~mobile();
	int getcamera();
	float getscreensize();
	void setcamera(int camera);
	void setscreensize(float screensize);
	string toString();
	static void displayfromfile();
	void savetofile();
};
#endif
