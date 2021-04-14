#include <iostream>

using namespace std;

int * przez_Wskaznik() {
    static int x = 15;
    int *b = &x;
    return &x;
}

int& przez_Referencje() {
    static int x = 10;
    return x;
}


int przez_Wartosc(int x) {
    return x;
}

int* tablica() {
    static int array[5] = {0,3,6,9,10};
    return array;
}

int main() {
    return 0;
}