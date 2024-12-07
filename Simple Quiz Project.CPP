#include <iostream>
using namespace std;

class Quiz {
public:
    void display();
};

void Quiz::display() {
    char ans;
    int score = 0;
    cout << "Welcome to the C++ Quiz!" << endl;
     cout << "[per Question for 5 marks]" << endl;
    cout << "Please answer by typing the letter corresponding to your choice (A/a, B/b, C/c, or D/d)." << endl << endl;

    // Question 1
     cout << "1.Who teaches your C++ class?" << endl;
    cout << "A. Masum sir" << endl;
    cout << "B. Wahab sir" << endl;
    cout << "C. Rakib sir" << endl;
    cout << "D. Sumon sir" << endl;

    cin >> ans;

    if (ans == 'B' or ans == 'b') {
        cout << "Yes, you're right" << endl<< endl;
         score +=5;
    }
    else {
        cout << "Wrong answer" << endl<< endl;
    }

    //Quistion 2

    cout << "2. What is the correct extension of C++ source files?" << endl;
    cout << "A. .cpp" << endl;
    cout << "B. .java" << endl;
    cout << "C. .py" << endl;
    cout << "D. .cs" << endl;
    cout << "Your answer: ";
    cin >> ans;

    if (ans == 'A'|| ans =='a') {
        cout << "Yes, you're right!" << endl<< endl;
         score +=5;
    }
    else {
        cout << "Wrong answer." << endl<< endl;
    }

    // Question 3
    cout << "3. Which of these is a valid C++ data type?" << endl;
    cout << "A. int" << endl;
    cout << "B. float" << endl;
    cout << "C. double" << endl;
    cout << "D. All of the above" << endl;
    cout << "Your answer: ";
    cin >> ans;

    if (ans == 'D' || ans =='d') {
        cout << "Yes, you're right!" << endl<< endl;
         score +=5;
    }
    else {
        cout << "Wrong answer." << endl<< endl;
    }

    // Question 4
    cout << "4. Which keyword is used to define a class in C++?" << endl;
    cout << "A. function" << endl;
    cout << "B. object" << endl;
    cout << "C. class" << endl;
    cout << "D. struct" << endl;
    cout << "Your answer: ";
    cin >> ans;

    if (ans == 'C' || ans =='c') {
        cout << "Yes, you're right!" << endl<< endl;
         score +=5;
    }
    else {
        cout << "Wrong answer." << endl<< endl;
    }

    // Question 5
    cout << "5. Which operator is used to access members of a class through an object?" << endl;
    cout << "A. . (dot)" << endl;
    cout << "B. ->" << endl;
    cout << "C. ::" << endl;
    cout << "D. #" << endl;
    cout << "Your answer: ";
    cin >> ans;
    if (ans == 'A' || ans =='a') {
        cout << "Yes, you're right!" << endl<< endl;
         score +=5;
    }
    else {
        cout << "Wrong answer." << endl<< endl;
    }

    // Question 6
    cout << "6. What is the purpose of a constructor in C++?" << endl;
    cout << "A. To initialize objects of a class" << endl;
    cout << "B. To destroy objects of a class" << endl;
    cout << "C. To copy objects of a class" << endl;
    cout << "D. None of the above" << endl;
    cout << "Your answer: ";
    cin >> ans;

    if (ans == 'A'|| ans =='a') {
        cout << "Yes, you're right!" << endl<< endl;
         score +=5;
    }
    else {
        cout << "Wrong answer." << endl<< endl;
    }

    // Question 7
    cout << "7. Which of the following is not a type of constructor in C++?" << endl;
    cout << "A. Default Constructor" << endl;
    cout << "B. Copy Constructor" << endl;
    cout << "C. Static Constructor" << endl;
    cout << "D. Parameterized Constructor" << endl;
    cout << "Your answer: ";
    cin >> ans;

    if (ans == 'C' || ans =='c') {
        cout << "Yes, you're right!" << endl<< endl;
         score +=5;
    }
     else {
        cout << "Wrong answer." << endl<< endl;
    }

    // Question 8
    cout << "8. Which feature of C++ enables multiple functions with the same name?" << endl;
    cout << "A. Function Overloading" << endl;
    cout << "B. Function Overriding" << endl;
    cout << "C. Polymorphism" << endl;
    cout << "D. Encapsulation" << endl;
    cout << "Your answer: ";
    cin >> ans;

    if (ans == 'A'|| ans =='a') {
        cout << "Yes, you're right!" << endl<< endl;
         score +=5;
    }
     else {
        cout << "Wrong answer." << endl<< endl;
    }
    // Question 9
    cout << "9. Which loop is faster in C++ for traversing elements of an array?" << endl;
    cout << "A. for loop" << endl;
    cout << "B. while loop" << endl;
    cout << "C. do-while loop" << endl;
    cout << "D. range-based for loop" << endl;
    cout << "Your answer: ";
    cin >> ans;

    if (ans == 'D' || ans == 'd') {
        cout << "Yes, you're right!" << endl;
        score += 5;
    } else {
        cout << "Wrong answer." << endl;
    }

    // Question 10
    cout << "10. What does the keyword 'virtual' indicate in C++?" << endl;
    cout << "A. Static binding" << endl;
    cout << "B. Dynamic binding" << endl;
    cout << "C. Compile-time polymorphism" << endl;
    cout << "D. None of the above" << endl;
    cout << "Your answer: ";
    cin >> ans;

    if (ans == 'B' || ans == 'b') {
        cout << "Yes, you're right!" << endl;
        score += 5;
    } else {
        cout << "Wrong answer." << endl;
    }

    cout << endl << "Your final score is: " << score << " out of 50." << endl<<endl;

    if (score >= 40 ){
        cout << "That's awasome!!"<< endl<<endl;
    }
    else if ( score >= 30){
        cout << " That's Great" << endl<<endl;
    }
     else if ( score >= 20){
        cout << "You score should have been better" << endl<<endl;
    }
    else {
        cout << "That's too little; you should have more better score"<< endl << endl;
    }

    cout << "[Thanks for completing the quiz]" << endl;
}

int main() {
    Quiz obj;
    obj.display();
    return 0;
}

