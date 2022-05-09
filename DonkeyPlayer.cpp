#include "DonkeyPlayer.h"

DonkeyPlayer::DonkeyPlayer(std::string name) : Player(name) {
    this->name = name;
}

void DonkeyPlayer::chooseMove() {
    playerMove = KAMIEN;
}

Wybor DonkeyPlayer::getMove() {
    std::string tempString = "KAMIEN";
    std::cout<<"Gracz "<<getName()<<" wybral "<<tempString<<std::endl;
    return playerMove;
}
