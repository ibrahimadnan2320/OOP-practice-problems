// Todays Topic : 1st topic of OPP: Encapsulation
// Get and set function using or in class
// Function inside a class

// if object is Private or Public in a class can a public function inside the same class can access or modify it right through Get or set function??????????????

#include<iostream>
using namespace std;

class student		//class
{ 	public: //access modifier		
	string name;	//class member
	string father_name;	//class member
	string roll_number;	//class member
	string section;	//class member
	
	private:
	string gender;	//class member
	
	public:
		void get(string g)
		{
			gender=g;
		}
	
		string set()
		{
			return gender;
		}
	
};
int main()
{
	student s1;		//class object
	string gender;
	s1.father_name ="Adnan"; //value Assign by user
	s1.name="Ibrahim";
	
	s1.roll_number="F2025266245";
	s1.section="V1";
	
	cout<<"Name : "<<s1.name; //Output
	cout<<"\nFather Name : "<<s1.father_name;
	cout<<"\nRoll Number : "<<s1.roll_number;
	cout<<"\nSection : "<<s1.roll_number;
	
	string bu;
	cout<<"\nEnter Your Gender : ";
	cin>>bu;
	s1.get(bu);
	cout<<"\nGender = "<<s1.set();
	return 0;
}
