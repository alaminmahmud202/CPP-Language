 // Trapezium area calculation
#include <iostream>
using namespace std;

int main() {

    double area, base, height, jugfol, sum;
    cout << "Enter the area, base, height: " << endl;
    cin >> area >> base >> height;

    jugfol = area + base;
    sum = (1.0 / 2) * jugfol * height; 
    
    cout << "Sum = " << sum << endl;4 6 2 

    return 0;
}
