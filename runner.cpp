#include <iostream>
#include"ElectroniDevice.h"
#include"mobile.h"
#include"laptop.h"

using namespace std;

void menu_mobile();
void menu_electronics();
void menu_laptop();

int main()
{
    int userchoice;
    cout << "\n1-Mobile\n2-Electronics \n3.LAPTOP";
    cin >> userchoice;
    cout << "\n----------------------------";
    switch (userchoice)
    {
    case 1:
        cout << "\nMobile";
        menu_mobile();
        break;
    case 2:
        cout << "\nElectronics";
        menu_electronics();
        break;
    case 3:
        cout << "\nLAPTOP";
        menu_laptop();
        break;
    default:
        cout << "\nInvalid Option";
    }
}
void menu_mobile()
{
    char choice;
    int camera, id;
    string name, model;
    float screensize, price;
    while (true)
    {
        cout << "\nList of Electronics :";
        cout << "\nD-Display All Devices\nS-Store Data\nY-Exit\n ";
        cout << "\nEnter Choice:";
        cin >> choice;
        switch (choice)
        {
        case 'd':
            cout << "\nDisplay all values";
            mobile::displayFromFile();
            break;
        case 's':
            cout << "\nEnter ID : ";
            cin >> id;
            cout << "\nEnter Name : ";
            cin >> name;
            cout << "\nEnter Model : ";
            cin >> model;
            cout << "\nEnter Price : ";
            cin >> price;
            cout << "\nEnter ID : ";
            cin >> camera;
            cout << "\nEnter Name : ";
            cin >> screensize;
            {
                mobile m(id, name, model, price, screensize, camera);
                m.saveToFile();
                cout << "\nData Stored : ";
            }
            break;
        default:
            cout << "\nExting";
            exit(0);
            break;
        }
    }
}
void menu_electronics()
{
    char choice;
    int id;
    float price;
    string name, model;
    while (true)
    {
        cout << "\nList of Electronics :";
        cout << "\nD-Display All Devices\nS-Store Data\nY-Exit\n ";
        cout << "\nEnter Choice:";
        cin >> choice;
        switch (choice)
        {
        case 'd':
            cout << "\nDisplay all values";
            ElectronicDevice::displayFromFile();
            break;
        case 's':
            cout << "\nEnter ID : ";
            cin >> id;
            cout << "\nEnter Name : ";
            cin >> name;
            cout << "\nEnter Model : ";
            cin >> model;
            cout << "\nEnter Price : ";
            cin >> price;
            {
                ElectronicDevice e(id, name, model, price);
                e.saveToFile();
                cout << "\nData Stored : ";
            }
            break;
        default:
            cout << "\nExting";
            exit(0);
            break;
        }
    }
}
void menu_laptop()
{
    char choice;
    int id, speaker;
    float price, keyboradsize;
    string name, model;
    while (true)
    {
        cout << "\nList of Electronics :";
        cout << "\nD-Display All Devices\nS-Store Data\nY-Exit\n ";
        cout << "\nEnter Choice:";
        cin >> choice;
        switch (choice)
        {
        case 'D':
            cout << "\nDisplay all values";
            laptop::displayFromFile();
            break;
        case 'S':
            cout << "\nEnter ID : ";
            cin >> id;
            cout << "\nEnter Name : ";
            cin >> name;
            cout << "\nEnter Model : ";
            cin >> model;
            cout << "\nEnter Price : ";
            cin >> price;
            cout << "\nEnter keyboardsize : ";
            cin >> keyboradsize;
            cout << "\nEnter speaker : ";
            cin >> speaker;
            {
                laptop l(id, name, model, price, keyboradsize, speaker);
                l.saveToFile();
                cout << "\nData Stored : ";
            }
            break;
        default:
            cout << "\nExting";
            exit(0);
            break;
        }
    }
}

