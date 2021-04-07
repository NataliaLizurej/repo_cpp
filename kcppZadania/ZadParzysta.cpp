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

int main() {
    cout << czyParzysta(10) << endl;
    cout << czyParzystaBity(10) << endl;
    cout << czyParzystaInnySposob(10) << endl;
}