#include <iostream>

using namespace std;

namespace n  {
    int x = 2;
    int y = 2;

    void fun1() {
      cout << "Hello" << endl;
    }
}


using namespace n;

int add(int n1, int n2) {
    return n1 + n2;
}

int main() {
    fun1();
    cout << add(x, y) << endl;
    return 0;
}