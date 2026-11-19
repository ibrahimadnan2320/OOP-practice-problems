//Question 1: A shopping mall has introduced a smart parking system that records the vehicle 
//registration numbers of parked cars. The parking manager wants to maintain this information 
//using a dynamically allocated array because the parking capacity may change depending on the 
//event. 
//
//Write a C++ program that: 
//1. Takes the total number of available parking spaces from the user. 
//2. Dynamically creates an array object to store vehicle registration numbers (integer IDs). 
//3. Allows the parking manager to enter the registration numbers of parked vehicles. 
//4. Displays all occupied parking spaces along with their corresponding vehicle IDs. 
//5. Releases the dynamically allocated memory after displaying the records. 

#include <iostream>
using namespace std;

class parking_lot
{
private:
    int ids[100];
    int total;
public:
    parking_lot(int n)
	{
        total=n;
    }
    void get_ids()
	{
        for (int i=0;i<total;i++) 
		{
            cout<<"SPACE "<<i+1<<" ID (0 IF EMPTY): ";
            cin>>ids[i];
        }
    }
    void show_ids() 
	{
        cout<<"\nOCCUPIED SPACES:\n";
        for (int i=0;i<total;i++) 
		{
            if (ids[i]!=0) 
		    {
                cout<<"SPACE "<<i+1<<" -> "<<ids[i]<<"\n";
            }
        }
    }
};

int main() 
{
    int n;
    cout<<"ENTER TOTAL PARKING SPACES: ";
    cin>>n;
    parking_lot lot(n);
    lot.get_ids();
    lot.show_ids();
    return 0;
}
