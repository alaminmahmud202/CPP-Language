#include <iostream>
using namespace std;

int main() {

    // Celsius to Fahrenheit conversion
    double celsius, fahrenheit;
    cout << "Enter the Celsius temperature: ";
    cin >> celsius;
    fahrenheit = (1.8 * celsius) + 32;
    cout << "Fahrenheit: " << fahrenheit << endl;

    // Fahrenheit to Celsius conversion
    double fahrenheitInput, celsiusResult;
    cout << "Enter the Fahrenheit temperature: ";
    cin >> fahrenheitInput;
    celsiusResult = (fahrenheitInput - 32) / 1.8;  // Corrected formula

    cout << "Celsius: " << celsiusResult << endl;

    return 0;
}
