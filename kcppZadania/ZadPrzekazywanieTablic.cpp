#include <iostream>

using namespace std;

void tablice(int *tab, int dl) {
        for(int x=0; x<dl; x++) {
        cout<<"Numer indeksu: "<< x <<" -> "<<tab[x]<<endl;
        }
    }
int main() {
    int tab[] = {3,6,9,12};
    tablice(tab,sizeof(tab)/sizeof(tab[0]));
}