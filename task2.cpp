#include <iostream>
using namespace std;

struct Laptop
{
    string brand;
    int ram;
    float price;
};

int main()
{
    Laptop l1;

    cout << "Enter laptop brand: ";
    cin >> l1.brand;

    cout << "Enter RAM in GB: ";
    cin >> l1.ram;

    cout << "Enter laptop price: ";
    cin >> l1.price;

    cout << "\nLaptop Specifications:" << endl;
    cout << "Brand: " << l1.brand << endl;
    cout << "RAM: " << l1.ram << " GB" << endl;
    cout << "Price: " << l1.price << endl;

    return 0;
}
