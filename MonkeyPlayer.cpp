#include "MonkeyPlayer.h"

MonkeyPlayer::MonkeyPlayer(std::string name) : Player(name) {
    this->name = name;
}

void MonkeyPlayer::chooseMove() {
    int tmpWybor = rand()%3;
    if(tmpWybor == 0)
        playerMove = PAPIER;
    if(tmpWybor == 1)
        playerMove = KAMIEN;
    if(tmpWybor == 2)
        playerMove = NOZYCE;
}

Wybor MonkeyPlayer::getMove() {
    std::string tempString;
    switch(playerMove){
        case 0:
            tempString = "PAPIER";
            break;
        case 1:
            tempString = "KAMIEN";
            break;
        case 2:
            tempString = "NOZYCE";
        default:
            break;
    }
    std::cout<<"Gracz "<<getName()<<" wybral "<<tempString<<std::endl;
    return playerMove;
}