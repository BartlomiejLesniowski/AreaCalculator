#include <iostream>

using namespace std;

const double PI = 3.14;

void initMenuBox();
int menuDecision(int);
double circleArea(double);
double squareArea(double);
double rectangleArea(double, double);
double triangleArea(double, double);

int main()
{

    system("pause");
}

void initMenuBox()
{
    cout << "Please choose figure: " << endl;
    cout << "1. Circle "<< endl;
    cout << "2. Square "<< endl;
    cout << "3. Rectangle "<< endl;
    cout << "4. Triangle "<< endl;
}

int menuDecision(int decision)
{
    double r, a, b, h;
    switch (decision)
    {
    case 1:
        cout << "Please enter the circle radius: " << endl;
        cin >> r;
        circleArea(r);
        break;
    case 2:
        cout << "Please enter side of the square: " << endl;
        cin >> a;
        squareArea(a);

    case 3:
        cout << "Please enter width and height of the rectangle: " << endl;
        cin >> a >> b;
        rectangleArea(a,b);
    case 4:
        cout << "Enter the base and height of the triangle: " << endl;
        cin >> a >> h;
        triangleArea(a, h);
    default:
        cout << "Incorrect option!" << endl;
        break;
    }
}

double circleArea(double r)
{
    double result = PI * r * r;

    cout << "The area of the circle is equal: " << result << endl;

    return result;
}

double squareArea(double a)
{
    double result = a * a;

    cout << "The area of the square is equal: " << result << endl;

    return result;
}

double rectangleArea(double a, double b)
{
    double result = a * b;

    cout << "The area of the rectangle is equal: " << result << endl;

    return result;
}

double squareArea(double a, double h)
{
    double result = 0.5 * a * h;

    cout << "The area of the triangle is equal: " << result << endl;

    return result;
}