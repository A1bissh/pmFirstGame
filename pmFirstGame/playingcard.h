#ifndef PLAYINGCARD_H
#define PLAYINGCARD_H


class playingCard{
private:

//    enum valueOfCard{
//        ace=1,two,three, four, five,
//        six, seven, eight, nine, ten,
//        jack, queen, king
//    } value;

//    enum suitOfCard{
//        emptySuit, attack, defence, aqility, willpower
    //    } suit;

//    enum spellOnCard{
//        emptySpell, spiked, bearded, frozen, poisoned, fizled
//    } spell;
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
        suit=newSuit%5;
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

//Рандомизация//Рандомизация////Рандомизация//Рандомизация////Рандомизация//Рандомизация////Рандомизация//Рандомизация//


    void randomize(){
        suitSet(rand());
        valueSet(rand());
    }


//Рандомизация//Рандомизация////Рандомизация//Рандомизация////Рандомизация//Рандомизация////Рандомизация//Рандомизация//
//Пренастройка//Пренастройка//Пренастройка//Пренастройка//Пренастройка//Пренастройка//Пренастройка//Пренастройка//Пренастройка//
    void setup(){
        suitSet(rand());
        valueSet(rand());
        spellSet(rand());
        statusSet(true);
    }
//Пренастройка//Пренастройка//Пренастройка//Пренастройка//Пренастройка//Пренастройка//Пренастройка//Пренастройка//Пренастройка//

};


#endif // PLAYINGCARD_H
