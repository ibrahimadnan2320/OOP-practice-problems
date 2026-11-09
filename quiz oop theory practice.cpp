//Write a C++ function named countFrequency() that accepts an integer array, 
//its size, and a target element as parameters. 
//The function should count and return the number of 
//times the target element appears in the array.
#include<iostream>
using namespace std;
int c_f(int arr[],int s,int te)
{
	int cte=0;
	for(int i=0;i<s;i++)
	{
		if(arr[i]==te)
		{
			cte++;
		}
	}
	return cte;
}
int main()
{
	int size;
	cout<<"Enter size of array : ";
	cin>>size;
	int ar[size];
	for(int i=0;i<size;i++)
	{
		cout<<"\nEnter "<<i+1<<"st Element : ";
		cin>>ar[i];
	}
	int ans,t_e;
	cout<<"Enter Traget element :  ";
	cin>>t_e;
	ans=c_f(ar,size,t_e);
	cout<<endl<<endl<<endl<<ans;
}
