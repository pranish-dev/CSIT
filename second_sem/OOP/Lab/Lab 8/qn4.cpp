#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Book
{
private:
    string title;
    string author;
    float price;

public:
    void inputBook()
    {
        cout << "Enter title: ";
        cin >> title;
        cout << "Enter author: ";
        cin >> author;
        cout << "Enter price: ";
        cin >> price;
    }

    void displayBook() const
    {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Price: " << price << endl;
    }

    friend ostream &operator<<(ostream &out, const Book &b);
    friend istream &operator>>(istream &in, Book &b);
};

ostream &operator<<(ostream &out, const Book &b)
{
    out << b.title << " " << b.author << " " << b.price << endl;
    return out;
}

istream &operator>>(istream &in, Book &b)
{
    in >> b.title >> b.author >> b.price;
    return in;
}

int main()
{
    int n;
    cout<<"Enter number of books: ";
    cin>>n;
    Book books[n];

    cout << "Enter details of " << n << " books:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Book " << i + 1 << endl;
        books[i].inputBook();
    }

    ofstream outFile("books.txt");
    if (!outFile)
    {
        cout << "Error opening file for writing." << endl;
        return 1;
    }

    for (int i = 0; i < n; i++)
    {
        outFile << books[i];
    }
    outFile.close();

    ifstream inFile("books.txt");
    if (!inFile)
    {
        cout << "Error opening file for reading." << endl;
        return 1;
    }

    cout << "\nBooks stored in file:" << endl;
    Book b;
    while (inFile >> b)
    {
        b.displayBook();
        cout << "-------------------" << endl;
    }
    inFile.close();

    return 0;
}
