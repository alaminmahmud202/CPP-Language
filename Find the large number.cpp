#include<iostream>
using namespace std;

int main() {
    int num1, num2, num3;

    cout << "Enter the three numbers: " << endl;
    cin >> num1 >> num2 >> num3;

    if (num1 >= num2 && num1 >= num3) {  
        if (num1 == num2 || num1 == num3) {
            cout << "There are two or more equal numbers" << endl;
        } else {
            cout << "num1 is big" << endl;
        }
    }
    else if (num2 >= num1 && num2 >= num3) {  
        if (num2 == num1 || num2 == num3) {
            cout << "There are two or more equal numbers" << endl;
        } else {
            cout << "num2 is big" << endl;
        }
    }
    else if (num3 >= num1 && num3 >= num2) {
        if (num3 == num1 || num3 == num2) {
            cout << "There are two or more equal numbers" << endl;
        } else {
            cout << "num3 is big" << endl;
        }
    }
    return 0;
}
