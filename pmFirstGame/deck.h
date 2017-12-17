#ifndef DECK
#define DECK

#include<iostream>
#include<ctime>
#include <playingcard.h>
#include <vector>

using namespace std;

class deck{
public:
playingCard deckToPlay[5][5];

void setup(int n, int k){
    for(int i=0; i<n; i++){
        for(int j=0; j<k; j++){
            deckToPlay[i][j].spellSet(rand());
        }
    }
}

void attackOnDeck(int n, int k, int valueOfCardThatAttack ){
    if( (deckToPlay[n][k].valueGet()==(valueOfCardThatAttack+1)%13) || (deckToPlay[n][k].valueGet()==(valueOfCardThatAttack-1)%13) )
        deckToPlay[n][k].statusSet(false);
}



void attackByDeck(bool stat ){
    if( stat==false ){

    }

}

};



#endif // DECK

