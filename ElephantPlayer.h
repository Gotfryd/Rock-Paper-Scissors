#ifndef PKN_ELEPHANTPLAYER_H
#define PKN_ELEPHANTPLAYER_H
#include "Player.h"

class ElephantPlayer : public Player{
    std::string name;
    Wybor playerMove;
public:
    ElephantPlayer(std::string name);
    void chooseMove() override;
    Wybor getMove() override;
};

#endif //PKN_ELEPHANTPLAYER_H
