#include "ElectroniDevice.h"
#include <iostream>
using namespace std;
// Constructors
ElectronicDevice::ElectronicDevice() : id(0), name(""), model(""), price(0.0) {}
ElectronicDevice::ElectronicDevice(int id, const string& name, const string& model, float price)
	: id(id), name(name), model(model), price(price) {
}
ElectronicDevice::ElectronicDevice(const ElectronicDevice& other)
	: id(other.id), name(other.name), model(other.model), price(other.price) {
}
// Destructor
ElectronicDevice::~ElectronicDevice() {}
// Getter methods
int ElectronicDevice::getId() const {
	return id;
}
string ElectronicDevice::getName() const {
	return name;
}
string ElectronicDevice::getModel() const {
	return model;
}
float ElectronicDevice::getPrice() const {
	return price;
}
// Setter methods
void ElectronicDevice::setId(int id) {
	this->id = id;
}
void ElectronicDevice::setName(const string& name) {
	this->name = name;
}
void ElectronicDevice::setModel(const string& model) {
	this->model = model;
}
void ElectronicDevice::setPrice(float price) {
	this->price = price;
}
// Display device details
string ElectronicDevice::toString() const {
	string details = "ID: " + to_string(id) + "\n";
	details += "Name: " + name + "\n";
	details += "Model: " + model + "\n";
	details += "Price: " + to_string(price) + "\n";
	return details;
}
// File handling for ElectronicDevice
void ElectronicDevice::saveToFile() const
{
	ofstream outFile("device.txt", ios::app);
	if (!outFile)
	{
		cerr << "Error: Cannot open file " << endl;
		return;
	}
	outFile << toString() << endl;
	outFile.close();
}
void ElectronicDevice::displayFromFile()
{
	ifstream inFile("device.txt");
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