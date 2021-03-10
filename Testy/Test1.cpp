#include <iostream>

using namespace std;

namespace n  {
    int x = 2;
    int y = 2;
}


using namespace n;

int add(int n1, int n2) {
    return n1 + n2;
}

int main() {
    cout << add(x, y) << endl;
    return 0;
}