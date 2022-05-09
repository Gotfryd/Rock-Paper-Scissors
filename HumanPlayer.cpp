#include "HumanPlayer.h"
#include <iostream>

HumanPlayer::HumanPlayer(std::string name) : Player(name) {
    this->name = name;
}

void HumanPlayer::chooseMove() {
    int tempChosse;
    std::cout<<"Wybierz swoj ruch: 1.Papier 2.Kamien 3.Nozyce"<<std::endl;
    std::cin>>tempChosse;

    switch(tempChosse){
        case 1:
            playerMove = PAPIER;
            break;
        case 2:
            playerMove = KAMIEN;
            break;
        case 3:
            playerMove = NOZYCE;
            break;
        default:
            std::cout<<"Nie ma takiego ruchu!"<<std::endl;
            chooseMove();
    }
}

Wybor HumanPlayer::getMove() {
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