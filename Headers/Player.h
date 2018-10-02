#ifndef PLAYER_H
#define PLAYER_H

class Player
{
public:
    std::array<NumberData*, 500> PlayerData;
    Player(std::array<NumberData*, 500> &Data);
};

#endif