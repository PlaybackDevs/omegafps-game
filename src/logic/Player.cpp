#include "Player.h"
#include "util.h"
Player::Player(unsigned int id, std::string name)
{
    // put code here for player init
    playback::logger::Log("new player","player", __FILE__, __LINE__);
}

Player::~Player()
{
    //dtor
}
