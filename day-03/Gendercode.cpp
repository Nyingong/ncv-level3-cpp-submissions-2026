#include<iostream>
#include<string>

using namespace std;

int main()
{
    char gendercode;

    //Prompt for inputs
    cout<<"Enter gender code" <<
    cin>>gendercode;

    //Determine Gender
    if gendercode==M ||;
    cout<<"gender:male";
    else if (gendercode==f //g;
    )

    return 0;
    #include <iostream>

int main() {
    char genderCode;

    // Prompt user for input
    std::cout << "Enter gender code (M/F): ";
    std::cin >> genderCode;

    // Determine gender using a switch statement
    switch (genderCode) {
        case 'M':
        case 'm':
            std::cout << "Gender: Male" << std::endl;
            break;
        case 'F':
        case 'f':
            std::cout << "Gender: Female" << std::endl;
            break;
        default:
            std::cout << "Error: Invalid gender code." << std::endl;
            break;
    }

    return 0;
}


}
