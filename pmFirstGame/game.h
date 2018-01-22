#ifndef GAME
#define GAME

#include <vector>
#include <playingcard.h>
#include <spellclass.h>
#include <iostream>

class game{
private:
vector< vector<playingCard> > playingDeck(5);

enemy enemy1;
player player1;





public:

void startSetup(short int i){


    for(int j=0; j<5;j++){
        playingDeck[j].resize(i);
        for(int k=0;k<i;k++){
            playingDeck[j][k].setup();
        }
    }



}




};


#endif // GAME

