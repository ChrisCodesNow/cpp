#include <fstream>
#include <iostream>

using namespace std;

int main(){
    ofstream file;
    file.open("fib.txt");
    file << "hello ! :)" << endl;
    file.close();
}