#include "stdafx.h"
#include <vector>
#include <array>
#include <iostream>
#include "Enumerators.h"
#include "Structures.h"
#include "BaseMath.h"
#include "Player.cpp"

int main()
{
    // Root Initialiation (Round Persist)    
    std::array<NumberData*, 500> DataPointers;

    NumberData LifeData;
    LifeData.NumType = Integer;
    LifeData.i = 2500;
    DataPointers[Life] = &LifeData;

    NumberData LifeMaxData;
    LifeMaxData.NumType = Integer;
    LifeMaxData.i = 2500;
    DataPointers[LifeMax] = &LifeMaxData;
    
    Player Player56 { DataPointers };


    // C
    // LifeMax + 0.50 + Life * 2.33 + (Life - 100)
    // (LifeMax + 0.50) + (Life * 2.33) + (Life - 100)

    // Type Chain (Double)
    // LifeMax Int + 0.50 Double = Double (A)
    // Life Int * 2.33 Double = Double (B)
    // Life Int - 100 Int = Int
    // Double + Double + Int (Sum)
    
    NumberData Temp = {};
    Temp.NumType = Double;
    Temp.d = 0.50;

    NumberData Temp2 = {};
    Temp2.NumType = Double;
    Temp2.d = 2.33;

    NumberData Temp3 = {};
    Temp3.NumType = Integer;
    Temp3.i = 100;

    NumberData resA = {};
    resA.NumType = VoidPointer;
    NumberData resB = {};
    resB.NumType = VoidPointer;
    NumberData resC = {};
    resC.NumType = VoidPointer;

    std::cout << IntDoubleAdd(*Player56.PlayerData[LifeMax], Temp, resA).d + IntDoubleMultiply(*Player56.PlayerData[Life], Temp2, resB).d + IntIntSubtract(*Player56.PlayerData[Life], Temp3, resC).i  << "\n";    
    std::cout << (2500 + 0.50) + (2500 * 2.33) + (2500 - 100) << " Value \n";

    return 0;
}