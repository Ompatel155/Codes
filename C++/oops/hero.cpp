#include <iostream>
using namespace std;

class Hero {
protected:
    int power;
public:
    void set_power(int p) {
        power = p;
    }
    int get_power() {
        return power;
    }
};

class Villain {
protected:
    int power;
public:
    void set_power(int p) {
        power = p;
    }
    int get_power() {
        return power;
    }
};

class Comparison : private Hero, private Villain {
public:
    void power_comp(Hero &H, Villain &V) {
        if (H.get_power() > V.get_power()) {
            cout << "Hero is stronger!" << endl;
        }
        else if (H.get_power() < V.get_power()) {
            cout << "Villain is stronger!" << endl;
        }
        else {
            cout << "Both have equal power!" << endl;
        }
    }
};

int main() {
    Hero CA;       // Captain America
    Villain Skull; // Red Skull

    CA.set_power(1000000);
    Skull.set_power(70);

    Comparison C;
    C.power_comp(CA, Skull);
}
