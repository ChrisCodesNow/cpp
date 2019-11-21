#include <iostream>
#include <iostream>
using namespace std;

int main(){
    
    string name;
    cout << "Enter a name: ";
    cin >> name;
    

    if(name.find("martinez")){
        cout << "Match found" << endl;
        //
        // do something
        //
    }
    else{
        cout << "No match" << endl;
        //
        // do something
        //
    }

    return 0;
}