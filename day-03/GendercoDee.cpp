#include <iostream>
#include<string>
using namespace std;
int main() {
    char genderCode;  //Initialize the variable

    // Prompt user for input
    cout << "Enter gender code (M/F): ";
    cin >> genderCode;

    // Determine gender using a switch statement
    switch (genderCode)
     {
        case 'M':
        case 'm':
           cout << "Gender: Male" << endl;
            break;
        case 'F':
        case 'f':
            cout << "Gender: Female" << endl;
            break;
        default:
            cout << "Error: Invalid gender code." <<endl;
            break;
    }

    return 0;
}
