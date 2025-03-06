#include<iostream>
using namespace std;
int main() {
    int marks1[100] = {40, 45, 50, 55, 60, 65};
    cout << "Marks in the first array: ";
    for(int i = 0; i < 6; i++) {  
        cout << marks1[i] << " ";
    }
    cout << endl;
    int marks2[100] = {2, 4, 5, 6, 8};
    cout << "Marks in the second array: ";
    for(int i = 0; i < 5; i++) { 
        cout << marks2[i] << " ";
    }
    cout << endl; 

    return 0;
}
