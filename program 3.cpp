#include <iostream>

using namespace std;

class SecretAgent {
private:
    char agentName[50];
    int missionsCompleted;
    int intelligencePoints;
    int bonusPoints;

public:
    SecretAgent(const char name[], int missions, int intelPts, int bonus) {
        int i = 0;
        while (name[i] != '\0') {
            agentName[i] = name[i];
            i++;
        }
        agentName[i] = '\0';
        
        missionsCompleted = missions;
        intelligencePoints = intelPts;
        bonusPoints = bonus;
    }

    friend void compareAgents(SecretAgent a1, SecretAgent a2);
};

void compareAgents(SecretAgent a1, SecretAgent a2) {
    int score1 = (a1.missionsCompleted * 100) + a1.intelligencePoints + a1.bonusPoints;
    int score2 = (a2.missionsCompleted * 100) + a2.intelligencePoints + a2.bonusPoints;

    cout << "\n==============================\n";
    cout << "       MISSION RESULTS        \n";
    cout << "==============================\n";
    cout << a1.agentName << "'s Total Score: " << score1 << "\n";
    cout << a2.agentName << "'s Total Score: " << score2 << "\n\n";

    if (score1 > score2) {
        cout << "*** WINNER: " << a1.agentName << " ***\n";
    } 
    else if (score2 > score1) {
        cout << "*** WINNER: " << a2.agentName << " ***\n";
    } 
    else {
        cout << "*** RESULT: It's a draw! Both agents are equally good. ***\n";
    }
    cout << "==============================\n";
}

int main() {
    char name1[50], name2[50];
    int miss1, int1, bon1;
    int miss2, int2, bon2;

    cout << "--- Enter Data for Agent 1 ---\n";
    cout << "Enter Agent Name: ";
    cin.getline(name1, 50);
    
    cout << "Enter Missions Completed: ";
    cin >> miss1;
    
    cout << "Enter Intelligence Points: ";
    cin >> int1;
    
    cout << "Enter Bonus Points: ";
    cin >> bon1;

    cin.ignore(); 

    cout << "\n--- Enter Data for Agent 2 ---\n";
    cout << "Enter Agent Name: ";
    cin.getline(name2, 50);
    
    cout << "Enter Missions Completed: ";
    cin >> miss2;
    
    cout << "Enter Intelligence Points: ";
    cin >> int2;
    
    cout << "Enter Bonus Points: ";
    cin >> bon2;

    SecretAgent agentX(name1, miss1, int1, bon1);
    SecretAgent agentY(name2, miss2, int2, bon2);

    compareAgents(agentX, agentY);

    return 0;
}
