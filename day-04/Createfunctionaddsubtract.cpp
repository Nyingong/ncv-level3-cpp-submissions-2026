#include <iostream>
using namespace std;

void getTwoNumbers(double &num1, double &num2);
void calculateAndDisplay(double num1, double num2);

int main() {

    // These two numbers are declared and available in main
    double firstNumber = 0.0;
    double secondNumber = 0.0;

    // Call the function to prompt the user and update the variables
    getTwoNumbers(firstNumber, secondNumber);

    // Call the function to calculate and display the results
    calculateAndDisplay(firstNumber, secondNumber);

    return 0;
}

// Function to prompt the user and pass the values back using references (&)

    void getTwoNumbers(double &num1, double &num2) {
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
}

// Function calculate and display the sum, difference, and product

    void calculateAndDisplay(double num1, double num2) {
    double sum = num1 + num2;
    double difference = num1 - num2;
    double product = num1 * num2;
    double quotient = num1 / num2;

    cout << "\n--- Results ---" << std::endl;
    cout << "Sum: " << sum << endl;
    cout << "Difference: " << difference << std::endl;
    cout << "Product: " << product << endl;
    cout << "Quotient: " << quotient << endl;

}
