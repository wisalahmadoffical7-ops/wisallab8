#include <iostream>
using namespace std;

struct Rectangle
{
    float length;
    float width;
};

int main()
{
    Rectangle r1;

    cout << "Enter length: ";
    cin >> r1.length;

    cout << "Enter width: ";
    cin >> r1.width;

    float area = r1.length * r1.width;
    float perimeter = 2 * (r1.length + r1.width);

    cout << "\nArea of Rectangle: " << area << endl;
    cout << "Perimeter of Rectangle: " << perimeter << endl;

    return 0;
}
