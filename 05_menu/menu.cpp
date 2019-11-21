#include <iostream>
using namespace std;

// Function prototypes
void display_menu();
void select_choice(int choice);
void display_book_menu();

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
        cout << "Welcome to book management" << endl << endl;
        display_book_menu();
        break;
    case 2:
        cout << "Welcome to member management" << endl;
        break;
    }
}

void display_book_menu(){
    cout << "Please select a book menu option: " << endl;
    cout << "1. Checkout " << endl;
    cout << "2. Return" << endl;
    cout << "3. Add book to database" << endl;
    cout << "4. Remove book from databse" << endl;
    cout << "5. Add x to stock" << endl;
    cout << "6. Remove x from stock" << endl;
    cout << "7. Sell/Salvage book (stock --)" << endl;
    cout << "8. Update book information" << endl;
}