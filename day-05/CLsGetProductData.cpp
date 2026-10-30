#include <iostream>
#include <string>
#include <iomanip>

using namespace std;
class Product {
private:
    string name;
    double price;
    int quantity;

public:

    Product() : name(""), price(0.0), quantity(0)// Default constructor
     {}

    // Parameterized constructor
    Product(string n, double p, int q) : name(n), price(p), quantity(q) {}

    // Friend declarations so non-member functions can access private members
    friend void getProductData(Product &prod);
    friend void displayProduct(const Product &prod);
    friend int prodCompare(const Product &p1, const Product &p2);
};

// Non-member function: Get product data from standard input
void getProductData(Product &prod) {
    cout << "Enter product name: ";
    cin >> std::ws; // clear whitespace/newline
    getline(std::cin, prod.name);

    cout << "Enter product price: ";
    cin >> prod.price;

    cout << "Enter product quantity: ";
    cin >> prod.quantity;
}

// Non-member function: Display product details
void displayProduct(const Product &prod) {
    cout << fixed << setprecision(2);
    cout << "Name:     " << prod.name << "\n"
              << "Price:    $" << prod.price << "\n"
              << "Quantity: " << prod.quantity << "\n";
}

// Non-member function: Compare two products by price (or total value)
// Returns: 1 if p1 is more expensive than p2, -1 if p1 is cheaper, 0 if equal
int prodCompare(const Product &p1, const Product &p2) {
    if (p1.price > p2.price) {
        return 1;
    } else if (p1.price < p2.price) {
        return -1;
    }
    return 0;
}

int main() {
    Product item1, item2;

    std::cout << "=== Enter Data for Product 1 ==-\n";
    getProductData(item1);

    std::cout << "\n=== Enter Data for Product 2 ==-\n";
    getProductData(item2);

    std::cout << "\n--- Product 1 Details ---\n";
    displayProduct(item1);

    std::cout << "\n--- Product 2 Details ---\n";
    displayProduct(item2);

    std::cout << "\n--- Comparison (by Price) ---\n";
    int comparison = prodCompare(item1, item2);
    if (comparison == 1)
        {
    cout << item1.name << " is more expensive than " << item2.name << ".\n";
    }
     else if (comparison == -1)
    {
        cout << item1.name << " is cheaper than " << item2.name << ".\n";
    } else
    {
        cout << item1.name << " and " << item2.name << " have the same price.\n";
    }

    return 0;
}
