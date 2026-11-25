//create a class with data member of student 
//names as array of 5 and take input using loop by using a function and just call it in main 
//
//and in main make an object array of size 3 
//
//take input and display using for loop in 2 different function 
//named as inpt and display and just call in main only 
#include<iostream>
using namespace std;
class student{
	private:
	string name[5];
	
	public:
	void input()
	{
		for(int i=0;i<5;i++)
		{
			cout<<"\nEnter name of student "<<i+1<<" : ";
			cin>>name[i];
		}
	}	

	friend void display(student &obj);
};

void display(student &obj)
	{
		
		for(int i=0;i<5;i++)
		{
			cout<<"\nName of student "<<i+1<<" : "<<obj.name[i];
		}
	}
int main()
{
	student s[3];
	
	for(int i=0;i<3;i++)
		{
			s[i].input();
		}

	for(int i=0;i<3;i++)
		{
			s[i].display(s[i]);
		}

}







