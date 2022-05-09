#ifndef PKN_HUMANPLAYER_H
#define PKN_HUMANPLAYER_H
#include "Player.h"

class HumanPlayer : public Player{
    std::string name;
    Wybor playerMove;
public:
    HumanPlayer(std::string name);
    void chooseMove() override;
    Wybor getMove() override;
};

#endif //PKN_HUMANPLAYER_H
