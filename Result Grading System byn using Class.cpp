#include<iostream>
using namespace std;

class result {
public:
    void marks();
};

void result::marks() {
    int digit;
    cout << "Enter the marks: ";
    cin >> digit;
    
    // Using if-else to handle ranges for marks
    if (digit >= 80) {
        cout << "The result: A+" << endl;
    } else if (digit >= 70) {
        cout << "The result: A" << endl;
    } else if (digit >= 60) {
        cout << "The result: B+" << endl;
    } else if (digit >= 50) {
        cout << "The result: B" << endl;
    } else if (digit >= 40) {
        cout << "The result: C" << endl;
    } else {
        cout << "The result: Fail" << endl;
    }
}

int main() {
    result r;
    r.marks();  // Call the marks function to input marks and print the grade
    return 0;
}
