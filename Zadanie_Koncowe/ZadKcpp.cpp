#include <iostream>
#include <math.h>
#include <iomanip>
#include<fstream>
#define liczbaObrotow 10

using namespace std;


class ZadKcpp {
    class ZadMainExample {
        private:
            void printNumbers() {
            printf("123");
        }

        int addNumbers(int a, int b) {
            return a + b;
        }

        int multiplyTwo(int c) {
            return c * 2;
        }

        public:
            void run() {
                cout << "Funkcja printNumbers: " << endl;
                printNumbers(); 
                cout <<"" << endl;
                cout << "Funkcja addNumbers: " << endl;
                cout << addNumbers(1, 1) << endl;
                cout << "Funkcja multiplyTwo: " << endl;
                cout << multiplyTwo(2) << endl;
            }
    };


    class ZadZwracanie {
        private:
            int przez_Wskaznik(int *x) {
            int i = *x;
            return i;
        }

            int przez_Referencje(int &x) {
            int i = x;
            return i;
        }


            int przez_Wartosc(int x) {
            return x;
        }

            int* tablica() {
            static int array[5] = {0,3,6,9,10};
            return array;
        }

        public:
            void run() {
                int x = 1;
                cout <<  przez_Referencje(x) << endl;
                cout <<  przez_Wartosc(x) << endl;
                cout << tablica() << endl;
                int *y = &x;
                cout <<  przez_Wskaznik(y) << endl;
            }
    };



    class ZadPrzekazywanieTablic {
        private:
            void tablice(int *tab, int dl) {
                for(int x=0; x<dl; x++) {
                cout<<"Numer indeksu: "<< x <<" -> "<<tab[x]<<endl;
            }
        }

        public:
            void run() {
                int tab[] = {3,6,9,12};
                tablice(tab,sizeof(tab)/sizeof(tab[0]));
            }

    };


    class ZadAdresowaniePamieci {
        public:
            void run() {
                int x, y, z;
                x = 5;
                y = 10;
                z = 15;

                cout << "X: " << &x << " Wartosc: " << x <<  endl;
                cout << "Y: " << &y << " Wartosc: " << y <<  endl;
                cout << "Z: " << &z << " Wartosc: " << z <<  endl;
            }
    };



    class ZadIq {
        public:
            void run() {
                int x;
                int arr[] = {10, 9, 8};
                int* q = arr;

                for (x=0; x<3; x++) {
                    cout << x[q] << " == ";
                    cout << q[x] << endl;
                    }
            }
    };



    class ZadArytmetykaWskaznikow {
        private:
            void Funkcja1() {
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

        public:
            void run() {
                 Funkcja1();
            }
    };



    class ZadOperatoryPrzypisania {
        private:
            void OperatoryPrzypisania() {
            int a = 1;
            cout << a << endl;
            a += 5;
            cout << a << endl;
            a *= 5;
            cout << a << endl;
            a -= 5;
            cout << a << endl;
            a /= 5;
            cout << a << endl;
            a %= 5;
        cout << a << endl;
        }

            void OperatoryArytmetyczne() {
            int a = 1;
            cout << a << endl;
            a = a + 5;
            cout << a << endl;
            a = a * 5;
            cout << a << endl;
            a = a - 5;
            cout << a << endl;
            a = a / 5;
            cout << a << endl;
            a = a % 5;
            cout << a << endl;
        }

        public:
            void run() {
                 OperatoryArytmetyczne();
                 cout << "*****" << endl;
                 OperatoryPrzypisania();
            }
    };


    class ZadBin2Dec {
        private:
            int binToDec(long long x) {
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

        public:
            void run() {
                cout << binToDec(1010);
            }
        
    };


    class ZadDec2Bin {
        private:
            string decToBin(int x) {
            string s;
            while (x != 0){
                s += (x%2 == 0 ? "0" : "1" );
                x/=2;
            }
            return s;
        }

