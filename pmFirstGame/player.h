#ifndef PLAYER
#define PLAYER

#include <playingcard.h>
#include <spellclass.h>

using namespace std;


class player{



private:

    vector <playingCard> cards(32);

    short int healtNow, armorNow;
    short int suitsEnergy[4];

    spell attack, makeAShield, checkYourNextCard, add1HP, add2Hp;




public:

    void setup()


};


#endif // PLAYER
