  
#include <iostream>

using namespace std;


void OperatoryPrzypisania() {
    int a = 1;
    cout << a << endl;
    a += 5;
    cout << a << endl;
    a *= 5;
    cout << a << endl;
    a -= 5;
    cout << a << endl;
    a /= 5;
    cout << a << endl;
    a %= 5;
    cout << a << endl;
}

void OperatoryArytmetyczne() {
    int a = 1;
    cout << a << endl;
    a = a + 5;
    cout << a << endl;
    a = a * 5;
    cout << a << endl;
    a = a - 5;
    cout << a << endl;
    a = a / 5;
    cout << a << endl;
    a = a % 5;
    cout << a << endl;
}


int main() {
    OperatoryArytmetyczne();
    OperatoryPrzypisania();
}
