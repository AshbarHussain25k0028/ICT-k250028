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

    m1.name = "imran";
    m1.validity = 10;

    m2.validity = 8;

    m1.renew(5);
    m2.renew(7);

    m1.display();
    m2.display();

    return 0;
}

