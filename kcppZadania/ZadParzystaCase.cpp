#include <iostream>

using namespace std;

bool czyParzysta(int n) {
    if (n % 2 == 0) {
        return true;
    } return false;
}


bool czyParzystaBity(int n) {
    if (n & 1)
    {
        return false;
    } return true;
    
}

bool czyParzystaInnySposob(int n) {
    return n % 2 == 0 ? true : false;
}


void Opcja() {
    cout << "Podaj liczbe: ";
    int num;
    cin >> num;
    cout << "Ktorej funkcji uzywamy? : ";
    int opcja;
    cin >> opcja;

    switch (opcja) {
        case 1:
            cout << "Wynik opcji pierwszej dla liczby " + to_string(num) + " : ";
            cout << czyParzysta(num) << endl;
            break;
        case 2:
            cout << "Wynik opcji drugiej dla liczby " + to_string(num) + " : ";
            cout << czyParzystaBity(num) << endl;
            break;
        case 3:
            cout << "Wynik opcji trzeciej dla liczby " + to_string(num) + " : ";
            cout << czyParzystaInnySposob(num) << endl;
            break;
    }
}

int main() {
   Opcja();
}