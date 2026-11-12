//2. The Constructor Trio
//Create a class named Session with a private int sessionID.   
//Task: Write three things inside this class:
// A default constructor that sets sessionID to 0.   
// A parameterized constructor that accepts an integer and assigns it to sessionID.   
// A copy constructor that accepts another Session object by reference and copies its sessionID. 
#include<iostream>
using namespace std;
class session{
	private:
		int sessionid;
		
	public:
	session()	//Default
	{
		sessionid=0;
		cout<<sessionid;
	}	
	
	public:
	session(int p)	//parameterized
	{
		sessionid=p;
	}
	
//	public:
//	session(session &p)	//copy
//	{
//		sessionid = p;
//	}
};
int main()
{
	session d;
	
	
	int up;
	cout<<"Enter Session Id : ";
	cin>>up;
	
	session p(up);
	
	session c(p);
	cout<<"Default : "<<d.session();
	cout<<"\nParameterized : "<<p.session();
	cout<<"\nCopy : "<<c.session();

}
