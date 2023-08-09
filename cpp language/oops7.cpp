#include <iostream>
using namespace std;

class dada {
public:
    int zameen() {
        cout << " dada ka Zameen" << endl;
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
	void zameen()
	{
		papa::zameen();
		cout<<"Bete ka zameen"<<endl;
	}
    void bike() {
        cout << "Bike" << endl;
    }
};

int main() {
    beta b;
    b.bike();
    b.car();
    b.house();
    b.zameen();
    b.papa::zameen();  // Specify which base class's zameen() to call
    b.kaka::zameen();  // Specify which base class's zameen() to call
}
