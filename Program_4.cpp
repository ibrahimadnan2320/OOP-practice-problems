//Q#4. Create a 'DISTANCE' class with : - feet and inches as data members - member function to input distance
//-	member function to output distance
//-	member function to add two distance objects
//Write a main function to create objects of DISTANCE class. Input two distances and output the sum.
#include<iostream>
using namespace std;

class DISTANCE
{
	private:
		int feet;
		int inches;
		
	public:
	DISTANCE()
	{
		feet=0;
		inches=0;
	}
	
	public:
	void input()
	{
		cout<<"Enter feet: ";
		cin>>feet;
		cout<<"Enter inches: ";
		cin>>inches;
	}
	
	public:
	void output()
	{
		cout<<feet<<" feet and "<<inches<<" inches"<<endl;
	}
	
	public:
	void addDistances(DISTANCE &d1,DISTANCE &d2)
	{
		inches=d1.inches+d2.inches;
		feet=d1.feet+d2.feet;
		
		if(inches>=12)
		{
			feet=feet+(inches/12);
			inches=inches%12;
		}
	}
};

int main()
{
	DISTANCE dist1,dist2,dist3;
	
	cout<<"Enter First Distance:"<<endl;
	dist1.input();
	
	cout<<"\nEnter Second Distance:"<<endl;
	dist2.input();
	
	dist3.addDistances(dist1,dist2);
	
	cout<<"\n\nFinal Display\nDistance 1 : ";
	dist1.output();
	cout<<"Distance 2 : ";
	dist2.output();
	cout<<"Sum of Distances : ";
	dist3.output();
}

