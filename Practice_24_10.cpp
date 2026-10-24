#include <iostream>
#include "Figure.h"

using namespace std;

int main()
{
    int choice;

    cout << "Choose a figure:" << endl;
    cout << "1. Rectangle" << endl;
    cout << "2. Circle" << endl;
    cout << "3. Triangle" << endl;
    cout << "Your choice: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
    {
        double width, height;

        cout << "Enter width: ";
        cin >> width;

        cout << "Enter height: ";
        cin >> height;

        Rectangle rectangle(width, height);
        cout << "Area: " << rectangle.GetArea() << endl;
        break;
    }

    case 2:
    {
        double radius;

        cout << "Enter radius: ";
        cin >> radius;

        Circle circle(radius);
        cout << "Area: " << circle.GetArea() << endl;
        break;
    }

    case 3:
    {
        double b, height;

        cout << "Enter base:";
        cin >> b;

        cout << "Enter height";
        cin >> height;

        Triangle triangle(b, height);
        cout << "Area: " << triangle.GetArea() << endl;
        break;
    }

    default:
        cout << "Invalid choice!" << endl;
    }

    return 0;
}