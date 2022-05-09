#include "ElephantPlayer.h"

ElephantPlayer::ElephantPlayer(std::string name) : Player(name) {
    this->name = name;
}

void ElephantPlayer::chooseMove() {
    int tempChoose = rand() %10;
    switch(tempChoose){
        case 0:
            playerMove = KAMIEN;
            break;
        case 1:
            playerMove = KAMIEN;
            break;
        case 2:
            playerMove = PAPIER;
            break;
        case 3:
            playerMove = PAPIER;
            break;
        case 4:
            playerMove = PAPIER;
            break;
        case 5:
            playerMove = PAPIER;
            break;
        case 6:
            playerMove = NOZYCE;
            break;
        case 7:
            playerMove = NOZYCE;
            break;
        case 8:
            playerMove = NOZYCE;
            break;
        case 9:
            playerMove = NOZYCE;
            break;
        default:
            break;
    }
}

Wybor ElephantPlayer::getMove() {
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
