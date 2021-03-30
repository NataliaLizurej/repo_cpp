#include <iostream>

using namespace std;

void Funkcja1()
{
    int *p;
    int x = 5;
    p = &x;

    cout << p++ << endl;
    cout << ++p << endl;
    cout << ++*p << endl;
    cout << ++(*p) << endl;
    cout << ++*(p) << endl;
    cout << *p++ << endl;
    cout << (*p)++ << endl;
    cout << *(p)++ << endl;
    cout << *++p << endl;
    cout << *(++p) << endl;
}




int main()
{
 Funkcja1();
}