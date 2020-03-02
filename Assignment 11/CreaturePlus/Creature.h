/*
CH-230-A
a10 p4.c
Abhilekh Pandey
ab.pandey@jacobs-universi
*/

// Begin Parent Class Creature
class Creature
{
public:
    Creature();       // Empty constructor for Critter
    virtual void run() const; // Run function for Critter. Can be used by inheritance classes.

protected:
    int distance;
};

// Begin Inheritance Class Wizard
class Wizard : public Creature
{
public:
    Wizard();           // Empty constructor for Wizard
    void hover() const; // Function specific to Wizard

private:
    int distFactor; // Variable specific to Wizard
};

// Begin Inheritance Class Jesus
class Jesus : public Creature
{
public:
    Jesus();                  // Empty constructor for Jesus
    void WalkOnWater() const; // Function specific to Jesus

private:
    int SuchAmaze; // Variable specifc to Jesus
};

// Begin Inheritance Class Eagle
class Eagle : public Creature
{
public:
    Eagle();              // Empty constructor for Eagle
    void FREEDOM() const; // Function specific to Jesus
    void run() const;     // Overrides the defalut run function of the parent class.

private:
    float Airspeed; // Variable specific to Eagle.
};