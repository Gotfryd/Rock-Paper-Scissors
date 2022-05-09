#ifndef PKN_PLAYER_H
#define PKN_PLAYER_H
#include <string>
#include <iostream>
enum Wybor {PAPIER, KAMIEN, NOZYCE};

class Player {
    std::string name;
    Wybor playerMove;
public:
    Player(std::string name);
    Player();
    virtual void chooseMove();
    virtual Wybor getMove();
    std::string getName();
};

#endif //PKN_PLAYER_H
