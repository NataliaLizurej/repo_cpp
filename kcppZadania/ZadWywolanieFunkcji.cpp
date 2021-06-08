#include <iostream>
#include <stdlib.h>  

using namespace std;

void function1(){
    cout << "To jest funkcja nr.1" << endl;
}

void function2(){
    cout << "To jest funkcja nr.2" << endl;
}

void wybor(){
    int zm;
    cout << "Ktora funkcje chcesz wybrac" << endl;
    cin >> zm;
    switch (zm)
    {
    case 1:
        function1();
        break;
    case 2:
        function2();
        break;
    default:
        cout << "Wybrales nieprawidlowa liczbe!" << endl;
        break;
    }
}

int main() {
    wybor();
}