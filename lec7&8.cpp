#include <iostream>
#include <iomanip>   // for setw
using namespace std;

int main()
{
    // 🔹 Variables example
    int a = 44;
    cout << "Initial value of a: " << a << endl;

    a = 45;
    cout << "Updated value of a: " << a << endl;

    // 🔹 Constant example
    const double b = 5.99;
    cout << "Value of constant b: " << b << endl;

    // 🔹 Manipulators (setw)
    int x = 44, b1 = 47, c = 3849;

    cout << "\nWithout setw:" << endl;
    cout << "x = " << x << endl;
    cout << "b1 = " << b1 << endl;
    cout << "c = " << c << endl;

    cout << "\nWith setw:" << endl;
    cout << "x = " << setw(6) << x << endl;
    cout << "b1 = " << setw(6) << b1 << endl;
    cout << "c = " << setw(6) << c << endl;

    return 0;
}