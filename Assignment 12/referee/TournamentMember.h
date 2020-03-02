/*
CH-230-A
a12 p3.c
Abhilekh Pandey
ab.pandey@jacobs-universi
*/

#include <cstring>
#include <string>
/*  A member of a football tournament
    Constructor Call:
    (Club, Role, FirstName, LastName, DOB, Speed)
*/
class TournamentMember
{
private:
    static std::string Location; // Location of the tournament
    char FirstName[36];
    char LastName[36];
    char DOB[11];
    int MemberNum;
    float salary;

public:
    // Deafult constructor for TournamentMember
    TournamentMember();
    /*  Parametric constructor for Tournament Member
        Constructor Call:
        (Club, Role, FirstName, LastName, DOB, Speed)
    */
    TournamentMember(const char*, const char*, const char*, const int=0, const float=0);
    // Copy Constructor for TournamentMember
    TournamentMember(const TournamentMember &);
    // Empty destructor for TournamentMember
    ~TournamentMember();

    // Static method to change the location of the tournament
    static void changeLocation(const std::string &newLocation);

    /*  Setter Functions: */
    // Sets the First name of the tournament member
    void setFName(const char *newFName);
    // Sets the last name of the tournament member
    void setLName(const char *newLName);
    // Sets the date of birth for the tournament member
    void setDOB(const char *newDOB);
    // Sets the age of the tournament member
    void setMemNum(const int newMemberNum);
    // Sets the salary of the tournament member
    void setSalary(const float newSalary);

    /*  Getter Functions */
    // Gets the location of the tournament
    static std::string getLocation();
    // Gets the club of the tournament member
    const char *getFName() const;
    // Gets the Lasr name (Character Array) of the tournament member
    const char *getLName() const;
    // Gets the DAte of birth (Character Array) of the tournament member
    const char *getDOB() const;
    // Gets the age of the tournament member
    int getMemNum() const;
    // Gets the salary of the tournament member
    float getSalary() const;

    /* Functions for the DOB */
    // (YYYY-MM-DD) Returns YYYY
    int getYear() const;
    // (YYYY-MM-DD) Returns MM
    int getMonth() const;
    // (YYYY-MM-DD) Returns DD
    int getDay() const;
    // Prints the information on the screen
    void print() const;

    /*  Operator overload for the comparision operator for Tournament Member
        Compares the First Name, Last Name and Member Number.
    */
   friend bool operator==(const TournamentMember& a, const TournamentMember& b);
};

/*  Tournament member that plays in the game
    Constructor Call:
    (First Name, Last Name, DOB, Member Number, Salary, Club, Player Number, Player Position, Player Dom Foot, Player Golas Scored)
*/
class Player : public TournamentMember
{
private:
    static std::string MemberType; // = "Player"; can't do this IDK why
    std::string club;
    int playerNumber;
    std::string playerPosition;
    std::string DominantFoot;
    int playerGoals;

public:
    // Default Constructor for Player
    Player();
    /*  Parametric Constructor for Player
        Constructor Call:
        (First Name, Last Name, DOB, Member Number, Salary,
         Club, Player Number, Player Position, Player Dom Foot, Player Golas Scored)
    */
    Player( const char *, const char *, const char *, const int, const float,\
            const std::string & = "Default_Club", const int = 0, const std::string & = "Benched",\
            const std::string & = "Unknown", const int =0);

    // Copy Constructor for Player
    Player(const Player&);
    // Destructor for Player
    ~Player();

    /* Setter Functions */
    // Sets the club of the player
    void setClub(const std::string& newClub);
    // Sets the number of the player
    void setPlNum(const int newNum);
    // Sets the position of the player
    void setPlPos(const std::string& newPos);
    // Sets the Dominant foot of the player
    void setPlFoot(const std::string& newFoot);
    // Sets the number of goals scored by the player (Deafult = 0)
    void setPlGoals(const int newGoal = 0);
        
    /* Getter Functions */
    // Gets the club of the player
    std::string getClub() const;
    // Gets the Number of the player
    int getPlNum() const;
    // Gets the Position of the player
    std::string getPlPos() const;
    // Gets the Dominant Foot of the player
    std::string getPlFoot() const;
    // Gets the number of goals scored by the player
    int getPlGoals() const;

    /* Usability Functions */
    // Increases the number of goals of a player by given value (Default 1)
    void SCORE(const int newGoal=1);
    // Prints the information of the player
    void print() const;

