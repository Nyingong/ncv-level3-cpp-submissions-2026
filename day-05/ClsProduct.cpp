#include <iostream>
#include<iomanip>
#include <string>


using namespace std;
    //Creating a Product class
class Product {
    private:
        string name;
        double price;
        int quantity;

    public:
        Product() : name(""), price(0.0), quantity(0) {}    // Default constructor


    Product(string productName, double productPrice, int productQuantity)

    {                                       // Parameterized constructor
        name = productName;
        price = productPrice;
        quantity = productQuantity;
    }

    // Gets
    std::string getName() const {
        return name;
    }

    double getPrice() const {
        return price;
    }

    int getQuantity() const {
        return quantity;
    }

    // Set
    void setName(const std::string& productName)
     {
        name = productName;
    }

    void setPrice(double productPrice) {
        price = productPrice;
    }

    void setQuantity(int productQuantity)
     {
        quantity = productQuantity;
    }

    // Display product information

    void display() const
    {
        cout << "Product Name      : " << name << "\n"
                  << "Price         : R" << price << "\n"
                  << "Quantity      : " << quantity << endl;
    }
};

int main() {
    // Example usage
    Product item1("Water", 2.50, 50);
    item1.display();

    return 0;
}
