#include <iostream>

using namespace std;

bool czyParzysta(int n) {
    if (n % 2 == 0) {
        return true;
    } return false;
}

int main() {
    cout << czyParzysta(10) << endl;
}