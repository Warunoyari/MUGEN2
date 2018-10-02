#include "Player.h"

Player::Player(std::array<NumberData*, 500> &Data)
{
    
    // Player Address (Redirection Reference Point)
    NumberData RedirectAddress = {};
    RedirectAddress.NumType = VoidPointer;
    RedirectAddress.vp = static_cast<void*>(this);
    PlayerData[PlayerAddress] = &RedirectAddress;

    // Provided Values
    PlayerData[LifeMax] = Data[LifeMax];
    PlayerData[Life] = Data[Life];

    /*
    PlayerData[PowerMax] = Data[PowerMax];
    PlayerData[Power] = Data[PowerMax];
    PlayerData[Attack] = Data[Attack];
    PlayerData[VelX] = Data[VelX];
    PlayerData[VelY] = Data[VelY];
    */
}