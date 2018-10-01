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

    // Player ROOT Initializer
    std::array<DataPointer, 500> DataPointers;
    DataPointers[LifeMax] = { new int(2500), Integer };
    DataPointers[Life] = { new int(1000), Integer };
    DataPointers[PowerMax] = { new int(3000), Integer };
    DataPointers[Power] = { new int(3000), Integer };
    DataPointers[Attack] = { new int(100), Integer };
    DataPointers[Defence] = { new int(100), Integer };
    DataPointers[VelX] = { new double(6.66), Double };
    DataPointers[VelY] = { new double(3.66), Double };
    Player Player56{ DataPointers };    

    MathFunctionPointer MathAdd = &IntIntAdd;
    CalcResult Calculation = {};
    MathExpressionUnion Calc3 =
    {
        static_cast<const DataPointer*>(Player56.PlayerData[LifeMax])->Data,
        static_cast<const DataPointer*>(Player56.PlayerData[Life])->Data,
        MathAdd
    };
    Calc3.MyMath(Calc3.Left, Calc3.Right, Calculation);

    return 0;
}