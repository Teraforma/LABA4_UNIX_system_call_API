#include <iostream>
#include <limits>
#include <unistd.h>
#include <bitset>
using namespace std;

int main2() {
    std::cout << "Hello, World!" << std::endl;
    int p_id = -1;
    while(true){
        cout << "process id please: " << endl;
        cin >> p_id;
        if(std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(numeric_limits<std::streamsize>::max(), '\n'); // Ignores the rest of the current line
            std::cout << "Invalid input. Please enter a whole number.\n";
        }else if (p_id <= 1){
            continue;
        }
        else{
            break;
        }

    }

    return 0;
}
