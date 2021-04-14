
#include <iostream>

using namespace std;

int main() {

    int x;
    int arr[] = {10, 9, 8};
    int* q = arr;

    for (x=0; x<3; x++) {
        cout << x[q] << " == ";
        cout << q[x] << endl;
    }
    return 0;
}