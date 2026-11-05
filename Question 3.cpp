//uestion 3: You are developing a secret agent game where two agents compete to complete 
//dangerous missions. Each agent earns points for completing objectives and collecting secret 
//intelligence. 

//Create a C++ class named SecretAgent with the following private data members: 

//? agentName 
//? missionsCompleted 
//? intelligencePoints 
//? bonusPoints 

//Tasks: 
//1. Create a constructor to initialize the agent's information. 

//2. Declare a friend function named compareAgents() inside the class. 

//3. Define the friend function outside the class. 

//4. The friend function must access the private data members of two different 
//SecretAgent objects. 

//5. Calculate the total score of both agents using: 

//6. Compare the scores and announce which agent wins. If both scores are equal, display 
//a draw message. 

//7. Demonstrate the functionality using two different agent objects. 
#include <iostream>
using namespace std;

class SecretAgent 
{
	private:
		string agentName;
		int missionsCompleted;
		int intelligencePoints;
		int bonusPoints;

	public:
		SecretAgent(string name, int missions, int intel, int bonus)	//Constructor
		{
			agentName=name;
			missionsCompleted=missions;
			intelligencePoints=intel;
			bonusPoints=bonus;
		}
		friend void compareAgents(SecretAgent agent1, SecretAgent agent2);
};

void compareAgents(SecretAgent agent1, SecretAgent agent2) 
{
	int score1=(agent1.missionsCompleted * 100) + agent1.intelligencePoints + agent1.bonusPoints;
	int score2=(agent2.missionsCompleted * 100) + agent2.intelligencePoints + agent2.bonusPoints;

	cout<<"Mission Results:\n";
	cout<<agent1.agentName<<"'s Total Score : "<<score1<<"\n";
	cout<<agent2.agentName<<"'s Total Score : "<<score2<<"\n";
	cout<<"****************************************\n";
	
	if(score1>score2)
	{
		cout<<"Result : "<<agent1.agentName<<" wins the competition!\n";
	}
	else if(score2>score1)
	{
		cout<<"Result : "<<agent2.agentName<<" wins the competition!\n";
	}
	else
	{
		cout<<"Result : It's a draw! Both agents have equal scores.\n";
	}
}

int main() 
{	
	cout<<"~~~ Secret Agent Game ~~~\n\n";

	SecretAgent agentAlpha("Agent Alpha", 5, 250, 50);
	SecretAgent agentBravo("Agent Bravo", 6, 150, 80);

	compareAgents(agentAlpha, agentBravo);

	return 0;
}
