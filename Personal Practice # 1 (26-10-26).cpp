//getter & setter function 


#include<iostream>
using namespace std;
class out
{
	private:
	int age;

	public:
	void set(int abu)
	{
		age=abu;
	}
	int get()
	{
		return age;
	}
};

int main()
{
	out s1;
	int output,inbyuser;
	cout<<"Enter Age : ";
	cin>>inbyuser;
	s1.set(inbyuser);
	s1.get();
	output = s1.get();
	cout<<"\n\n\n\n"<<output;
}
