/*
CH-230-A
a10 p4.c
Abhilekh Pandey
ab.pandey@jacobs-universi
*/

#include <iostream>

using namespace std;

// Begin Parent Class Creature
class Creature
{
public:
    Creature();
    void run() const;

protected:
    int distance;
};

Creature::Creature() : distance(10)
{
}

void Creature::run() const
{
    cout << "running " << distance << " meters!\n";
}
// End Creature

// Begin Inheritance Class Wizard
class Wizard : public Creature
{
public:
    Wizard();
    void hover() const;

private:
    int distFactor;
};

Wizard::Wizard() : distFactor(3)
{
}

void Wizard::hover() const
{
    cout << "hovering " << (distFactor * distance) << " meters!\n";
}
// End Inheritance Class Wizard

// Begin Inheritance Class Jesus
class Jesus : public Creature
{
    public:
    Jesus();
    void WalkOnWater() const;

    private:
    int SuchAmaze;
};

Jesus::Jesus() : SuchAmaze(69)
{
}

void Jesus::WalkOnWater() const
{
    cout << "Walking " << (SuchAmaze * distance) << " meters ON WATER!\n";
}
// End Inheritance Class Jesus

// Begin Inheritance Class Eagle
class Eagle : public Creature
{
    public:
    Eagle();
    void FREEDOM() const;
    void run() const;

    private:
    float Airspeed;
};

Eagle::Eagle() : Airspeed(4.20)
{
}

void Eagle::run() const
{
    cout << "I ain't the one who's doing the running though.\n"; 
}

void Eagle::FREEDOM() const
{
    cout << "Delivering Freedom at " << (Airspeed * distance) << " countries per second.\n";
}
// End Inheritance Class Eagle


int main()
{
    cout << "Creating an Creature.\n";
    Creature c;
    c.run();

    cout << "\nCreating a Wizard.\n";
    Wizard w;
    w.run();
    w.hover();

    cout << "\nJesus is born.\n";
    Jesus J;
    J.run();
    J.WalkOnWater();

    cout << "\n 'Murica\n";
    Eagle A;
    A.run();
    A.FREEDOM();

    return 0;
}