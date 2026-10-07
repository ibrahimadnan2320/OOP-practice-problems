#include<iostream>
using namespace std;
float rad()
{
	float an=0,ra;
	cout<<"ENTER Radius : ";	
	cin>>ra;
	an= 2*ra;
	return an;
}

float ar()
{
	float ra;
	cout<<"ENTER Radius: ";	
	cin>>ra;
	float ar=(3.1415)*(ra*ra);
	return ar;
}

int main()
{
	int a,b;
	a=rad();
	cout<<a<<endl;
	b=ar();
	cout<<b;
	
	
	
}

