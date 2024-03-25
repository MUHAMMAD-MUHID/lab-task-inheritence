#ifndef ELECTRONICDEVICE_H
#define ELECTRONICDEVICE_H
#include <string>
#include <fstream>
using namespace std;
class ElectronicDevice {
protected:
	int id;
	string name;
	string model;
	float price;
public:
	ElectronicDevice();
	ElectronicDevice(int id, const string& name, const string& model, float price);
	ElectronicDevice(const ElectronicDevice& other);
	~ElectronicDevice();
	// Getter methods
	int getId() const;
	string getName() const;
	string getModel() const;
	float getPrice() const;
	// Setter methods
	void setId(int id);
	void setName(const string& name);
	void setModel(const string& model);
	void setPrice(float price);
	// Display device details
	string toString() const;
	// File handling
	void saveToFile() const;
	static void displayFromFile();
};
#endif