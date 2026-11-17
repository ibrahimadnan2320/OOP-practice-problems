#include <iostream>
using namespace std;
struct address
{
    char house[20];
	char street[20];
	char area[20];
	char state[20];
};

struct contact
{
    int id;
    char fname[20];
	char lname[20];
	char phone[20];
    address add;
};

void addcontact(contact b[],int &c);
void viewcontacts(const contact b[],int c);
void editcontact(contact b[],int c);
void delcontact(contact b[],int &c);
void searchcontact(const contact b[],int c);

int main(){
    contact book[100];
    int count=0;
    int choice=0;
	cout<<"*******WELCOME TO ADDRESS BOOK*******\n\n";	
    for(int run=1;run==1;){
        cout<<"1.ADD CONTACT \n2.EDIT CONTACT \n3.DELETE CONTACT \n4.VIEW CONTACT \n5.SEARCH CONTACT \n6.EXIT\n\n\nENTER CHOICE : ";
        cin>>choice;

        if(choice==1){
            addcontact(book,count);
        }
        else if(choice==2){
            editcontact(book,count);
        }
        else if(choice==3){
            delcontact(book,count);
        }
        else if(choice==4){
            viewcontacts(book,count);
        }
        else if(choice==5){
            searchcontact(book,count);
        }
        else if(choice==6){
            run=0;
        }
    }
    return 0;
}

void addcontact(contact b[],int &c)
{
    	b[c].id=c+1;
    	cout<<"Enter First Name,Last Name,Phone:";
    	cin>>b[c].fname>>b[c].lname>>b[c].phone;
    		cout<<"Enter House No,Street,Area,State:";
    	cin>>b[c].add.house>>b[c].add.street>>b[c].add.area>>b[c].add.state;
    	c++;
}

void viewcontacts(const contact b[],int c)
{
    for(int i=0;i<c;i++){
        cout<<"\nID:"<<b[i].id<<"\nName:"<<b[i].fname<<" "<<b[i].lname
			<<"\nPhone:"<<b[i].phone<<"\nAddress:"<<b[i].add.house<<","
		<<b[i].add.street<<","<<b[i].add.area<<","<<b[i].add.state<<"\n";
    }
}

void editcontact(contact b[],int c)
{
    int searchid;
	    cout<<"Enter ID to edit:";
    cin>>searchid;
    
    for(int i=0;i<c;i++){
        if(b[i].id==searchid)
		{
            cout<<"Enter new First Name,Last Name,Phone:";
            cin>>b[i].fname>>b[i].lname>>b[i].phone;
            cout<<"Enter new House No,Street,Area,State:";
            cin>>b[i].add.house>>b[i].add.street>>b[i].add.area>>b[i].add.state;
            break;
        }
    	}
}

void delcontact(contact b[],int &c)
{
    int searchid;
    cout<<"Enter ID to delete:";
    cin>>searchid;
    
    for(int i=0;i<c;i++)
	{
        if(b[i].id==searchid){
    	        for(int j=i;j<c-1;j++)
				{
                b[j]=b[j+1];
            }
            c--;
            break;
        }
    }
}

void searchcontact(const contact b[],int c)
{
    char searchname[20];
    cout<<"Enter First Name to search:";
    cin>>searchname;
    
    for(int i=0;i<c;i++)
	{
        int match=1;
        for(int j=0;b[i].fname[j]!='\0'||searchname[j]!='\0';j++)
		{
            if(b[i].fname[j]!=searchname[j])
			{
                match=0;
                break;
            }
        }
        
        if(match==1)
		{
            cout<<"\nID:"<<b[i].id<<"\nName:"<<b[i].fname<<" "<<b[i].lname<<"\nPhone:"
			<<b[i].phone<<"\nAddress:"<<b[i].add.house<<","<<b[i].add.street
			<<","<<b[i].add.area<<","<<b[i].add.state<<"\n";
        }
    }
}
