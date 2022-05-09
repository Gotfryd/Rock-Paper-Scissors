#ifndef PKN_DONKEYPLAYER_H
#define PKN_DONKEYPLAYER_H
#include "Player.h"

class DonkeyPlayer : public Player {
    std::string name;
    Wybor playerMove;
public:
    DonkeyPlayer(std::string name);
    void chooseMove() override;
    Wybor getMove() override;
};

#endif //PKN_DONKEYPLAYER_H
