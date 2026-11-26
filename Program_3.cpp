//Q#3. Create a class 'COMPLEX' to hold a complex number. 
//Write a friend function to add two complex numbers. 
//Write a main function to add two COMPLEX objects.
#include<iostream>
using namespace std;

class COMPLEX
{
	private:
		double real;
		double imag;
		
	public:
	COMPLEX() // default constructor
	{
		real = 0.0;
		imag = 0.0;
	}
	
	public:
	COMPLEX(double r, double i) // parameterized constructor
	{
		real = r;
		imag = i;
	}
	
	public:
	void display()
	{
		if(imag >= 0)
		{
			cout<<real<<" + " <<imag << "i"<< endl;
		}
		else
		{
			cout<<real<<" - " << -imag << "i"<< endl;
		}
	}
	
	public:
	friend COMPLEX add(COMPLEX &c1, COMPLEX &c2);
};

COMPLEX add(COMPLEX &c1, COMPLEX &c2)
{
	COMPLEX temp;
	temp.real = c1.real + c2.real;
	temp.imag = c1.imag + c2.imag;
	return temp;
}

int main()
{
	COMPLEX num1(4.5, 3.2);
	COMPLEX num2(1.5, -5.2);
	
	cout<<"First Complex Number: ";
	num1.display();
	
	cout<<"Second Complex Number: ";
	num2.display();
	
	COMPLEX result;
	result = add(num1, num2);
	
	cout<<"Result of Addition: ";
	result.display();
}

