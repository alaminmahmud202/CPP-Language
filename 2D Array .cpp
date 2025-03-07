#include <iostream>
using namespace std;

class darray {
public:
    void print();
};

void darray::print() {
    int marks[3][5] = {
        {10, 15, 20, 25, 30},
        {35, 40, 45, 50, 55},
        {60, 65, 70, 75, 80}
    };

    // Taking input from the user
    cout << "Enter values for the 2D array:\n";
    for (int row = 0; row < 3; row++) {
        for (int col = 0; col < 5; col++) {
            cout << "marks[" << row << "][" << col << "] = ";
            cin >> marks[row][col];
        }
        cout << endl;
    }

    // Printing the array
    cout << "The 2D array is:\n";
    for (int row = 0; row < 3; row++) {  // Changed limit to `row < 3`
        for (int col = 0; col < 5; col++) {
            cout << marks[row][col] << " ";
        }
        cout << endl;
    }
}

int main() {
    darray obj;
    obj.print();
    return 0;
}
