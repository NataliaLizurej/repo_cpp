  
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    cout << setw(10);
    cout << "Hello" << endl;
    cout << setprecision(5) << 3.14159 << endl;
    cout << setfill('.') << setw(10);
    cout << "hello" << endl;

    double x = 3.1415926534;
    double y = 2006.0;
    double z = 1.0e-10;

    cout << "fixed:\n" << fixed;
    cout << x << '\n' << y << '\n' << z << '\n';

    cout << "scientific:\n" << scientific;
    cout << x << '\n' << y << '\n' << z << '\n';

    cout << hex << 70 << endl;
    cout << dec << 70 << endl;
    cout << oct << 70 << endl;

}