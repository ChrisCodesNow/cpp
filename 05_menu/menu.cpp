#include <iostream>
using namespace std;

// Function prototypes
void display_menu();

int main(){
    int choice;
    do{
        display_menu();
    }while(false);
}

void display_menu(){
    cout << "Main Menu" << endl;
    cout << "Book Rental System" << endl;
    cout << "---" << endl;

    cout << "Select an option" << endl;
    cout << "1. Book Management" << endl;
    cout << "2. Member Management" << endl;
}