//Create a class named MovieTicket with private data members 
//movieName, cinemaHall, seatNumber, and ticketPrice. 
//Implement a default constructor, 
//a parameterized constructor (populated using user input in main()), 
//and a copy constructor that copies all attributes from an existing ticket 
//except it automatically increments seatNumber 
//by 1 for the next seat. Create three objects in main() and display all three tickets.
#include<iostream>
using namespace std;
class MovieTicket{
	private:
		string movieName;
		string cinemaHall;
		int seatNumber;
		int ticketPrice;
		
	public:
	MovieTicket()		//default
	{
		movieName = "Spider Man";
		cinemaHall = "Hall 2";
		seatNumber = 845;
		ticketPrice = 299;	
	}
	
	MovieTicket(string a,string b,int c,int d)		//parameterized
	{
		movieName = a;
		cinemaHall = b;
		seatNumber = c;
		ticketPrice = d;	
	}
	
	MovieTicket(MovieTicket &obj)		//parameterized
	{
		movieName = obj.movieName;
		cinemaHall = obj.cinemaHall;
		seatNumber = obj.seatNumber + 1 ;
		ticketPrice = obj.ticketPrice;	
	}
			
	void display()
	{
		cout<<"MOVIE NAME : "<<movieName;
		cout<<"\nCinema Hall : "<<cinemaHall;
		cout<<"\nSeat : "<<seatNumber;
		cout<<"\nTicket Price : "<<ticketPrice<<endl;	
	}		
};
int main()
{
//	MovieTicket t1;		//default
	
	MovieTicket t1,t2("pk","c2",21,59999),t3(t1);
	t1.display();
	t2.display();
	t3.display();
	
	
}


