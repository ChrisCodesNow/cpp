#include <iostream>
using namespace std;

// Function prototypes
void display_menu();
void select_choice(int choice);

int main(){
    int choice;
    do{
        display_menu();
        cin >> choice;
        select_choice(choice);
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

void select_choice(int choice){
    switch(choice){
    case 1:
        cout << "Welcome to book management" << endl;
        break;
    case 2:
        cout << "Welcome to member management" << endl;
        break;
    }
}