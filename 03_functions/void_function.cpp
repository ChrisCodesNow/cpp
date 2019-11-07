#include <iostream>
#include <string>
using namespace std;

void get_user_name(){
    string name;
    cout << "What should I call you?: ";
    cin >> name;

    cout << "Welcome " << name << endl;
}


int main(){

    get_user_name();
    return 0;
}