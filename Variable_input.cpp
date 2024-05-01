//
// Created by teraf on 01.05.2024.
//
#include <iostream>
#include <limits>
#include <unistd.h>
#include <bitset>
using namespace std;
int main() {

    int int_to_read = INT_MIN;
    cout << "Process ID: "<< getpid() << endl;

    while(true){
        cout << "integer variable (inputed): " << int_to_read << " base 2: " << bitset<32>(int_to_read)<< endl;
        cout << "\nenter a whole number\n";
        cin >> int_to_read;
        if(std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Ignores the rest of the current line
            std::cout << "Invalid input. Please enter a whole number.\n";
        }

    }

}