        public:
            void run() {   
                cout << decToBin(30);
            }
    };




    class LManipulacjaStrumieniemCout {
        public:
            void run() {
                    cout << setw(10);
                    cout << "Hello" << endl;
                    cout << setprecision(5) << 3.14159 << endl;
                    cout << setfill('.') << setw(10);
                    cout << "hello" << endl;
                    double x = 3.1415926534;
                    double y = 2006.0;
                    double z = 1.0e-10;
                    cout << "fixed:\n" << fixed;
                    cout << x << '\n' << y << '\n' << z << '\n';
                    cout << "scientific:\n" << scientific;
                    cout << x << '\n' << y << '\n' << z << '\n';
                    cout << hex << 70 << endl;
                    cout << dec << 70 << endl;
                    cout << oct << 70 << endl;
            }
    };



    class ZadParzysta {
        private:
            bool czyParzysta(int n) {
                if (n % 2 == 0) {
                return true;
            } return false;
        }


            bool czyParzystaBity(int n) {
                if (n & 1) {
                return false;
            } return true;
    
        }

            bool czyParzystaInnySposob(int n) {
                return n % 2 == 0 ? true : false;
        }

        public:
            void run() {
                    cout << czyParzysta(10) << endl;
                    cout << czyParzystaBity(10) << endl;
                    cout << czyParzystaInnySposob(10) << endl;
            }
    };


    class ZadParzysteCase {
        private:     
        bool czyParzysta(int n) {
            if (n % 2 == 0) {
            return true;
        } return false;
    }


        bool czyParzystaBity(int n) {
            if (n & 1) {
            return false;
        } return true;
    }

        bool czyParzystaInnySposob(int n) {
            return n % 2 == 0 ? true : false;
    }


        void Opcja() {
        cout << "Podaj liczbe: ";
        int num;
        cin >> num;
        cout << "Ktorej funkcji uzywamy? : ";
        int opcja;
        cin >> opcja;

        switch (opcja) {
            case 1:
                cout << "Wynik opcji pierwszej dla liczby " + to_string(num) + " : ";
                cout << czyParzysta(num) << endl;
                break;
            case 2:
                cout << "Wynik opcji drugiej dla liczby " + to_string(num) + " : ";
                cout << czyParzystaBity(num) << endl;
                break;
            case 3:
                cout << "Wynik opcji trzeciej dla liczby " + to_string(num) + " : ";
                cout << czyParzystaInnySposob(num) << endl;
                break;
            }
        }

        public:
            void run() {
                Opcja();
            }

    };



    class ZadPetle {
        private:
            void petlaFor(){
            cout <<"Petla for" << endl;
            for(int x=0; x<10; x++){
                cout << "Przejscie: " << x << endl;
            }
        }

