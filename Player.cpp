#include "Player.h"

Player::Player(std::string name) {
    this->name = name;
}

std::string Player::getName() {
    return name;
}

Player::Player() {

}

void Player::chooseMove() {

}

Wybor Player::getMove() {
    return playerMove;
}


