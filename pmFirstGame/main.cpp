#include <iostream>
#include <playingcard.h>

using namespace std;

int main(){

    playingCard card1,card2;

    card1.valueSet(14);
    card1.spellSet(0);
    card1.suitSet(2);

    if(card1.valueGet()>=4){
        cout << "value troubl\n";
    }
    else{
        cout << "must work\n";
        if(card1.spellGet()>0)
            cout<<"spells troubles\n";
        else{
            cout<<"no spell troubles\n";
            if(card1.suitGet()!=0){
                cout<<"OK\n";
            }
        }
    }


    return 0;
}
