#include <string>
#include <fstream>
#include "laptop.h"
#include"ElectroniDevice.h"
#include<iostream>
using namespace std;
laptop::laptop() :keyboardsize(0.0), speakers(0){
}
laptop::laptop(int id, const string& name, const string& model, float price, float keyboardsize, int speakers) :
	ElectronicDevice(id, name, model, price), keyboardsize(keyboardsize), speakers(speakers) {}

laptop::~laptop() {

}
int laptop::getspeakers() {
	return speakers;
}
float laptop::getkeyboardsize() {
	return keyboardsize;
}
void laptop::setspeakers(int speakers) {
	this->speakers = speakers;
}
void laptop::setkeyboardsize(float keyboardsize) {
	this->keyboardsize = keyboardsize;
}
string laptop::toString() {
	return ElectronicDevice::toString() + "\nScreen Size" + to_string(keyboardsize) + "\nspeakers" + to_string(speakers);
}
void laptop::displayfromfile()
{
	ifstream inFile("laptop.txt");
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
void laptop::savetofile()
{
	ofstream outFile("laptop.txt", ios::app);
	if (!outFile)
	{
		cout << "Error: Cannot open file " << endl;
		return;
	}
	outFile << laptop::toString() << endl;
	outFile.close();
}
