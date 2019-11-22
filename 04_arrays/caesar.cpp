#include <iostream>
#include <string>
using namespace std;

// Function prototype
void display_message();
int get_key();
int get_menu_choice();
void perform_menu_choice(int, int);
void encrypt_message(int);
void decrypt_message();
void change_key();
char shift(char, int);

int main(){
    int key;
    int choice;
    do{
        display_message();
        key = get_key();
        choice = get_menu_choice();
        perform_menu_choice(choice, key);
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

void perform_menu_choice(int choice, int key){

    switch(choice){
    case 1:
        encrypt_message(key);
        break;
    case 2:
        decrypt_message();
        break;
    case 3:
        change_key();
        break;
    case 4:
        break;
    default:
        break;
    }
    cout << endl;
}

void encrypt_message(int key){
    cout << "Encryption Tool" << endl;
    string message;
    cout << "Enter a message to encrypt: ";
    cin >> message;


}


void decrypt_message(){
    cout << "Decryption Tool" << endl;
}

void change_key(){
    cout << "Change Key Tool" << endl;
}