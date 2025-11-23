#include <iostream>
using namespace std;

class Member {
public:
    string name;
    int validity;

    void renew(int months) {
        validity += months;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Validity: " << validity << " months" << endl;
    }
};

int main() {
    Member m1, m2;

    m1.name = "Ali";
    m1.validity = 12;

    m2.name = "Bashir";
    m2.validity = 6;

    m1.renew(6);
    m2.renew(12);

    m1.display();
    m2.display();

    return 0;
}

