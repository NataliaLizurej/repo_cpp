#include <iostream>

using namespace std;

extern "C"  {
    void printHello();
    void printWorld();
}

void printNumbers() {
    printf("123");
}

int addNumbers(int a, int b) {
    return a + b;
}

int multiplyTwo(int c) {
    return c * 2;
}


int main() {
    cout << "Funkcja printHello: " << endl;
    printHello();
    cout << '\n';
    cout << "Funkcja printWorld: " << endl;
    printWorld();
    cout << '\n';
    cout << "Funkcja prinNumbers: " << endl;
    printNumbers();
    cout << '\n';
    cout << "Funkcja addNumbers: " << endl;
    cout << addNumbers(1, 1) << endl;
    cout << '\n';
    cout << "Funkcja multiplyTwo: " << endl;
    cout << multiplyTwo(2) << endl;
    return 0;
}
