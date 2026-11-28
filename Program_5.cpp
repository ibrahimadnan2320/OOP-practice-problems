//Q#5. Write a program to print the roll number 
//and average marks of 8 students in three subjects 
//(each out of 100). The marks are entered 
//by the user and the roll numbers are automatically assigned.

#include<iostream>
using namespace std;

class Student
{
	private:
		int rollNo;
		int sub1;
		int sub2;
		int sub3;
		double average;
		
	public:

	Student()
	{
		rollNo=0;
		sub1=0;
		sub2=0;
		sub3=0;
		average=0.0;
	}
	
	public:
	void setRollNo(int r)
	{
		rollNo=r;
	}
	
	public:
	void inputMarks()
	{
		cout<<"\n--- Entering Marks for Roll No: "<<rollNo<<" ---"<<endl;
		cout<<"Enter Subject 1 Marks: ";
		cin>>sub1;
		cout<<"Enter Subject 2 Marks: ";
		cin>>sub2;
		cout<<"Enter Subject 3 Marks: ";
		cin>>sub3;
		
		average=(sub1+sub2+sub3)/3.0;
	}
	
	public:
	void display()
	{
		cout<<"Roll No: "<<rollNo<<"\tAverage Marks: "<<average<<endl;
	}
};

int main()
{
	
	Student s[8];
	
	
	for(int i=0;i<8;i++)
	{
		s[i].setRollNo(101+i); 
		s[i].inputMarks();
	}
	
	cout<<"\n\nFinal Display\n";
	cout<<"-----------------------------------\n";
	for(int i=0;i<8;i++)
	{
		s[i].display();
	}
}

