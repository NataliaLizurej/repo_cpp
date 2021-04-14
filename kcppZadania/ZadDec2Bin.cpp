  
#include <iostream>

using namespace std;

string decToBin(int x)
{
    string s;
    while (x != 0){
        s += (x%2 == 0 ? "0" : "1" );
        x/=2;
    }
    return s;
}

int main() {
   cout << decToBin(30);
}