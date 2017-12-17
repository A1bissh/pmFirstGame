#ifndef PLAYINGCARD_H
#define PLAYINGCARD_H


class playingCard{
private:

    short int value, suit, spells;
    bool status;

public:

    void statusSet(bool stat){
        status=stat;
    }

    void valueSet(int newValue){
        value = newValue%13;
    }


    int valueGet(){
       return value;
    }


    void suitSet(int newSuit){
        suit=newSuit;
    }


    int suitGet(){
       return suit;
    }


    void spellSet(int newSpell){
        spells= newSpell%7;
    }


    void newSpellSet(int newSpell){
        if(newSpell> spells)
            spells= newSpell%7;
    }


    int spellGet(){
        return spells;
    }



};

#endif // PLAYINGCARD_H
