#include <iostream>
#include <string>
using namespace std;

string get_name(){
    string name;
    cout << "What should I call you?: ";
    cin >> name;
    return name;
}

void display_message(string name){
    cout << "Welcome " << name << endl;
}

int main(){

    // Ask user for name and save it
    string name;
    name = get_name();


    // Welcome user with its name
    display_message(name);
}