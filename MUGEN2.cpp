#include "stdafx.h"
#include <vector>
#include <array>
#include <iostream>
#include "Enumerators.h"
#include "Structures.h"
#include "Player.cpp"

class Operators
{
public:
    void addition();
    void subtraction();
};

typedef const DataPointer  ConstDataPointer;
typedef const DataPointer* ConstDataPointerPointer;


int main()
{
   std::array<DataPointer, 500> DataPointers;   
   DataPointers[LifeMax] = { new int (1000), Integer };   
   DataPointers[Life] = { new int (1000), Integer };
   DataPointers[PowerMax] = { new int (3000), Integer };
   DataPointers[Power] = { new int (3000), Integer };
   DataPointers[Attack] = { new int (100), Integer };   
   Player Player56 {DataPointers} ;
   std::cout << Player56.PlayerData[LifeMax] << "\n";
   
   const DataPointer *X = static_cast<const DataPointer*>(Player56.PlayerData[LifeMax]);   
   int *Y = static_cast<int*>(X->Data);
   std::cout << "Int Value " << *Y << "\n";
   
   const DataPointer A = *(static_cast<const DataPointer*>(Player56.PlayerData[LifeMax]));
   const DataPointer B = *(static_cast<const DataPointer*>(Player56.PlayerData[Life]));
   double result = 0;

   
   switch (A.Type)
   {
       case Integer:
           switch (B.Type)
           {
           case Integer:
               std::cout << "EXA\n";
               result = *static_cast<int*>(A.Data) + *static_cast<int*>(B.Data);
               break;
           case Double:
               std::cout << "EXB\n";
               result = *static_cast<int*>(A.Data) + *static_cast<double*>(B.Data);
               break;               
           }
           break;
       case Double: 
           switch (B.Type)
           {
           case Integer:
               std::cout << "EXC\n";
               result = *static_cast<double*>(A.Data) + *static_cast<int*>(B.Data);
               break;
           case Double:
               std::cout << "EXD\n";
               result = *static_cast<double*>(A.Data) + *static_cast<double*>(B.Data);
               break;
           }
           break;
   }

   std::array<void*, 3> Test;
   int TestInt = 5;
   Test[0] = static_cast<void*>(&TestInt);
   *static_cast<int*>(Test[0]) = 225;
   std::cout << "Test Int " << TestInt << "\n";   
   std::cout << "Result: " << result << "  Types: " << A.Type << " + " << B.Type << "\n";

   
   return 0;
}