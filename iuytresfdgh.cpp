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
		friend void f_func(phone fobj);
		
};

void f_func(phone fobj){
	
	fobj.price=45;
	fobj.model="rtyukm";
	
	cout<<"Price = "<<fobj.price;

}


int main()
{
 	phone p1;
 	f_func(p1);
    return 0;
}
