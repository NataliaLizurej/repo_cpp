
#include <iostream>
#include <cmath>

using namespace std;

int binToDec(long long x)
{
    int decNum = 0, y = 0, r;
    while (x!=0)
    {
        r = x%10;
        x /= 10;
        decNum += r*pow(2,y);
        ++y;
    }
    return decNum;
}

int main() {
    cout << binToDec(1010);
}