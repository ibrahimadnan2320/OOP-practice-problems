#include <iostream>
using namespace std;
int f(int num)
{if(num%2==0){
return 98765432;}
else{return 6;}
}
int main()
{
int num;
int recieve;
cout<<"Enter a num :";
cin>>num;
recieve=f(num);
if(recieve == 6)
{
cout<<"ODD";
}
if(recieve == 98765432)
{
cout<<"Even";
}
return 0;
}
