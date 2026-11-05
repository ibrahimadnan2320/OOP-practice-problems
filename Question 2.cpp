//Question 2: You are developing a multiplayer adventure game in which players can create 
//different characters. 

//Create a C++ class named GameCharacter with the following private data members: 
//? characterName 
//? health 
//? attackPower 
//? weaponName 

//Tasks: 
//1. Default Constructor: Create a character with the name "Unknown Hero", health 100, 
//attack power 10, and weapon "Wooden Sword". 

//2. Parameterized Constructor: Allow the player to create a character by providing a 
//custom name, health, attack power, and weapon. 

//3. Copy Constructor: Allow a player to create a duplicate character by copying the 
//attributes of an existing character. 

//4. Create three objects to demonstrate all three constructors. 

//5. Display the details of each character.


#include <iostream>
using namespace std;

class GameCharacter {
private:
    string characterName;
    int health;
    int attackPower;
    string weaponName;

public:
    GameCharacter() 	//Default
	{
        characterName="Unknown Hero";
        health=100;
        attackPower=10;
        weaponName="Wooden Sword";
    }

    GameCharacter(string name,int h,int ap,string weapon)	//Parameterized
	 {
        characterName=name;
        health=h;
        attackPower=ap;
        weaponName=weapon;
    }

    // 3. copy constructor
    GameCharacter(GameCharacter &obj) 
	{
        characterName=obj.characterName;
        health=obj.health;
        attackPower=obj.attackPower;
        weaponName=obj.weaponName;
    }

    void displayDetails() 
	{
        cout<<"Character Name : "<<characterName<<"\n";
        cout<<"Health : "<<health<<"\n";
        cout<<"Attack Power : "<<attackPower<<"\n";
        cout<<"Weapon : "<<weaponName<<"\n";
        cout<<"****************************************\n";
    }
};

int main() {
    
	cout << "~~~ Multiplayer Adventure Game ~~~\n\n";
	
    cout << "Player 1 (Default Constructor):\n";
	GameCharacter player1;
    player1.displayDetails();

    cout << "Player 2 (Parameterized Constructor):\n";
    GameCharacter player2("Shadow Assassin", 150, 35, "Dual Daggers");
    player2.displayDetails();

    cout << "Player 3 (Copy Constructor):\n";
    GameCharacter player3(player2);
    player3.displayDetails();

    return 0;
}
