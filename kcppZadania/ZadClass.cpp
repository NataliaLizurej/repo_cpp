
#include <iostream>
using namespace std;

class Math {
    public:
        Math() {};
    int add(int x, int y);
    int substract(int x, int y);
};

int Math::add(int x, int y) {
    return x + y;
}

int Math::substract(int x, int y) {
    return x - y;
}

class MathNum2 {
    public:
        MathNum2() {};

    int add(int x, int y) {
        return x + y;
    }
    int substract(int x, int y) {
        return x - y;
    }
};

class Person {
    private:
        string firstName;
        string lastName;
    public:
        Person(string _firstName, string _lastName) {
            firstName = _firstName;
            lastName = _lastName;
        }
        string getFirstName() {
            return firstName;
        }

        string getLastName(){
            return lastName;
        }

        void info() {
            cout << "First name: " << getFirstName() << endl;
            cout << "Last name: " << getLastName() << endl;
        }
};

int main() {
    Math math = Math();
    cout << math.add(8, 2) << endl;
    cout << math.substract(8, 2) << endl;
    MathNum2 mathnum2 = MathNum2();
    cout << mathnum2.add(5, 5) << endl;
    cout << mathnum2.substract(5, 5) << endl;
    Person person = Person("Jan", "Kowalski");
    person.info();
    
    return 0;
}