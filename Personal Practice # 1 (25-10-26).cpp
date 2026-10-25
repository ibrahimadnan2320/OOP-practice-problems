#include<iostream>
using namespace std;
class StudentInfo
{
	public:
	string student_name;
	string roll_number;	
};

class student_gender
{
	private:
	string gender;	
	
	public:
	void setgender(string g)
	{
		gender = g;
	}
	string getgender()
	{
		return gender;
	}	
};

class exam_marks
{
	private:
	int marks;	
	public:
	void setmarks(int marks_user)
	{
		marks=marks;
	}
	int getmarks()
	{
		return marks;
	}
};

int main()
{	int m;
	StudentInfo s1;
	student_gender s_1;
	exam_marks m1;
	
	s1.student_name = "Ibrahim";
	s1.roll_number = "F2025266245";
	s_1.setgender("Male");
	
	cout<<"Name : "<<s1.student_name<<endl<<"Roll Number : "<<s1.roll_number;
	cout<<endl<<"Gender : "<<s_1.getgender();
	int i=0;
	while(i==0){
	cout<<"\nEnter Marks : ";
	cin>>m;	
	if(m>=0 && m<=100)
	{
		i++;
		m1.setmarks(m);
		cout<<"Pass";
	}
	else
	{
		cout<<"Invalid Mark Entered ! ";
	}
	}
}
