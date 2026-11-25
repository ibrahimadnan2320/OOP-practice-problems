// Todays Topic : 1st topic of OPP: Encapsulation
// Get and set function using or in class
// Function inside a class

// if object is Private or Public in a class can a public function inside the same class can access or modify it right through Get or set function??????????????

#include<iostream>
using namespace std;

class student //class
{ 	
	public: //access modifier		
	string name;	//class member
	private:
	string gender;	//class member
	
	public:
		void set(string g)
		{
			gender=g;
		}
		
	string get()
	{
		return gender;
	}
	
};
int main()
{
	string gen;
	
	student s1;
	s1.name="ibrahim";
	cout<<"Enter Gender : ";
	cin>>gen;
	s1.set(gen);
	
	cout<<"\n\n\nName : "<<s1.name;
	cout<<"\nGender : "<<s1.get();
	
