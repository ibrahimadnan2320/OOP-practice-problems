#include <iostream>
using namespace std;

struct location {
    char flat[20];
    char road[20];
    char city[20];
    char zip[20];
};

struct person {
    int serial;
    char fname[20];
    char lname[20];
    char cell[20];
    location addr;
};

void insertdata(person lst[], int &size);
void showdata(const person lst[], int size);
void modifydata(person lst[], int size);
void removedata(person lst[], int &size);
void finddata(const person lst[], int size);

int main()
{
    person list[100];
    int sz = 0;
    int choice = 0;
    
    cout << "--- MY PHONE BOOK ---\n\n";
    
    for (int flag = 1; flag > 0; )
    {
        cout << "1) Add  2) Update  3) Delete  4) Show  5) Search  6) Quit\n-> ";
        cin >> choice;

        if (choice == 1) {
            insertdata(list, sz);
        } 
        else if (choice == 2) {
            modifydata(list, sz);
        } 
        else if (choice == 3) {
            removedata(list, sz);
        } 
        else if (choice == 4) {
            showdata(list, sz);
        } 
        else if (choice == 5) {
            finddata(list, sz);
        } 
        else if (choice == 6) {
            flag = 0;
        }
    }
    return 0;
}

void insertdata(person lst[], int &size) 
{
    lst[size].serial = size + 1;
    
    cout << "Provide First Name, Last Name, Cell: ";
    cin >> lst[size].fname >> lst[size].lname >> lst[size].cell;
    
    cout << "Provide Flat, Road, City, Zip: ";
    cin >> lst[size].addr.flat >> lst[size].addr.road >> lst[size].addr.city >> lst[size].addr.zip;
    
    size++;
}

void showdata(const person lst[], int size) 
{
    for (int k = 0; k < size; k++) 
    {
        cout << "\n# " << lst[k].serial 
             << "\nPerson: " << lst[k].fname << " " << lst[k].lname
             << "\nCell: " << lst[k].cell 
             << "\nAddr: " << lst[k].addr.flat << ", " << lst[k].addr.road << ", " << lst[k].addr.city << ", " << lst[k].addr.zip << "\n\n";
    }
}

void modifydata(person lst[], int size) 
{
    int val;
    cout << "Enter # to update: ";
    cin >> val;
    
    for (int k = 0; k < size; k++) 
    {
        if (lst[k].serial == val) 
        {
            cout << "New First Name, Last Name, Cell: ";
            cin >> lst[k].fname >> lst[k].lname >> lst[k].cell;
            
            cout << "New Flat, Road, City, Zip: ";
            cin >> lst[k].addr.flat >> lst[k].addr.road >> lst[k].addr.city >> lst[k].addr.zip;
            
            break;
        }
    }
}

void removedata(person lst[], int &size) 
{
    int val;
    cout << "Enter # to drop: ";
    cin >> val;
    
    for (int k = 0; k < size; k++) 
    {
        if (lst[k].serial == val) 
        {
            for (int p = k + 1; p < size; p++) 
            {
                lst[p - 1] = lst[p];
            }
            size--;
            break;
        }
    }
}

void finddata(const person lst[], int size) 
{
    char req[20];
    cout << "Enter First Name to find: ";
    cin >> req;
    
    for (int k = 0; k < size; k++) 
    {
        int ok = 1;
        
        for (int p = 0; lst[k].fname[p] != '\0' || req[p] != '\0'; p++) 
        {
            if (lst[k].fname[p] != req[p]) 
            {
                ok = 0;
                break;
            }
        }
        
        if (ok == 1) 
        {
            cout << "\n# " << lst[k].serial 
                 << "\nPerson: " << lst[k].fname << " " << lst[k].lname
                 << "\nCell: " << lst[k].cell 
                 << "\nAddr: " << lst[k].addr.flat << ", " << lst[k].addr.road << ", " << lst[k].addr.city << ", " << lst[k].addr.zip << "\n\n";
        }
    }
}
