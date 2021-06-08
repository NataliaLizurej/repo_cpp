#include <iostream>
using namespace std;

void petlaFor(){
    cout <<"Petla for" << endl;
    for(int x=0; x<10; x++){
        cout << "Przejscie: " << x << endl;
    }
}

void petlaWhile() {
    cout <<"Petla While" << endl;
    int i = 0;
    while (true)
    {
        if (i++ == 4)
            continue;

        if (++i >= 7)
            break;
        cout << i << endl;
    }
}

void petlaDoWhile(){
    cout <<"Petla do while" << endl;
    int i = 0, end = 10;
    do{
        i++;
        if(i == 5)
            continue;
        cout << "Przejscie: " << i << endl;
    }while(i < end);

    do{
        ++i;
        cout << "Przejscie: " << i << endl;
        
    }while(i < 2*end);
}


int main(){
    petlaFor();
    petlaWhile();
    petlaDoWhile();
}