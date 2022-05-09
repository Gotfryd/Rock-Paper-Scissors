#include "GameManager.h"
#include <iostream>

GameManager::GameManager(Player &p1, Player &p2): player1(p1), player2(p2) {
}

void GameManager::play() {

    std::cout<<"W grze bierze udzial "<<player1.getName()<<" oraz "<<player2.getName()<<std::endl;

    std::cout<<"Gracz "<<player1.getName()<<" wybiera ruch..."<<std::endl;
    player1.chooseMove();
    Wybor player1Move = player1.getMove();

    std::cout<<"Gracz "<<player2.getName()<<" wybiera ruch..."<<std::endl;
    player2.chooseMove();
    Wybor player2Move = player2.getMove();

    if(((player1Move) + 1) % 3  == player2Move)
        std::cout<<"Wygral gracz "<<player1.getName()<<std::endl;
    else if(((player2Move) + 1) % 3 == player1Move)
        std::cout<<"Wygral gracz "<<player2.getName()<<std::endl;
    else
        std::cout<<"REMIS"<<std::endl;
}
