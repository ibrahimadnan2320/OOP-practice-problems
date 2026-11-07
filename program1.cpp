#include <iostream>

using namespace std;

class SecuritySystem {
private:
    char ownerName[50];
    char securityCode[50]; // Size increase kiya taake lambi input pe crash na ho
    bool alarmStatus; 
    int numberOfCameras;

    // Custom function: Characters copy karne ke liye
    void copyString(char dest[], const char src[]) {
        int i = 0;
        while (src[i] != '\0') {
            dest[i] = src[i];
            i++;
        }
        dest[i] = '\0';
    }

    // Custom function: Check karega ke sirf numbers (0-9) hain aur length >= 6 hai
    bool isValidSecurityCode(const char code[]) {
        int length = 0;
        while (code[length] != '\0') {
            // Agar koi character '0' se chota ya '9' se bada hai (yani alphabet ya symbol hai)
            if (code[length] < '0' || code[length] > '9') {
                return false; 
            }
            length++;
        }
        // Agar loop mukammal ho jaye aur length 6 ya us se zyada ho
        if (length >= 6) {
            return true;
        } else {
            return false;
        }
    }

public:
    // Setter functions
    void setOwnerName(const char name[]) {
        copyString(ownerName, name);
    }
    
    void setSecurityCode(const char code[]) {
        if (isValidSecurityCode(code) == true) {
            copyString(securityCode, code);
        } else {
            cout << "Error: Security code must contain at least 6 digits (Numbers only)!\n";
            copyString(securityCode, "Invalid");
        }
    }
    
    // Status ko bhi integer parameter kar diya taake invalid pe error de sake
    void setAlarmStatus(int status) {
        if (status == 1) {
            alarmStatus = true;
        } else if (status == 0) {
            alarmStatus = false;
        } else {
            cout << "Error: Invalid alarm status! Setting to OFF by default.\n";
            alarmStatus = false;
        }
    }
    
    void setNumberOfCameras(int cameras) {
        if (cameras >= 0) {
            numberOfCameras = cameras;
        } else {
            cout << "Error: Number of cameras cannot be negative!\n";
            numberOfCameras = 0; 
        }
    }

    // Getter / Display function
    void displayDetails() {
        cout << "\n--- Security System Details ---\n";
        cout << "Owner Name: " << ownerName << "\n";
        cout << "Security Code: " << securityCode << "\n";
        
        if (alarmStatus == true) {
            cout << "Alarm Status: ON\n";
        } else {
            cout << "Alarm Status: OFF\n";
        }
        
        cout << "Cameras: " << numberOfCameras << "\n";
    }
};

int main() {
    SecuritySystem homeAlarm;
    
    char tempName[50];
    char tempCode[50];
    int tempCameras;
    int alarmInput;
    
    cout << "Setting up the Security System...\n";
    
    cout << "Enter Owner Name: ";
    cin.getline(tempName, 50);
    homeAlarm.setOwnerName(tempName);
    
    cout << "Enter Security Code (at least 6 digits): ";
    cin >> tempCode;
    homeAlarm.setSecurityCode(tempCode);
    
    cout << "Enter Alarm Status (1 for ON, 0 for OFF): ";
    cin >> alarmInput;
    homeAlarm.setAlarmStatus(alarmInput);
    
    cout << "Enter number of cameras: ";
    cin >> tempCameras;
    homeAlarm.setNumberOfCameras(tempCameras);
    
    // Display final data
    homeAlarm.displayDetails();
    
    return 0;
}
