//Question 4: A university wants to maintain the attendance record of students enrolled in a
//particular course. Each student has an attendance record for seven consecutive lectures.
//
//Write a C++ program by creating a Student class that:
//1. Contains a student roll number and an array of seven attendance entries as data
//members.
//2. Uses a member function to enter the student's roll number and attendance status for
//each lecture (1 for Present and 0 for Absent).
//3. Uses another member function to display the attendance record.
//4. Creates three student objects and stores their individual attendance records.
//5. Displays the attendance information of all three students.

#include <iostream>
using namespace std;

class Student
{
private:
    int roll;
    int attendance[7];
public:
    void input_data()
	{
        cout<<"ENTER ROLL NUMBER: ";
        cin>>roll;
        for (int i=0;i<7;i++)
		{
            cout<<"LECTURE "<<i+1<<" (1 PRESENT / 0 ABSENT): ";
            cin>>attendance[i];
        }
    }
    void show_data()
	{
        cout<<"\nROLL NUMBER: "<<roll<<"\n";
        for (int i=0;i<7;i++)
		{
            cout<<"LECTURE "<<i+1<<": "<<attendance[i]<<"\n";
        }
    }
};

int main()
{
    Student s[3];
    for (int i=0;i<3;i++)
	{
        cout<<"\n--- STUDENT "<<i+1<<" ---\n";
        s[i].input_data();
    }

    for (int i=0;i<3;i++)
	{
        cout<<"\n=== STUDENT "<<i+1<<" RECORD ===";
        s[i].show_data();
    }

    return 0;
}
