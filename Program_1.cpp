#include<iostream>
using namespace std;

class car
{
	private:
	int model_no;	
	
	public:
	car()
	{
		model_no=2025266245;	
	}
	
	car(const car &c2)
	{
		model_no=c2.model_no;	
	}
	
	void displaydefault()
	{
		cout<<"Default Constructor !\n"<<"\nModel Number: "<<model_no;
	}
	
	void displaycopy()
	{
		cout<<"\n\nCopy Constructor !\n"<<"\nModel Number: "<<model_no;
	}
};
int main()
{
	car c1;
	c1.displaydefault();
	
	car c2(c1);
	c2.displaycopy();
	
	
}



