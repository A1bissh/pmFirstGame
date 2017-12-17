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

int main(){
    setlocale(LC_CTYPE, "rus");
    gameOver=false;
    if(Welcome()==true){









    }
    else{
        system("clear");
        cout<<"Жаль(\nПока, дорогой друг!";
    }

    return 0;
}


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
