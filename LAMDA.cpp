#include <iostream>
#include <vector>
#include <string>
#include <stack>
using namespace std;
class Ammo {
protected:
    int damage;
public:
    virtual int getDamage() = 0;
};
class Ammo556 : public Ammo {
};
class Ammo762 : public Ammo {
};
class Ammo919 : public Ammo {
};
class Ammo556PS : public Ammo {
public:
    Ammo556PS(int damage) {
        this->damage = damage;
    }
 
int getDamage() { return this->damage; }
};
class Ammo556BP : public Ammo {
    Ammo556BP(int damage) {
        this->damage = damage;
    }

    int getDamage() { return this->damage; }
};
class Ammo919PS : public Ammo {
    Ammo919PS(int damage) {
        this->damage = damage;
    }

    int getDamage() { return this->damage; }
};
class Ammo919BP : public Ammo {
    Ammo919BP(int damage) {
        this->damage = damage;
    }

    int getDamage() { return this->damage; }
};
class Ammo762PS : public Ammo {
    Ammo762PS(int damage) {
        this->damage = damage;
    }

    int getDamage() { return this->damage; }
};
class Ammo762BP : public Ammo {
    Ammo762BP(int damage) {
        this->damage = damage;
    }

    int getDamage() { return this->damage; }
};


class Human {
private:

public:


};

class Weapon {
private:



};


class Magazin {
public:


};
class Magazin556 {
    stack<Ammo556>bullets;
};
class Magazin762 {
    stack<Ammo762>bullets;
};
class Magazin919 {
    stack<Ammo919>bullets;
int main()
{
    Ammo556PS ammo1(50);
    Ammo556BP ammo2(60);
    Ammo762PS ammo3(70);
    Ammo762BP ammo4(80);
    Ammo919BP ammo6(90);
    Ammo919PS ammo5(100);

    //Ammo556* ammo1 = new Ammo556BP(60);
    //Ammo556* ammo2 = new Ammo556PS(50);

    //cout << ammo1->getDamage() << endl;
    //cout << ammo2->getDamage() << endl;
    //cout << ammo3->getDamage() << endl;
    //cout << ammo4->getDamage() << endl;
    //cout << ammo5->getDamage() << endl;
    //cout << ammo6->getDamage() << endl;
}

