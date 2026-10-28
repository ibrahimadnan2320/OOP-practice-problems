// Constructor (Default + Parameterizes)
//Constructor OverLoading 

#include<iostream>
using namespace std;
class student
{	
	private:
	string name;
	
	public:
	void s_n(string a)
	{
		name=a;
	}	
	string g_n()
	{
		return name;
	}
};
int main()
{	
	student s1;
	s1.s_n("Hello");
	cout<<s1.g_n();
	return 0;
}
