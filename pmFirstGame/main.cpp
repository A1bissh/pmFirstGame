#include <iostream>
#include <playingcard.h>
#include <vector>
#include <player.h>
#include <deck.h>
#include <clocale>
#include <string>

using namespace std;

bool gameOver;
string userName;


bool Welcome();
void Logic();
void Draw();


//ГлавнаяФункция////ГлавнаяФункция////ГлавнаяФункция////ГлавнаяФункция////ГлавнаяФункция//
int main(){
    setlocale(LC_CTYPE, "rus");
    gameOver=false;

    vector< vector<playingCard> > playingDeck(5);
    for(int i=0;i<5;i++){
        playingDeck[i].resize(5);
        for(int j=0;j<5; j++)
            playingDeck[i][j].setup();
    }

    if(Welcome()==true){

        player user, compEnemy;

        cout<<"\nВведи любой символ в знак того, что озакомлен с правилами:";
        char ok;
        cin>>ok;


        while(!gameOver){



        }







    }
    else{
        system("clear");
        cout<<"Жаль(\nПока, дорогой друг!";
    }

    return 0;
}
//ГлавнаяФункция////ГлавнаяФункция////ГлавнаяФункция////ГлавнаяФункция////ГлавнаяФункция//



bool Welcome(){
    cout<< "Привет...эммм...дорогой друг)\nКак тебя зовут?";
    cout<<"\n\nМеня зовут (введи имя) ";
    cin>> userName;
    cout<<"Прекрасно "<< userName<<"\nДавай начнем?";
    cout<<"\n\nХочешь прочитать правила? (Если нет, то игра закончится)(Y/N)";
    char ruleWishAnswer;
    cin>>ruleWishAnswer;

    if((ruleWishAnswer=='Y')||(ruleWishAnswer=='y')){
        system("clear");
        cout<<"\nработает\n";
        cout<<"ПравилаПравилаПравила";
        return true;
    }
    else{
        return false;
    }
}
