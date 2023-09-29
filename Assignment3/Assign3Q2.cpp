#include <iostream>
using namespace std;

class Cylinder {
private:
    double radius;
    double height;

public:
  
    Cylinder() : radius(0.0), height(0.0) {}

    Cylinder(double r, double h) : radius(r), height(h) {}

  
    void setRadius(double r) {    		  // Setters
        radius = r;
    }

    void setHeight(double h) {
        height = h;
    }

    
    double getRadius() {			// Getters
        return radius;
    }

    double getHeight() {
        return height;
    }

    
    double getVolume() {
        return 3.14 * radius * radius * height;
    }

  
    void printVolume() {
        cout << "Volume of the cylinder is: " << getVolume() << endl;
    }
};


int displayMenu() {
    int choice;
    cout << "Menu:" << endl;
    cout << "1. Set radius and height of the cylinder" << endl;
    cout << "2. Calculate and print volume" << endl;
    cout << "3. Exit" << endl;
    cout << "Enter your choice: ";
    cin >> choice;
    return choice;
}

int main() {
    Cylinder myCylinder;
    int choice;
    double radius, height;

    do {
        choice = displayMenu();

        switch (choice) {
            case 1:
                cout << "Enter radius: ";
                cin >> radius;
                myCylinder.setRadius(radius);
                cout << "Enter height: ";
                cin >> height;
                myCylinder.setHeight(height);
                break;
            case 2:
                myCylinder.printVolume();
                break;
            case 3:
                cout << "Exiting program." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 3);

    return 0;
}