            void petlaWhile() {
            cout <<"Petla While" << endl;
            int i = 0;
            while (true) {
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

        public:
            void run() {
                petlaFor();
                petlaWhile();
                petlaDoWhile();
            }
    };


    class ZadSwitch {
        private:
            enum code {
            Hi,
            Everyone
        };

        code hi() {
        return Hi;
        }

        public:
            void run() {
                  switch (hi()) {
                    case Hi:
                        cout << "Ciag znakow 'Hi' " << endl;
                        break;
                    case Everyone:
                        cout << "Ciag znakow 'World' " << endl;
                        break;
                    }
            }
    };


    class ZadStruct {
        private:
            struct Student {
            string imie;
            string nazwisko;
            };

        public:
            void run() {
                Student s1 = {"Jan", "Kowalski"};
                Student s2 = {"Maja", "Nowak"};

                Student students[3] = {s1, s2};
                    for (int i=0; i<2; i++) {
                        cout << students[i].imie << endl;
                        cout << students[i].nazwisko << endl;
                    }
            }
    };


    class ZadUnia {
        private:   
            union Unia{
            int first;
            float second;
            };


        public:
            void run() {
                Unia a, b;
                a.first = 1;
                a.second = 2;
                b.first = 3;
                b.second = 4;
    

                a.first = 1;
                cout << "a.first: " << a.first << " a.second: " << a.second << endl;
                a.second = 2;
                cout << "a.first: " << a.first << " a.second: " << a.second << endl;
            }
    };


    class ZadKlasaKonstruktor {
        private:
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

        public:
            void run() {
                Pojazd s1 = Pojazd("a10", "zielony", 34000);
                s1.info();
            }
    };


    class ZadWywolanieFunkcji {
        private:
            void function1(){
                cout << "To jest funkcja nr.1" << endl;
            }

            void function2(){
                cout << "To jest funkcja nr.2" << endl;
            }

            void wybor(){
            int zm;
            cout << "Ktora funkcje chcesz wybrac" << endl;
            cin >> zm;
            switch (zm)
            {
            case 1:
                function1();
                break;
            case 2:
                function2();
                break;
            default:
                cout << "Wybrales nieprawidlowa liczbe!" << endl;
                break;
            }
        }

        public:
            void run() {
                wybor();
            }
    };


    class ZadCandCPP {
        public:
            void run() {
                printf("Hello World\n");
                cout << "Hello World";
            }
    };




    public:
        void r_ZadMainExample() {
            ZadMainExample zad1 = ZadMainExample();
            zad1.run();
        }


        void r_ZadZwracanie() {
            ZadZwracanie zad2 = ZadZwracanie();
            zad2.run();
        }

        void r_ZadPrzekazywanieTablic() {
            ZadPrzekazywanieTablic zad3 = ZadPrzekazywanieTablic();
            zad3.run();
        }

        void r_ZadAdresowaniePamieci() {
            ZadAdresowaniePamieci zad4 = ZadAdresowaniePamieci();
            zad4.run();
        }

        void r_ZadIq() {
            ZadIq zad5 = ZadIq();
            zad5.run();
        }

        void r_ZadArytemtykaWskaznikow() {
            ZadArytmetykaWskaznikow zad6 = ZadArytmetykaWskaznikow();
            zad6.run();
        }

        void r_ZadOperatoryPrzypisania() {
            ZadOperatoryPrzypisania zad7 = ZadOperatoryPrzypisania();
            zad7.run();
        }

        void r_ZadBin2Dec() {
            ZadBin2Dec zad8 = ZadBin2Dec();
            zad8.run();
        }

        void r_ZadDec2Bin() {
            ZadDec2Bin zad9 = ZadDec2Bin();
            zad9.run();
        }

        void r_LManipulacjaStrumieniemCout() {
            LManipulacjaStrumieniemCout zad10 = LManipulacjaStrumieniemCout();
            zad10.run();
        }

        void r_ZadParzysta() {
            ZadParzysta zad11 = ZadParzysta();
            zad11.run();
        }

        void r_ZadParzystaCase() {
            ZadParzysteCase zad12 = ZadParzysteCase();
            zad12.run();
        }

        void r_ZadPetle() {
            ZadPetle zad13 = ZadPetle();
            zad13.run();
        }

        void r_ZadSwitch() {
            ZadSwitch zad14 = ZadSwitch();
            zad14.run();
        }

        void r_ZadStruct() {
            ZadStruct zad15 = ZadStruct();
            zad15.run();
        }

        void r_ZadUnia() {
            ZadUnia zad16 = ZadUnia();
            zad16.run();
        }

        void r_ZadKlasaKonstruktor() {
            ZadKlasaKonstruktor zad17 = ZadKlasaKonstruktor();
            zad17.run();
        }

        void r_ZadWywolanieFunkcji() {
            ZadWywolanieFunkcji zad18 = ZadWywolanieFunkcji();
            zad18.run();
        }

        void r_ZadCandCPP() {
            ZadCandCPP zad19 = ZadCandCPP();
            zad19.run();
        }

};

