
//Question 5: A sports organization is arranging an inter-university tournament involving multiple
//university teams. Each team consists of five players, and the organization needs to maintain the
//individual scores of every player.
//
//The organization wants to manage multiple team objects dynamically while keeping each team's
//player scores within its own object.
//
//Write a C++ program that:
//1. Creates a Team class containing a team ID and an integer array of five player scores as
//data members.
//2. Defines member functions to input and display the player scores of each team.
//3. Takes the total number of participating teams from the user.
//4. Dynamically creates an array object to store multiple Team objects.
//5. Inputs and displays the scores of all teams separately.
//6. Releases the dynamically allocated memory after completing the tournament record
//display.

#include <iostream>
using namespace std;

class Team
{
private:
    int team_id;
    int scores[5];
public:
    void input_data()
	{
        cout<<"ENTER TEAM ID: ";
        cin>>team_id;
        for (int i=0;i<5;i++)
		{
            cout<<"ENTER SCORE FOR PLAYER "<<i+1<<": ";
            cin>>scores[i];
        }
    }
    void show_data()
	{
        cout<<"\nTEAM ID: "<<team_id<<"\n";
        for (int i=0;i<5;i++)
		{
            cout<<"PLAYER "<<i+1<<" SCORE: "<<scores[i]<<"\n";
        }
    }
};

int main()
{
    int n;
    cout<<"ENTER TOTAL NUMBER OF TEAMS: ";
    cin>>n;
    Team teams[100];
    for (int i=0;i<n;i++)
	{
        cout<<"\n--- TEAM "<<i+1<<" ---\n";
        teams[i].input_data();
    }
    for (int i=0;i<n;i++)
	{
        cout<<"\n=== TEAM "<<i+1<<" RECORD ===";
        teams[i].show_data();
    }
    return 0;
}
