#include <iostream>
using namespace std;

// Function prototype
void display_message();

int main(){
    int choice;
    do{
        display_message();
    }while(false);

    return 0;
}

void display_message(){
    cout << "Caesar Cipher Encryption/Decryption Tool" << endl << endl;

    cout << "Menu:" << endl;
    cout << "1. Encrypt a message" << endl;
    cout << "2. Decrypt a message" << endl;
    cout << "3. Exit" << endl;
}