#include <iostream>
#include <string>
using namespace std;

template <typename T>
class Item
{
protected:
    string code;
    T price;

public:
    Item(string c, T p) : code(c), price(p) {}

    void display()
    {
        cout << "Item Code: " << code << endl;
        cout << "Price: " << price << endl;
    }
};

class DiscountedItem : public Item<double>
{
private:
    double discountPercent;

public:
    DiscountedItem(string c, double p, double d) : Item<double>(c, p), discountPercent(d) {}

    double finalPrice()
    {
        return price - (price * discountPercent / 100);
    }

    void display()
    {
        Item<double>::display();
        cout << "Discount: " << discountPercent << "%" << endl;
        cout << "Final Payable Price: " << finalPrice() << endl;
    }
};

int main()
{
    DiscountedItem item("A101", 1500.0, 10.0);
    item.display();

    return 0;
}
