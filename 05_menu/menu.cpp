#include <iostream>
using namespace std;

// Function prototypes
void display_menu();
void select_choice(int choice);
void display_book_menu();
void select_book_choice(int);

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
        int book_choice;
        cin >> book_choice;
        select_book_choice(book_choice);
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

void select_book_choice(int book_choice){
    switch(book_choice){
    case 1: 
        cout << "Check out selected" << endl;
        break;
    case 2:
        cout << "Return selected" << endl;
        break;
    case 3:
        cout << "Add book selected" << endl;
        break;
    case 4:
        cout << "Remove book selected" << endl;
        break;
    case 5:
        cout << "Add to stock selected" << endl;
        break;
    case 6:
        cout << "Remove from stock selected" << endl;
        break;
    case 7:
        cout << "Sell/Salvage selected" << endl;
        break;
    case 8:
        cout << "Update book info selected" << endl;
        break;
    }
}