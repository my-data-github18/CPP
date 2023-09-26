#include <iostream>
using namespace std;

class Address
{
private:
    string building;
    string street;
    string city;
    int pin;

public:
    Address()
    {   cout<< "Parameterless Constructor Executed." <<endl;
        this->building = "Savali";
        this->street = "Khomane ali";
        this->city = "Pune";
        this->pin = 412303;
    }

    Address(string building, string street, string city, int pin)
    {
        cout<< "Parameterized Constructor Executed." <<endl;
        this->building = building;
        this->street = street;
        this->city = city;
        this->pin = pin;
    }

    void accept()
    {
        cout << "Enter Building No./Name: ";
        cin >> this->building;
        cout << "Enter Street Name: ";
        cin >> this->street;
        cout << "Enter City Name: ";
        cin >> this->city;
        cout << "Enter Pincode: ";
        cin >> this->pin;
        cout << "Data Successfully Added..." << endl
             << endl;
    }
    void display()
    {
        cout << "Building: " << getbuilding() << endl;
        cout << "Street: " << getstreet() << endl;
        cout << "City: " << getcity() << endl;
        cout << "Pin: " << getpin() << endl;
    }

    // Inspectors -> getters
    string getbuilding()
    {
        return this->building;
    }
    string getstreet()
    {
        return this->street;
    }
    string getcity()
    {
        return this->city;
    }
    int getpin()
    {
        return this->pin;
    }

    // Mutators -> setters
    void setbuilding(string building)
    {
        cout << "Enter Building No./Name: ";
        cin >> this->building;
    }

    void setstreet(string street)
    {
        cout << "Enter Street Name: ";
        cin >> this->street;
    }

    void setcity(string city)
    {
        cout << "Enter Street Name: ";
        cin >> this->street;
    }

    void setpin(int pin)
    {
        cout << "Enter Pincode: ";
        cin >> this->pin;
    }
};

int main()
{
    Address A1;
    A1.display();

    Address A2("Sunbeam", "Hinjawadi", "Pune", 654321);
    A2.display();

    Address A3;
    A3.accept();
    A3.display();

    cout<< "Biulding: "<< A3.getbuilding() <<endl;
    A3.setbuilding("Shanti Niketan");
    cout<< "Biulding: "<< A3.getbuilding() <<endl;

    cout<< "Street: "<< A3.getstreet() <<endl;
    A3.setstreet("Sadashiv Road");
    cout<< "Street: "<< A3.getstreet() <<endl;

    cout<< "City: "<< A3.getcity() <<endl;
    A3.setcity("Shingnapur");
    cout<< "City: "<< A3.getcity() <<endl;

    cout<< "Pincode: "<< A3.getpin() <<endl;
    A3.setpin(987321);
    cout<< "Pincode: "<< A3.getpin() <<endl;

    return 0;
}
