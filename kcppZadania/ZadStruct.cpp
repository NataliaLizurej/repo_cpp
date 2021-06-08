#include <iostream>
using namespace std;

struct Student {
    string imie;
    string nazwisko;
};

int main() {
    Student s1 = {"Jan", "Kowalski"};
    Student s2 = {"Maja", "Nowak"};

    Student students[3] = {s1, s2};
    for (int i=0; i<2; i++) {
        cout << students[i].imie << endl;
        cout << students[i].nazwisko << endl;
    }
}