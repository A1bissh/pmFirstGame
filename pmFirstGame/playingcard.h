#ifndef PLAYINGCARD_H
#define PLAYINGCARD_H


class playingCard{
private:

    short int value, suit, spells;

    enum valueEnum{
        Ace=1,
        two,
        three,
        four,
        five,
        six,
        seven,
        eigth,
        nine,
        ten,
        jack,
        queen,
        king
    };

    enum spellsEnum{
        emptyspell,
        spiked,
        bearded,
        frozen,
        armored,
        poisoned,
        fizled
    };

    enum suitEnum{
        emptysuit,
        red,
        blue,
        green,
        violet,
        coin,
        tripleCoin
    };

public:

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
        spells= newSpell;
    }

    void newSpellSet(int newSpell){
        if(newSpell> spells)
            spells= newSpell;
    }

    int spellGet(){
        return spells;
    }

};

#endif // PLAYINGCARD_H
