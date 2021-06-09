#include <iostream>
#include "ZadKcpp.cpp"

using namespace std;

class Program {
    ZadKcpp zad;
public:
    Program() {
        zad = ZadKcpp();
        int liczba = wybor();
        cw(liczba);
    }

private:
    int wybor() {
        int x;
        cout <<"Wybierz numer od 1 do 5: " << endl;
        cout <<"1.Main " << endl;
        cout <<"2.Zwracanie przez funkcje" << endl;
        cout <<"Arytmetyka - wskazniki" << endl;
        cout <<"Operacje we/wy" << endl;
        cout <<"Klasy" << endl;
        cin >> x;
        return x;
    }

void cw(int liczba) {
    int l;
    cout <<"Wybierz numer" << endl;
    switch(liczba) {
        case 1:
            cout <<"1.ZadMainExample" << endl;
            cin >> l;
            if (l == 1) {
                zad.r_ZadMainExample();
            }
            break;
        case 2:
            cout <<"1.ZadZwracanie" << endl;
            cout <<"2.ZadPrzekazywanieTablic" << endl;
            cin >> l;
            switch(l) {
                case 1:
                    zad.r_ZadZwracanie();
                    break;
                case 2:
                    zad.r_ZadPrzekazywanieTablic();
                    break;
            }
            break;
        case 3:
            cout <<"1.ZadAdresowaniePamieci" << endl;
            cout <<"2.ZadIq" << endl;
            cout <<"3.ZadArytmetykaWskaznikow" << endl;
            cout <<"4.ZadWywolanieFunkcji" << endl;
            cout <<"5.ZadOperatoryPrzypisania" << endl;
            cout <<"6.ZadBin2Dec" << endl;
            cout <<"7.ZadDec2Bin" << endl;
            cin >> l;
            switch(l) {
                case 1:
                    zad.r_ZadAdresowaniePamieci();
                    break;
                case 2:
                    zad.r_ZadIq();
                    break;
                case 3:
                zad.r_ZadArytemtykaWskaznikow();
                    break;
                case 4:
                    zad.r_ZadWywolanieFunkcji();
                    break;
                case 5:
                    zad.r_ZadOperatoryPrzypisania();
                    break;
                case 6:
                    zad.r_ZadBin2Dec();
                    break;
                case 7:
                    zad.r_ZadDec2Bin();
                    break;
            }
            break;
        case 4:
            cout <<"1.LManipulacjaStrumieniemCout" << endl;
            cout <<"2.ZadCandCPP" << endl;
            cout <<"3.ZadParzysta" << endl;
            cout <<"4.ZadParzysteCase" << endl;
            cout <<"5.Petle" << endl;
            cout <<"6.Switch" << endl;
            switch(l) {
                case 1:
                    zad.r_LManipulacjaStrumieniemCout();
                    break;
                case 2:
                    zad.r_ZadCandCPP();
                    break;
                case 3:
                    zad.r_ZadParzysta();
                    break;
                case 4:
                    zad.r_ZadParzystaCase();
                    break;
                case 5:
                    zad.r_ZadPetle();
                    break;
                case 6:
                    zad.r_ZadSwitch();
                    break;
            }
            break;
        case 5:
            cout <<"1.ZadStruct" << endl;
            cout <<"2.ZadUnia" << endl;
            cout <<"3.ZadKlasaKonstruktor" << endl;
            cin >> l;
            switch(l) {
                case 1:
                    zad.r_ZadStruct();
                    break;
                case 2:
                    zad.r_ZadUnia();
                    break;
                case 3:
                    zad.r_ZadKlasaKonstruktor();
                    break;
            }
            break;
        }   
    }
};

int main() {
    Program program = Program();
}
