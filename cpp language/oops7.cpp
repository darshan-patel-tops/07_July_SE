#include <iostream>
using namespace std;

class dada {
public:
    int zameen() {
        cout << "Zameen" << endl;
    }
};

class kaka : public dada {
public:
    void car() {
        cout << "Car" << endl;
    }
};

class papa : public dada {
public:
    void house() {
        cout << "House" << endl;
    }
};

class beta : public papa, public kaka {
public:
    void bike() {
        cout << "Bike" << endl;
    }
};

int main() {
    beta b;
    b.bike();
    b.car();
    b.house();
    b.papa::zameen();  // Specify which base class's zameen() to call
}
