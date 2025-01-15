// Area and Perimeter of a Rectangle
// version 0.1.0
// @Iustin Desrobitu

#include <iostream>

using namespace std;

double areaCalculator(double width, double height)
{
    double area = width * height;
    return area;
}

double perimeterCalculator(double width, double height)
{
    double perimeter = (width + height) * 2;
    return perimeter;
}

int main()
{
    double height;
    double width;
    double area;
    double perimeter;

    cout << "This program find the Area and Perimeter of a Rectangle" << endl;
    cout << "Insert the Width(cm): ";
    cin >> width;
    cout << "Insert the height(cm): ";
    cin >> height;

    area = areaCalculator(width, height);
    perimeter = perimeterCalculator(width, height);

    cout << "The Area of your rectangle is: " << area << " cm" << endl;
    cout << "The Perimeter if your rectangle is: " << perimeter << " cm" << endl;

    return 0;
}
