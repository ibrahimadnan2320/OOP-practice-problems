//Question 2: An educational platform needs a result management system that stores the
//examination scores of students. Since different examinations may have different numbers of
//registered students, the system must allocate memory dynamically.
//
//Write a C++ program that:
//1. Takes the number of registered students as input.
//2. Creates a dynamically allocated array object to store their examination marks.
//3. Allows the user to enter the marks of each student.
//4. Displays all the entered marks with their corresponding student positions.
//5. Properly releases the allocated memory.

#include <iostream>
using namespace std;

class result_system
{
private:
    int marks[100];
    int total;
public:
    result_system(int n)
	{
        total=n;
    }
    void get_marks()
	{
        for (int i=0;i<total;i++)
		{
            cout<<"ENTER MARKS FOR STUDENT "<<i+1<<": ";
            cin>>marks[i];
        }
    }
    void show_marks()
	{
        cout<<"\nSTUDENT MARKS:\n";
        for (int i=0;i<total;i++)
		{
            cout<<"POSITION "<<i+1<<" -> "<<marks[i]<<"\n";
        }
    }
};

int main()
{
    int n;
    cout<<"ENTER NUMBER OF REGISTERED STUDENTS: ";
    cin>>n;
    result_system exam(n);
    exam.get_marks();
    exam.show_marks();
    return 0;
}