    /* Setting referee as friend of player so that it can access player class */
    // friend class Referee;  
};

class Referee : public TournamentMember
{
private:
    static std::string MemberType;
    int yellowCardCount;
    Player *yellowCardList[40];
    int redCardCount;
    Player *redCardList[40];

public:
    // Empty constructor for referee
    Referee();
    /*  Parametric constructor for referee
        Constructor Call:
        (First Name, Last Name, DOB, Member Number, Salary, Yellow card count, Red card count)
    */
    Referee(const char *, const char *, const char *, const int, const float, const int = 0, const int =0);
    // Copy constructor for referee
    Referee(const Referee&);
    // Destructor for referee 
    ~Referee();

    /* setter Functions */
    // Sets the Yellow Card Count
    void setYCard(const int newCount);
    // Sets the Red Card Count
    void setRCard(const int newCount);
    // Sets the array of player pointers (Yellow Card)
    /* Error on these Setter functions:(1)
    void setYPl(Player const** newArr);
    // Sets the array of player pointers (Red Card)
    void setRPl(Player const** newArr);
    */

    /* Getter Functions */
    // Gets the Yellow Card Count
    int getYCard() const;
    // Getts the Red Card Count
    int getRCard() const;
   
    /* Error in these getter functions: (2)
    // Gets the array of players who have a yellow card
    Player ** getYPlayers() const;
    // Gets the array of players who have a red card.
    Player ** getRPlayers() const;
    */

    /* Usability functions */

    // Gives the player a yellow card
    void YCardDatBoi(Player sadBoi); 
    // Gives the player a red card
    void RCardDatBoi(Player bherysadBoi);
};

// Begin inline setter functions

inline void TournamentMember::changeLocation(const std::string &newlocation)
{
    Location = newlocation;
}

inline void TournamentMember::setFName(const char *newFName)
{
    strcpy(FirstName, newFName);
}

inline void TournamentMember::setLName(const char *newLName)
{
    strcpy(LastName, newLName);
}

inline void TournamentMember::setDOB(const char *newDob)
{
    strcpy(DOB, newDob);
}

inline void TournamentMember::setMemNum(const int newMemberNum)
{
    MemberNum = newMemberNum;
}

inline void TournamentMember::setSalary(const float newSalary)
{
    salary = newSalary;
}

inline void Player::setClub(const std::string& newClub)
{
    club = newClub;
}

inline void Player::setPlNum(const int newNum)
{
    playerNumber = newNum;
}

inline void Player::setPlPos(const std::string& newPos)
{
    playerPosition = newPos;
}

inline void Player::setPlFoot(const std::string& newFoot)
{
    DominantFoot = newFoot;
}

inline void Player::setPlGoals(const int newGoal)
{
    playerGoals = newGoal;
}

inline void Referee::setYCard(const int newCount)
{
    yellowCardCount = newCount;
}

inline void Referee::setRCard(const int newCount)
{
    redCardCount = newCount;
}

/* Error 1
void Referee::setYPl(Player const** newArr)
{
    yellowCardList = newArr;
}

void Referee::setRPl(Player const** newArr)
{
    redCardList = newArr;
}
*/

// End inline setter functions

// Begin inline getter functions

inline std::string TournamentMember::getLocation()
{
    return Location;
}

inline const char *TournamentMember::getFName() const
{
    return FirstName;
}

inline const char *TournamentMember::getLName() const
{
    return LastName;
}

inline const char *TournamentMember::getDOB() const
{
    return DOB;
}

inline int TournamentMember::getMemNum() const
{
    return MemberNum;
}

inline float TournamentMember::getSalary() const
{
    return salary;
}

inline std::string Player::getClub() const
{
    return club;
}

inline int Player::getPlNum() const
{
    return playerNumber;
}

inline std::string Player::getPlPos() const
{
    return playerPosition;
}

inline std::string Player::getPlFoot() const
{
    return DominantFoot;
}

inline int Player::getPlGoals() const
{
    return playerGoals;
}

inline int Referee::getYCard() const
{
    return yellowCardCount;
}

inline int Referee::getRCard() const
{
    return redCardCount;
}

/* Error 2
inline Player ** Referee::getYPlayers() const
{
    return yellowCardList;
}

inline Player ** Referee::getRPlayers() const
{
    return redCardList;
}
*/

// End inline getter functions
