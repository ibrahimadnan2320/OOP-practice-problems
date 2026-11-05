////Question 1: You are developing a smart home security system that allows homeowners to 
////control their security devices. 
//
////Create a C++ class named SecuritySystem with the following private data members: 
////? ownerName 
////? securityCode 
////? alarmStatus (ON/OFF) 
////? numberOfCameras 

	//Tasks: 

//1. Implement setter functions to update the values of all data members. 
//2. Implement getter functions to retrieve and display the information. 

// Only Validations to be added:
 
//3. The security code must contain at least 6 digits. If an invalid code is entered, display 
//an appropriate error message. 
//4. The number of cameras cannot be negative. 

//5. Create an object in main() and demonstrate how the system can be configured and its 
//details displayed.
 
#include<iostream>
using namespace std;

class SecuritySystem
{
	private:
	char owner_name[100];
	char security_code[50];
	int alarm_status;
	int no_of_cameras;
	

	int getStringLength(char str[]) 
	{
		int length = 0;
		for (int i = 0; str[i] != '\0'; i++) 
		{
			length++;
		}
		return length;
	}
	void copyString(char dest[], char src[]) 
	{
		int i;
		for (i = 0; src[i] != '\0'; i++) 
		{
			dest[i] = src[i];
		}
		dest[i]='\0'; 
	}
	
	public:
		void set_all_details(char o_n[], char s_c[], int a_s, int n_c)
		{

			copyString(owner_name, o_n);
			alarm_status = a_s;
			if (getStringLength(s_c)>=6) 
			{
				copyString(security_code,s_c);
			} 
			else 
			{
				cout<<"\nError: Invalid Security Code. It must contain at least 6 digits.\n";
				char not_set[] = "Not Set";
				copyString(security_code, not_set);
			}
			
			// 4. Validation: Number of cameras cannot be negative
			if (n_c >= 0) {
				no_of_cameras = n_c;
			} else {
				cout << "Error: Number of cameras cannot be negative.\n\n";
				no_of_cameras = 0;
			}
		}
		
		void get_owner_name()
		{
			cout<<"Owner Name : "<<owner_name<<"\n";
		}
		
		void get_security_code()
		{
			cout<<"Security Code : "<< security_code<<"\n";
		}
		
		void get_alarm_status()
		{
			cout<<"Alarm Status : ";
			if(alarm_status == 1) 
			{
				cout<<"ON\n";
			}
			 else 
			{
				cout<<"OFF\n";
			}
		}
		
		void get_no_of_cameras()
		{
			cout<<"Number of Cameras : "<<no_of_cameras<<"\n";
		}

		void display_system_info()
		{
			cout << "\n~~~ System Details ~~~\n";
			get_owner_name();
			get_security_code();
			get_alarm_status();
			get_no_of_cameras();
			cout<<"********************\n";
		}
};

int main()
{	
	SecuritySystem s1;
	
	char owner_name[100];
	char security_code[50];
	int alarm_status;
	int no_of_cameras;
	
	cout<<"ENTER YOUR NAME : ";
	cin>>owner_name;

	cout<<"ENTER YOUR SECURITY CODE : ";
	cin>>security_code;
	
	cout<<"ENTER ALARM STATUS [ 1(ON) / 0(OFF) ] : ";
	cin>>alarm_status;

	cout<<"ENTER NO. OF CAMERAS : ";
	cin>>no_of_cameras;

	s1.set_all_details(owner_name, security_code, alarm_status, no_of_cameras);

	s1.display_system_info();

	return 0;
}
