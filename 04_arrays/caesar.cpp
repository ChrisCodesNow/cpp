#include <iostream>
using namespace std;

// Function prototype
void display_message();
int get_key();
int get_choice();

int main(){
    int key;
    do{
        display_message();
        key = get_key();
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
