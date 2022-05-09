#ifndef PKN_GAMEMANAGER_H
#define PKN_GAMEMANAGER_H
#include "Player.h"

class GameManager {
    Player  & player1;
    Player  & player2;
public:
    GameManager(Player & p1, Player & p2);
    void play();
};

#endif //PKN_GAMEMANAGER_H
