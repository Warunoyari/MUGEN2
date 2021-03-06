#include "stdafx.h"
#include <vector>
#include <array>
#include <iostream>
#include "Enumerators.h"
#include "Structures.h"
#include "Player.cpp"




int IntIntAdd(const void* A, const void* B)
{
    return *static_cast<const int*>(A) + *static_cast<const int*>(B);
}

double IntDoubleAdd(const void* A, const void* B)
{
    return *static_cast<const int*>(A) + *static_cast<const double*>(B);
}

double DoubleIntAdd(const void* A, const void* B)
{
    return *static_cast<const double*>(A) + *static_cast<const int*>(B);
}

double DoubleDoubleAdd(const void* A, const void* B)
{
    return *static_cast<const double*>(A) + *static_cast<const double*>(B);
}




int IntIntSubtract(const void* A, const void* B)
{
    return *static_cast<const int*>(A) - *static_cast<const int*>(B);
}

double IntDoubleSubtract(const void* A, const void* B)
{
    return *static_cast<const int*>(A) - *static_cast<const double*>(B);
}

double DoubleIntSubtract(const void* A, const void* B)
{
    return *static_cast<const double*>(A) - *static_cast<const int*>(B);
}

double DoubleDoubleSubtract(const void* A, const void* B)
{
    return *static_cast<const double*>(A) - *static_cast<const double*>(B);
}




int IntIntDivide(const void* A, const void* B)
{
    std::cout << "Dividing " << *static_cast<const int*>(A) << " And " << *static_cast<const int*>(B) << "\n";
    // Floored Int 
    std::cout << "Floored: ";
    std::cout << (*static_cast<const int*>(A) / *static_cast<const int*>(B)) << "\n";
    // Unfloored Double    
    std::cout << "Unfloored: " << (*static_cast<const int*>(A) * 1.00) / (*static_cast<const int*>(B) * 1.00) << "\n";
    return *static_cast<const int*>(A) / *static_cast<const int*>(B);
}

double IntDoubleDivide(const void* A, const void* B)
{
    return *static_cast<const int*>(A) / *static_cast<const double*>(B);
}

double DoubleIntDivide(const void* A, const void* B)
{
    return *static_cast<const double*>(A) / *static_cast<const int*>(B);
}

double DoubleDoubleDivide(const void* A, const void* B)
{
    return *static_cast<const double*>(A) / *static_cast<const double*>(B);
}




int IntIntMultiply(const void* A, const void* B)
{
    return *static_cast<const int*>(A) * *static_cast<const int*>(B);
}

double IntDoubleMultiply(const void* A, const void* B)
{
    return *static_cast<const int*>(A) * *static_cast<const double*>(B);
}

double DoubleIntMultiply(const void* A, const void* B)
{
    return *static_cast<const double*>(A) * *static_cast<const int*>(B);
}

