#include<iostream>
using namespace std;
int ar(int ch)
{
	if(ch%2==0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int main()
{
	int a,ans;
	cout<<"Enter a NUmber";
	cin>>a;
	ans=ar(a);
	if(ans==1){cout<<"EVEN";}
	else{cout<<"ODD";}
}

