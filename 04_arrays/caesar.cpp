#include <iostream>
using namespace std;

// Function prototype
void display_message();
int get_key();
int get_menu_choice();
void perform_menu_choice(int);

int main(){
    int key;
    int choice;
    do{
        display_message();
        key = get_key();
        choice = get_menu_choice();
        perform_menu_choice(choice);
    }while(choice != 4);

    return 0;
}

void display_message(){
    cout << "Caesar Cipher Encryption/Decryption Tool" << endl << endl;

    cout << "Menu:" << endl;
    cout << "1. Encrypt a message" << endl;
    cout << "2. Decrypt a message" << endl;
    cout << "3. Change the key" << endl;
    cout << "4. Exit"  << endl;
}

int get_key(){
    int key = 0;
    cout << "Select a key: ";
    cin >> key;

    if(key == 0){
        cout << "Using a key of 0 has no effect.\n";
        cout << "Please select a different key before attempting to encrypt or decrypt\n";
    }
    
    return key;
}

int get_menu_choice(){
    int choice;

    cout << ">> ";
    cin >> choice;
    cout << endl;

    return choice;
}

void perform_menu_choice(int choice){

    switch(choice){
    case 1:
        cout << "Encryption Tool" << endl;;
        break;
    case 2:
        cout << "Decryption Tool" << endl;
        break;
    case 3:
        cout << "Change Key Tool" << endl;
        break;
    case 4:
        break;
    default:
        break;
    }
    cout << endl;
}