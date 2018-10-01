#include "Player.h"

Player::Player(std::array<DataPointer, 500> &Data)
{
    // Player Address (Redirection Reference Point)
    PlayerData[PlayerAddress] = static_cast<void*>(this);
    PlayerData[LifeMax] = static_cast<void*>(&Data[LifeMax]);
    PlayerData[Life] = static_cast<void*>(&Data[Life]);
    PlayerData[PowerMax] = static_cast<void*>(&Data[PowerMax]);
    PlayerData[Power] = static_cast<void*>(&Data[PowerMax]);
    PlayerData[Attack] = static_cast<void*>(&Data[Attack]);
    PlayerData[VelX] = static_cast<void*>(&Data[VelX]);
    PlayerData[VelY] = static_cast<void*>(&Data[VelY]);
}