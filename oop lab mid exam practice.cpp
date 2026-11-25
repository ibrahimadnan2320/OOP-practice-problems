

////Easy: Create a class named Employee with public data members (name, department) 
////and a private data member (salary). 
////Implement a setter function to assign a value to salary 
////and a getter function to retrieve it. 
////In main(), take input from the user, set the values, 
////and display all employee details.
//
//#include<iostream>
//using namespace std;
//class Employee
//{
//	public:
//		string name;
//		string department;
//		
//	private:
//	int salary;
//	
//	public:
//	void set_sal(int sal)
//	{
//		salary=sal;
//	}
//	
//	public:
//	int get_sal()
//	{
//	return salary;	
//	}	
//};
//
//int main()
//{
//	Employee emp1;
//	int c;
//	int temp_sal;
//	cout<<"Enter Name : ";
 //	cin>>emp1.name;
//	cout<<"\nEnter Department : ";
//	cin>>emp1.department;
//	cout<<"\nEnter Salary : ";
//	cin>>c;
//	
//	emp1.set_sal(c);
//	
//	cout<<"\n\nFinal Display\nName : "<<emp1.name;
//	cout<<"\nDepartment : "<<emp1.department;
//	temp_sal=emp1.get_sal();
//	cout<<"\nSalary : "<<temp_sal;
//}	












//*********************************************************************************************************************
//Medium: Create a class named BankAccount with 
//private data members accountHolder, pinCode, balance, and accountStatus (Active/Inactive). 
//Implement setters and getters for all members. 
//Add validation inside the setters so that  

//pinCode must contain at least 4 digits and  
//balance cannot be negative—display an error message for invalid inputs. 

//Create an object in main() to demonstrate configuring and displaying the account.

//#include<iostream>
//using namespace std;
//class bankacc
//{
//	private:
//	string accountHolder; 
//	int pinCode; 
//	int balance;
//	int accountStatus;
//	
//	public:
//	void set_acc_holder(string a)
//	{
//		accountHolder=a;
//	}
//	
//	public:
//	void set_acc_status()
//	{
//		
//	}
//	
//	public:		
//	void set_pin_code()
//	{
//		
//	}	
//	
//	public:
//	void set_balance()
//	{
//		
//	}	
//};
//int main()
//{
//    bankacc u1;
//    u1.
//}


// Easy: Create a class named Product 
// with a private price and a public name, 
// initialized using a parameterized constructor. 
// Declare a friend function printPrice() inside the class, 
// define it outside the class, 
// and call it in main() to display the object's private price.

#include<iostream>
using namespace std;

class Product
{
	private:
		int price;
	
	public:
		string name;
	
	public:
	Product()	//default constructor
	{
		price = 345;
		name = "fghjk";
	}		
	
	public:
	friend void printPrice(Product &obj);
};

void printPrice(Product &obj)
{
	cout<<obj.name<<endl<<obj.price;
}

int main()
{
	Product p1;
	printPrice(p1);
}




#include<iostream>
using namespace std;

class soldier {
private:
	string soldier_id;
	string s_name;
	int s_b_salary;
	int s_rank;
	int s_t_missions;
	int s_s_missions;

public:
	int f_misson;
	int m_bonus;
	int f_salary;

	void set(string a, string b, int c, int d, int e, int f) {
		soldier_id = a;
		s_name = b;
		s_b_salary = c;
		s_rank = d;
		s_t_missions = e;
		s_s_missions = f;
	}

	string get_soldierid() {
		return soldier_id;
	}

	string get_soldiername() {
		return s_name;
	}

	int get_basicsalary() {
		return s_b_salary;
	}

	int get_soldierrank() {
		return s_rank;
	}

	int get_totalmissions() {
		return s_t_missions;
	}

	int get_successfulmissions() {
		return s_s_missions;
	}

	friend void cal_per(soldier &sol1);

	void display() {
		cout << "ID : " << soldier_id
		     << "\nName : " << s_name
		     << "\nBasic Salary : " << s_b_salary // ADDED: " : " so value doesn't stick to label
		     << "\nRank : " << s_rank
		     << "\nSoldier Total Missons : " << s_t_missions
		     << "\nSuccessfull Soldier Missons : " << s_s_missions
		     << "\n\n\nFailed Mission : " << f_misson
		     << "\nMission Bonus : " << m_bonus // ADDED: display calculated bonus
		     << "\nTotal Salary : " << f_salary; // ADDED: display calculated total salary
	}
};

void cal_per(soldier &sol1) {
	sol1.f_misson = sol1.s_t_missions - sol1.s_s_missions;
	sol1.m_bonus = sol1.s_s_missions * 5000;
	sol1.f_salary = sol1.m_bonus + sol1.s_b_salary;
}

int main() {
	soldier s1;
	s1.set("F2025266213", "Ahmad", 69696969, 1, 1000, 900);
	cal_per(s1);
	s1.display(); 
	return 0;
}































