#include <iostream>

using namespace std;

class GameCharacter {
private:
    char characterName[50];
    int health;
    int attackPower;
    char weaponName[50];

    // Custom function: Bina kisi library ke array copy karne ke liye
    void copyChars(char dest[], const char src[]) {
        int i = 0;
        while (src[i] != '\0') {
            dest[i] = src[i];
            i++;
        }
        dest[i] = '\0';
    }

public:
    // 1. Default Constructor (Assignment ke mutabiq fixed values)
    GameCharacter() {
        copyChars(characterName, "Unknown Hero");
        health = 100;
        attackPower = 10;
        copyChars(weaponName, "Wooden Sword");
    }

    // 2. Parameterized Constructor (User ki di hui values set karne ke liye)
    GameCharacter(const char name[], int hp, int power, const char weapon[]) {
        copyChars(characterName, name);
        health = hp;
        attackPower = power;
        copyChars(weaponName, weapon);
    }

    // 3. Copy Constructor (Ek object ka data dusre mein copy karne ke liye)
    GameCharacter(const GameCharacter &obj) {
        copyChars(characterName, obj.characterName);
        health = obj.health;
        attackPower = obj.attackPower;
        copyChars(weaponName, obj.weaponName);
    }

    // 5. Display function details print karne ke liye
    void displayCharacter() {
        cout << "Name: " << characterName << "\n";
        cout << "Health: " << health << "\n";
        cout << "Attack Power: " << attackPower << "\n";
        cout << "Weapon: " << weaponName << "\n";
        cout << "------------------------\n";
    }
};

int main() {
    // Task 4: Create three objects to demonstrate all three constructors
    
    // Object 1: Default constructor khud ba khud call hoga
    GameCharacter player1;
    
    // User se Player 2 ke liye data lena
    char tempName[50];
    char tempWeapon[50];
    int tempHealth, tempPower;
    
    cout << "--- Create Your Custom Character (Player 2) ---\n";
    
    cout << "Enter Character Name: ";
    cin.getline(tempName, 50);
    
    cout << "Enter Health (e.g., 150): ";
    cin >> tempHealth;
    
    cout << "Enter Attack Power (e.g., 25): ";
    cin >> tempPower;
    
    // IMPORTANT: Jab hum 'cin >>' (integer) ke baad 'cin.getline' (string) use karte hain, 
    // toh enter key buffer mein reh jati hai. Usay clear karne ke liye cin.ignore() zaroori hai.
    cin.ignore(); 
    
    cout << "Enter Weapon Name: ";
    cin.getline(tempWeapon, 50);
    
    // Object 2: Parameterized constructor call hoga
    GameCharacter player2(tempName, tempHealth, tempPower, tempWeapon);
    
    // Object 3: Copy constructor call hoga (Player 2 ki exact copy)
    GameCharacter player3(player2);
    
    
    // Sab characters ko display karna
    cout << "\n\n=== All Game Characters Details ===\n";
    
    cout << "Player 1 (Created using Default Constructor):\n";
    player1.displayCharacter();
    
    cout << "Player 2 (Created using Parameterized Constructor):\n";
    player2.displayCharacter();
    
    cout << "Player 3 (Created using Copy Constructor - Duplicate of Player 2):\n";
    player3.displayCharacter();

    return 0;
}
