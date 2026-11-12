#include<iostream>
using namespace std;
class male
{
	private:
	int height;
	public:
	string color;
	friend void fri(male &ffobj);	
};
void fri(male &ffobj)
{
	ffobj.height=10;
	cout<<ffobj.height;
}
int main()
{

	male m1;
	m1.color="nigga";
	male m2;
	cout<<"First Male : \n\n"<<m1.color<<endl;
	fri(m2);
}
