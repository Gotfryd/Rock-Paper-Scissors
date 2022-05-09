#ifndef PKN_MONKEYPLAYER_H
#define PKN_MONKEYPLAYER_H
#include "Player.h"

class MonkeyPlayer : public Player {
    std::string name;
    Wybor playerMove;
public:
    MonkeyPlayer(std::string name);
    void chooseMove() override;
    Wybor getMove() override;
};

#endif //PKN_MONKEYPLAYER_H
