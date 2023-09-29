#include <iostream>

using namespace std; // Add the namespace std declaration

class Box {
private:
    double length;
    double width;
    double height;

public:
    // Constructors
    Box() {
        length = 0.0;
        width = 0.0;
        height = 0.0;
    }

    Box(double l, double w, double h) {
        length = l;
        width = w;
        height = h;
    }

    // Calculate the volume of the box
    double calculateVolume() {
        return length * width * height;
    }

    // Setters
    void setLength(double l) {
        length = l;
    }

    void setWidth(double w) {
        width = w;
    }

    void setHeight(double h) {
        height = h;
    }

    // Getters
    double getLength() {
        return length;
    }

    double getWidth() {
        return width;
    }

    double getHeight() {
        return height;
    }
};

int main() {
    int choice;
    double length, width, height;

    // Initialize a default box
    Box myBox;

    do {
        cout << "Menu:" << endl;
        cout << "1. Set dimensions of the box" << endl;
        cout << "2. Calculate the volume" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter length: ";
                cin >> length;
                cout << "Enter width: ";
                cin >> width;
                cout << "Enter height: ";
                cin >> height;
                myBox.setLength(length);
                myBox.setWidth(width);
                myBox.setHeight(height);
                break;
            case 2:
                cout << "Volume of the box is: " << myBox.calculateVolume() << endl;
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
