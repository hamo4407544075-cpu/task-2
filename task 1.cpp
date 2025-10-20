#include <iostream>
using namespace std;
int main()
{
    double PI = 3.14159;
    double r;
    double h;
    double v;
    cout << "Enter radius" << endl;
    cin >> r;
    cout << "Enter height" << endl;
    cin >> h;
    v = PI * pow(r, 2) * h;
    cout << "The volume of the cylinder is" << endl;
    cout << v << endl;
    cout << "Thank you!" << endl;
}