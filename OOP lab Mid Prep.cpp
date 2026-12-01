//
//
//////Easy: Create a class named Employee with public data members (name, department) 
//////and a private data member (salary). 
//////Implement a setter function to assign a value to salary 
//////and a getter function to retrieve it. 
//////In main(), take input from the user, set the values, 
//////and display all employee details.
////
////#include<iostream>
////using namespace std;
////class Employee
////{
////	public:
////		string name;
////		string department;
////		
////	private:
////	int salary;
////	
////	public:
////	void set_sal(int sal)
////	{
////		salary=sal;
////	}
////	
////	public:
////	int get_sal()
////	{
////	return salary;	
////	}	
////};
////
////int main()
////{
////	Employee emp1;
////	int c;
////	int temp_sal;
////	cout<<"Enter Name : ";
// //	cin>>emp1.name;
////	cout<<"\nEnter Department : ";
////	cin>>emp1.department;
////	cout<<"\nEnter Salary : ";
////	cin>>c;
////	
////	emp1.set_sal(c);
////	
////	cout<<"\n\nFinal Display\nName : "<<emp1.name;
////	cout<<"\nDepartment : "<<emp1.department;
////	temp_sal=emp1.get_sal();
////	cout<<"\nSalary : "<<temp_sal;
////}	
//
//
//
//
//
//
//
//
//
//
//
//
////*********************************************************************************************************************
////Medium: Create a class named BankAccount with 
////private data members accountHolder, pinCode, balance, and accountStatus (Active/Inactive). 
////Implement setters and getters for all members. 
////Add validation inside the setters so that  
//
////pinCode must contain at least 4 digits and  
////balance cannot be negative—display an error message for invalid inputs. 
//
////Create an object in main() to demonstrate configuring and displaying the account.
//
////#include<iostream>
////using namespace std;
////class bankacc
////{
////	private:
////	string accountHolder; 
////	int pinCode; 
////	int balance;
////	int accountStatus;
////	
////	public:
////	void set_acc_holder(string a)
////	{
////		accountHolder=a;
////	}
////	
////	public:
////	void set_acc_status()
////	{
////		
////	}
////	
////	public:		
////	void set_pin_code()
////	{
////		
////	}	
////	
////	public:
////	void set_balance()
////	{
////		
////	}	
////};
////int main()
////{
////    bankacc u1;
////    u1.
////}
//
//
//
//
//// Easy: Create a class named Product 
//// with a private price and a public name, 
//// initialized using a parameterized constructor. 
//// Declare a friend function printPrice() inside the class, 
//// define it outside the class, 
//// and call it in main() to display the object's private price.
//
//#include<iostream>
//using namespace std;
//
//class Product
//{
//	private:
//		int price;
//	
//	public:
//		string name;
//	
//	public:
//	Product()	//default constructor
//	{
//		price = 345;
//		name = "fghjk";
//	}		
//	
//	public:
//	friend void printPrice(Product &obj);
//};
//
//void printPrice(Product &obj)
//{
//	cout<<obj.name<<endl<<obj.price;
//}
//
//int main()
//{
//	Product p1;
//	printPrice(p1);
//}




//*******************************************************************************************************************************
//Medium: Create a class named CricketPlayer with 
//private data members playerName, matchesPlayed, totalRuns, and bonusRuns, 
//initialized via a constructor. 
//Declare a friend function comparePlayers() inside the class and 
//define it outside to access two CricketPlayer objects. 
//Calculate each player's 
//total score using (matchesPlayed * 50) + totalRuns + bonusRuns, compare both scores, 
//and announce the winner or a draw.
#include<iostream>
#include<string.h>
using namespace std;
class CricketPlayer{
	public:
	string playerName;
	int matchesPlayed;
	int totalRuns;
	int bonusRuns;
	
	
	CricketPlayer()
	{
	playerName = " ";
	matchesPlayed = 0;
	totalRuns = 0;
	bonusRuns = 0;		
	}	
	
	
	CricketPlayer(string a,int b,int c,int d)
	{
	playerName = a;
	matchesPlayed = b;
	totalRuns = c;
	bonusRuns = d;		
	}	
	
	
	friend void comparePlayers(CricketPlayer &player1,CricketPlayer &player2);
};
void comparePlayers(CricketPlayer &player1,CricketPlayer &player2)
{
	int total_score_1,total_score_2;
	total_score_1 = (player1.matchesPlayed * 50) + player1.totalRuns + player1.bonusRuns;
	total_score_2 = (player2.matchesPlayed * 50) + player2.totalRuns + player2.bonusRuns;

	if(total_score_1>total_score_2)
	{
		cout<<"Player 1 won";
		cout<<player1.playerName;
	}
	else if(total_score_1<total_score_2)
	{
		cout<<"Player 2 won";
		cout<<player2.playerName;
	}
	else
	{
		cout<<"Draw";
	}
}
int main()
{
	CricketPlayer obj1("Ibrahim", 20, 20, 20);
    CricketPlayer obj2("Talha", 30, 30, 30);
	comparePlayers(obj1, obj2);
	CricketPlayer obj3("Umar", 50, 55, 100);
	cout<<endl;
	comparePlayers(obj3, obj2);
	
	
}





















