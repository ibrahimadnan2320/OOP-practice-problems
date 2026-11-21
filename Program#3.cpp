//Question 3: A hospital wants to maintain the health records of its patients. Each patient
//undergoes five routine health measurements during a medical examination. The hospital
//requires each patient's measurements to remain associated with their respective patient record.
//
//Write a C++ program by creating a Patient class that:
//1. Contains a patient ID and an integer array of five health measurements as data members.
//2. Uses a member function to input the patient ID and five measurements.
//3. Uses another member function to display the complete patient record.
//4. Creates two patient objects and stores their respective records.
//5. Displays both patients' information separately.

#include <iostream>
using namespace std;

class Patient
{
private:
    int id;
    int measurements[5];
public:
    void input_data()
	{
        cout<<"ENTER PATIENT ID: ";
        cin>>id;
        for (int i=0;i<5;i++)
		{
            cout<<"ENTER MEASUREMENT "<<i+1<<": ";
            cin>>measurements[i];
        }
    }
    void show_data()
	{
        cout<<"\nPATIENT ID: "<<id<<"\n";
        for (int i=0;i<5;i++)
		{
            cout<<"MEASUREMENT "<<i+1<<": "<<measurements[i]<<"\n";
        }
    }
};

int main()
{
    Patient p1,p2;
    cout<<"--- PATIENT 1 ---\n";
    p1.input_data();
    cout<<"\n--- PATIENT 2 ---\n";
    p2.input_data();

    cout<<"\n=== PATIENT 1 RECORD ===";
    p1.show_data();
    cout<<"\n=== PATIENT 2 RECORD ===";
    p2.show_data();

    return 0;
}
