#include <iostream>

using namespace std;

enum code {
    Hi,
    Everyone
};

code hi() {
    return Hi;
}

int main() {
    switch (hi()) {
        case Hi:
            cout << "Ciag znakow 'Hi' " << endl;
            break;
        case Everyone:
            cout << "Ciag znakow 'World' " << endl;
            break;
    }
    return 0;
}