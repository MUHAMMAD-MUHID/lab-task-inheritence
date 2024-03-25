#include <string>
#include <fstream>
#include "mobile.h"
#include"ElectroniDevice.h"
#include<iostream>
using namespace std;
mobile::mobile() :screensize(0.0), camera(0) {
}
mobile::mobile(int id, const string& name, const string& model, float price, float screensize, int camera) :
	ElectronicDevice(id, name, model, price), screensize(screensize), camera(camera) {}
mobile::mobile(mobile& m) {
	this->camera = m.camera;
	this->screensize = m.screensize;
}
mobile::~mobile() {

}
int mobile::getcamera() {
	return camera;
}
float mobile::getscreensize() {
	return screensize;
}
void mobile::setcamera(int camera) {
	this->camera = camera;
}
void mobile::setscreensize(float screensize) {
	this->screensize = screensize;
}
string mobile::toString() {
	return ElectronicDevice::toString() + "\nScreen Size" + to_string(screensize) + "\nCamera" + to_string(camera);
}
void mobile::displayfromfile()
{
	ifstream inFile("mobile.txt");
	if (!inFile)
	{
		cerr << "Error: Cannot open file " << endl;
		return;
	}
	string line;
	while (getline(inFile, line)) {
		cout << line << endl;
	}
	inFile.close();
}
void mobile::savetofile()
{
	ofstream outFile("mobile.txt", ios::app);
	if (!outFile)
	{
		cout << "Error: Cannot open file " << endl;
		return;
	}
	outFile << mobile::toString() << endl;
	outFile.close();
}
