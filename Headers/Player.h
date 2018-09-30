#ifndef PLAYER_H
#define PLAYER_H

class Player
{
public:
    std::array<const void*, 500> PlayerData;
    Player(std::array<DataPointer, 500> &Data);
};

#endif