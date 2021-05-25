
#include <iostream>
using namespace std;

class Pojazd {
private:
    int cena;
    string model;
    string kolor;
public:
    Pojazd() {
        cena = 0;
        model = "None";
        kolor = "None";
    };
    Pojazd(string _model, string _kolor) {
        cena = 0;
        model = _model;
        kolor = _kolor;
    };
    Pojazd(string _model, string _kolor, int _cena) : model(_model), kolor(_kolor), cena(_cena) {};

    void info() {
        cout << "Cena: " << cena << endl;
        cout << "Model: " << model << endl;
        cout << "Kolor: " << kolor << endl;
    }
};

int main() {
    Pojazd s1 = Pojazd("a10", "zielony", 34000);
    s1.info();
}
