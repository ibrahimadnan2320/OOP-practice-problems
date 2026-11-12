// array as object
// array as data member 
// imt for mid (8 Numbers)

#include<iostream>
using namespace std;
class car
{
		
	public:
	string color[5];	// array as data member

};
int main()
{
//
{
//	car c[50];	//array as objects
//
//	
////	w1.owner = "IBI";
////	
////	w[0].owner= "ahmad";
////	w[1].owner= "tahir";
////	w[2].owner= "umer";
////	w[3].owner= "haris";
////	w[4].owner= "uzair";
//	
////	cout<<w1.owner<<"\n\n"
////	<<w[0].owner<<endl
////	<<w[1].owner<<endl
////	<<w[2].owner<<endl
////	<<w[3].owner<<endl
////	<<w[4].owner<<endl;
//
//for(int i=0;i<50;i++)
//	{
//		cout<<"Enter "<<i+1<<"st Name : "<<endl;
//		cin>>c[i].owner;
//	}
//
//cout<<endl<<endl;
//	for(int i=0;i<50;i++)
//	{
//		cout<<i+1<<"st Name : ";
//		cout<<c[i].owner<<endl;
//	
}
//	
car c1[5];
//c1[0].color[0]="Blue";
//c1[0].color[1]="Red";
//c1[0].color[2]="Green";
//c1[0].color[3]="pink";
//c1[0].color[4]="Gray";
//	
//	cout
//	<<c1[0].color[0]<<endl
//	<<c1[0].color[1]<<endl	
//	<<c1[0].color[2]<<endl
//	<<c1[0].color[3]<<endl
//	<<c1[0].color[4]<<endl;
	
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			c1[i].color[j]="Blue";
		}
	}
	int a=0;
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			cout<<endl<<a+1<<c1[i].color[j];
			a++;
		}
	}
	return 0;
}














