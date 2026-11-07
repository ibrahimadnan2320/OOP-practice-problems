//The Task: Write a void function named reverseData that accepts an integer array and its size.
//
//The Constraint: You must accept the array using a pointer parameter (int* arr).
//You are strictly forbidden from using standard array bracket notation ([]) inside the function. 
//You must reverse the elements in memory using only pointer arithmetic (e.g., *(arr + i)).
//The Test: In main(), declare an array of 5 integers, 
//pass it to the function, and print the reversed array using a loop.
#include<iostream>
using namespace std;

void reverseData(int* arr,int siz)
{	
	int temparr[siz];
	cout<<"After Reversing : \n";
	for(int i=0;i<siz;i++)
	{
		temparr[i]= *arr;
	}
	
	for(int i=siz;i>siz;i--)
	{
		cout<<temparr[i];
	}
}

int main()
{	int size;
	
	cout<<"Enter size of array : ";
	cin>>size;
	
	int arr[size];
	cout<<"\nEnter Data : ";
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	reverseData(arr[],size);	
}
