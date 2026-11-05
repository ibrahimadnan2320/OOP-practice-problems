// sir Uzair bhai class 5-11-2026
// draw back of class : cant access private members in main so we use setter and getter
// then we use constructor so name of data members is encapsulated/unexposed
// copy constructor 
// friend function

#include<iostream>
using namespace std;
	
	class phone
	{
		private:
			int price;
		public:	
			string model;
	public:
	phone()	// default Constructor
	{
		price =0;
		model = "nothing";
	}
	public:
	phone(int a,string b)	// parameterized Constructor
	{
		price =a;
		model = b;
	}
	public:
	phone(phone &p2)	// Copy Constructor
	{
		price = p2.price;
		model = p2.model;
	}
		
	public:
		
		void display()
		{
			cout<<"Price : "<<price;
			cout<<"\nModel : "<<model;
		}
	public:
	friend void print (phone &p1);	
	};


void print (phone &p3)	// friend function
{
	cout<<"\n\n"<<p3.price<<"\n\n";
}

int main()
{
    //default constructor
    phone p1;             
    
    // parameterized constructor
    phone p2(3, "sui");   
    
    // 3. Copy constructor
    phone p3(p2);         
    
    p1.display();
    cout<<"\n\n\n";
    
	p2.display();
    cout<<"\n\n\n";
    
	p3.display();
	cout<<"\n\n\n";
	
	print(p3);
    
    
    return 0;
}
