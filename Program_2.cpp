//Q#2. Create a class called 'EMPLOYEE' 
//that has 
//- EMPCODE and EMPNAME as data members 
//- member function getdata( ) to input data-member 
//function display( ) to output data. 

//Write a main function to create EMP, 
//an array of EMPLOYEE objects. Accept and display the 
//details of at least 6 employees.

#include<iostream>
using namespace std;
class emp
{
	private:
		int emp_code;
		string emp_name;
	
	public:
	void set_code(int a)
	{
		emp_code=a;
		
	}	
	
	public:
	void set_name(string b)
	{
		emp_name=b;
		
	}	
	public:
	void display()
	{
	cout<<"\nName : "<<emp_name;
	cout<<"\nId : "<<emp_code;
	}	
	
};

int main()
{
	emp obj[6];
	int id;
	string nam;
	
	for(int i=0;i<6;i++)
	{
	cout<<"Enter Your Name : ";
	cin>>nam;
	obj[i].set_name(nam);
	
	cout<<"Enter Your ID : ";
	cin>>id;
	obj[i].set_code(id);
	}
	
	for(int i=0;i<6;i++)
	{
		obj[i].display();
	}
	
}