double DoubleDoubleMultiply(const void* A, const void* B)
{
    return *static_cast<const double*>(A) * *static_cast<const double*>(B);
}




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
    DataPointers[VelY] = { new double(3.33), Double };
    Player Player56{ DataPointers };

    /*
    std::cout << Player56.PlayerData[LifeMax] << "\n";
    const DataPointer *X = static_cast<const DataPointer*>(Player56.PlayerData[LifeMax]);
    int *Y = static_cast<int*>(X->Data);
    std::cout << "Int Value " << *Y << "\n";
    // Trigger1 = Life / LifeMax >= 0.50
    // A. X = Life / LifeMax 
    // B X >= 0.50
    const DataPointer A = *(static_cast<const DataPointer*>(Player56.PlayerData[Life]));
    const DataPointer B = *(static_cast<const DataPointer*>(Player56.PlayerData[LifeMax]));
    const DataPointer C = { new double(0.50), Double };
    */

    // Method 2
    MathExpression Calc = 
    {
        static_cast<const DataPointer*>(Player56.PlayerData[Life])->Data,
        static_cast<const DataPointer*>(Player56.PlayerData[LifeMax])->Data,
        static_cast<const DataPointer*>(Player56.PlayerData[Life])->Type,
        static_cast<const DataPointer*>(Player56.PlayerData[LifeMax])->Type,
        Divide
    };
    
    // Method 1 (Switch Operator Switch Type)
    switch (Calc.MATH)
    {
    case Plus:
        switch (Calc.LeftType)
        {
           case Integer:
               switch (Calc.RightType)
               {
                   case Integer:
                       IntIntAdd(Calc.Left, Calc.Right);
                       break;
                   case Double:
                       IntDoubleAdd(Calc.Left, Calc.Right);
                       break;
               }
               break;
           case Double:
               switch (Calc.RightType)
               {
               case Integer:
                   DoubleIntAdd(Calc.Left, Calc.Right);
                   break;
               case Double:
                   DoubleDoubleAdd(Calc.Left, Calc.Right);
                   break;
               }
               break;
        }
        break;
    case Subtract:
        switch (Calc.LeftType)
        {
        case Integer:
            switch (Calc.RightType)
            {
            case Integer:
                IntIntSubtract(Calc.Left, Calc.Right);
                break;
            case Double:
                IntDoubleSubtract(Calc.Left, Calc.Right);
                break;
            }
            break;
        case Double:
            switch (Calc.RightType)
            {
            case Integer:
                DoubleIntSubtract(Calc.Left, Calc.Right);
                break;
            case Double:
                DoubleDoubleSubtract(Calc.Left, Calc.Right);
                break;
            }
            break;
        }
        break;
    case Divide:
        switch (Calc.LeftType)
        {
        case Integer:
            switch (Calc.RightType)
            {
            case Integer:
                IntIntDivide(Calc.Left, Calc.Right);
                break;
            case Double:
                IntDoubleDivide(Calc.Left, Calc.Right);
                break;
            }
            break;
        case Double:
            switch (Calc.RightType)
            {
            case Integer:
                DoubleIntDivide(Calc.Left, Calc.Right);
                break;
            case Double:
                DoubleDoubleDivide(Calc.Left, Calc.Right);
                break;
            }
            break;
        }
        break;
    case Multiply:
        switch (Calc.LeftType)
        {
        case Integer:
            switch (Calc.RightType)
            {
            case Integer:
                IntIntMultiply(Calc.Left, Calc.Right);
                break;
            case Double:
                IntDoubleMultiply(Calc.Left, Calc.Right);
                break;
            }
            break;
        case Double:
            switch (Calc.RightType)
            {
            case Integer:
                DoubleIntMultiply(Calc.Left, Calc.Right);
                break;
            case Double:
                DoubleDoubleMultiply(Calc.Left, Calc.Right);
                break;
            }
            break;
        }
        break;
    }






    // Method 2 (Switch Direct Math Type)
    MathExpressionAlternate Calc2 =
    {
        static_cast<const DataPointer*>(Player56.PlayerData[Life])->Data,
        static_cast<const DataPointer*>(Player56.PlayerData[LifeMax])->Data,
        MathTypeAlternate::IID
    };


    switch (Calc2.MATH)
    {
        case IIA: IntIntAdd(Calc.Left, Calc.Right); break;
        case IDA: IntDoubleAdd(Calc.Left, Calc.Right); break;
        case DIA: DoubleIntAdd(Calc.Left, Calc.Right); break;
        case DDA: DoubleDoubleAdd(Calc.Left, Calc.Right); break;

        case IIS: IntIntSubtract(Calc.Left, Calc.Right); break;
        case IDS: IntDoubleSubtract(Calc.Left, Calc.Right); break;
        case DIS: DoubleIntSubtract(Calc.Left, Calc.Right); break;
        case DDS: DoubleDoubleSubtract(Calc.Left, Calc.Right); break;

        case IID: IntIntDivide(Calc.Left, Calc.Right); break;
        case IDD: IntDoubleDivide(Calc.Left, Calc.Right); break;
        case DID: DoubleIntDivide(Calc.Left, Calc.Right); break;
        case DDD: DoubleDoubleDivide(Calc.Left, Calc.Right); break;

        case IIM: IntIntMultiply(Calc.Left, Calc.Right); break;
        case IDM: IntDoubleMultiply(Calc.Left, Calc.Right); break;
        case DIM: DoubleIntMultiply(Calc.Left, Calc.Right); break;
        case DDM: DoubleDoubleMultiply(Calc.Left, Calc.Right); break;
    }




    // Method 3.5 (If Range + Switch Direct Math Type)
    if (Calc2.MATH <= 3)
    {
        switch (Calc2.MATH)
        {
            case IIA: IntIntAdd(Calc.Left, Calc.Right); break;
            case IDA: IntDoubleAdd(Calc.Left, Calc.Right); break;
            case DIA: DoubleIntAdd(Calc.Left, Calc.Right); break;
            case DDA: DoubleDoubleAdd(Calc.Left, Calc.Right); break;
        }
    }
    else if (Calc2.MATH <= 7)
    {
        switch (Calc2.MATH)
        {
            case IIS: IntIntSubtract(Calc.Left, Calc.Right); break;
            case IDS: IntDoubleSubtract(Calc.Left, Calc.Right); break;
            case DIS: DoubleIntSubtract(Calc.Left, Calc.Right); break;
            case DDS: DoubleDoubleSubtract(Calc.Left, Calc.Right); break;
        }
    }
    else if (Calc2.MATH <= 11)
    {
        switch (Calc2.MATH)
        {
            case IID: IntIntDivide(Calc.Left, Calc.Right); break;
            case IDD: IntDoubleDivide(Calc.Left, Calc.Right); break;
            case DID: DoubleIntDivide(Calc.Left, Calc.Right); break;
            case DDD: DoubleDoubleDivide(Calc.Left, Calc.Right); break;
        }
    }
    else
    {
        switch (Calc2.MATH)
        {
            case IIM: IntIntMultiply(Calc.Left, Calc.Right); break;
            case IDM: IntDoubleMultiply(Calc.Left, Calc.Right); break;
            case DIM: DoubleIntMultiply(Calc.Left, Calc.Right); break;
            case DDM: DoubleDoubleMultiply(Calc.Left, Calc.Right); break;
        }
    } 







    return 0;


}