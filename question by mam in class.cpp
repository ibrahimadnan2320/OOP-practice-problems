#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    int roll_num;
    string name;
    float marks;

public:
    // 1. Default Constructor (Initializes safe defaults for the array)
    Student() {
        roll_num = 0;
        name = "Unknown";
        marks = 0.0;
    }

    // 2. Parameterized Constructor (Constructor Overloading)
    Student(int r, string n, float m) {
        roll_num = r;
        name = n;
        marks = m;
    }

    // 3. Setters (Mutators)
    void setRollNum(int r) {
        roll_num = r;
    }

    void setName(string n) {
        name = n;
    }

    void setMarks(float m) {
        marks = m;
    }

    // 4. Getters (Accessors)
    int getRollNum() {
        return roll_num;
    }

    string getName() {
        return name;
    }

    float getMarks() {
        return marks;
    }

    // 5. Display Function
    void display() {
        cout << "Roll Number : " << roll_num << endl;
        cout << "Name        : " << name << endl;
        cout << "Marks       : " << marks << endl;
        cout << "-----------------------------" << endl;
    }
};

int main() {
    // Instantiate an array of 3 Student objects
    // This automatically triggers the Default Constructor 3 times
    Student students[3];

    cout << "--- Enter Student Data ---" << endl;
    
    // Loop to take data and populate objects via Setters
    for (int i = 0; i < 3; i++) {
        int r;
        string n;
        float m;

        cout << "\nStudent " << (i + 1) << ":" << endl;
        
        cout << "Enter Roll Number: ";
        cin >> r;
        
        // Clear the newline character left in the buffer by cin before using getline
        cin.ignore();
        
        cout << "Enter Name: ";
        getline(cin, n);
        
        cout << "Enter Marks: ";
        cin >> m;

        // Using setters to securely update the object's private state
        students[i].setRollNum(r);
        students[i].setName(n);
        students[i].setMarks(m);
    }

    cout << "\n=== Displaying Student Records ===" << endl;
    
    // Loop to display the encapsulated data
    for (int i = 0; i < 3; i++) {
        students[i].display();
    }

    return 0;
}
