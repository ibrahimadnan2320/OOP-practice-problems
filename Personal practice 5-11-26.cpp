//Challenge 1: Encapsulation with Validation (Real-World API Simulation)
//In full-stack development, we never blindly trust user input when modifying object state.
//
//Create a UserAccount class.
//
//Declare a private string named password.
//
//Write a correctly named setter that only updates the password 
//
//if the provided string is at least 8 characters long; otherwise, output a warning message.
//
//Write a getter that retrieves the password.
//
//Test this in your main() function by attempting to set both a valid and an invalid password.
#include <iostream>
using namespace std;

class UserAccount {
private:
    char password[50]; // Fixed buffer size

public:
    // Setter: Protects the state
    void setPassword(char p[]) 
	{
        int count = 0;
        
        
		for(int i=0;i<50;i++)
		{	
			if(p[i]!='\0')
			{
				count++;
			}	
		} 
    if(count>=9)
	{
		cout<<"\nInvalid Length";
	}    
	else
	{
		cout<<p[];
	}
}
};

int main() {
    UserAccount user1;
    char inputPass[50];

    cout << "Enter your new password: ";
    cin >> inputPass; 

    user1.setPassword(inputPass[]);
    
    

    return 0;
}
