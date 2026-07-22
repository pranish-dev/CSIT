#include <iostream>
#include <string>
using namespace std;

class Product {
protected:
    int productID;
    string productName;
    float unitPrice;

public:
    Product(int id, string name, float price) {
        productID = id;
        productName = name;
        unitPrice = price;
    }

    void displayProduct() {
        cout << "Product ID: " << productID << endl;
        cout << "Product Name: " << productName << endl;
        cout << "Unit Price: " << unitPrice << endl;
    }
};

class Order : public Product {
protected:
    int quantity;
    float total;

public:
    Order(int id, string name, float price, int qty)
        : Product(id, name, price) {
        quantity = qty;
    }

    void calculateTotal() {
        total = unitPrice * quantity;
    }
};

class Discount : public Order {
    float discount, payable;

public:
    Discount(int id, string name, float price, int qty)
        : Order(id, name, price, qty) {
    }

    void calculateDiscount() {
        if (total >= 50000)
            discount = total * 0.15;
        else if (total >= 20000)
            discount = total * 0.10;
        else
            discount = 0;

        payable = total - discount;
    }

    void display() {
        displayProduct();
        cout << "Quantity: " << quantity << endl;
        cout << "Total Amount: " << total << endl;
        cout << "Discount: " << discount << endl;
        cout << "Final Payable Amount: " << payable << endl;
    }
};

int main() {
    int id, qty;
    string name;
    float price;

    cout << "Enter Product ID: ";
    cin >> id;
    cin.ignore();

    cout << "Enter Product Name: ";
    getline(cin, name);

    cout << "Enter Unit Price: ";
    cin >> price;

    cout << "Enter Quantity: ";
    cin >> qty;

    Discount d(id, name, price, qty);

    d.calculateTotal();
    d.calculateDiscount();
    d.display();

    return 0;
}