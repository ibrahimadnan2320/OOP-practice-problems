//Easy (Array as Data Member): Create a Student class containing 
// an integer array of 5 subject marks as data members. 

//Write one member function to input the all 5 marks, 
//and another member function to display the complete record.
// 
//In main(), create 2 Student objects, take input for both, 
//and display their records separately.

#include<iostream>
using namespace std;
class student
{
	public:
	int marks[5];
	
 	void input()
 	{
 		
 		for(int i=0;i<5;i++)
 		{
 			cout<<"\nEnter Marks for "<<i+1<<" subject : ";
 			cin>>marks[i];
		}
		
	}
	
	void display()
	{
		for(int i=0;i<5;i++)
 		{
 			cout<<"\nMarks of "<<i+1<<" subject : "<<marks[i];
		}
	}					
};

int main()
{
	student obj[2];

	cout<<"\n1st Student\n";
	obj[0].input();
	
	cout<<"\n2nd Student\n";
	obj[1].input();
	
	cout<<endl<<endl<<"Final Display : \n\n";
	
	cout<<"First Student \n\n";
	obj[0].display();
	
	cout<<"\n\nSecond Student \n";
	obj[1].display();
}




