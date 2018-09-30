#include "stdafx.h"
#include <vector>
#include <array>
#include <iostream>
#include "Enumerators.h"
#include "Structures.h"
#include "Player.cpp"

int IntIntDivide(void* A, void* B)
{
    // Floored Int
    std::cout << (*static_cast<int*>(A) / *static_cast<int*>(B)) << " Result\n";
    return *static_cast<int*>(A) / *static_cast<int*>(B);
}




int main()
{
   // Player ROOT Initializer
   std::array<DataPointer, 500> DataPointers;   
   DataPointers[LifeMax] = { new int (2500), Integer };   
   DataPointers[Life] = { new int (1000), Integer };
   DataPointers[PowerMax] = { new int (3000), Integer };
   DataPointers[Power] = { new int (3000), Integer };
   DataPointers[Attack] = { new int (100), Integer };
   DataPointers[Defence] = { new int(100), Integer };
   DataPointers[VelX] = { new double(6.66), Double };
   DataPointers[VelY] = { new double(3.33), Double };
   Player Player56 {DataPointers} ;

   /*
   std::cout << Player56.PlayerData[LifeMax] << "\n";   
   const DataPointer *X = static_cast<const DataPointer*>(Player56.PlayerData[LifeMax]);   
   int *Y = static_cast<int*>(X->Data);
   std::cout << "Int Value " << *Y << "\n";
   */   
      
   // Trigger1 = Life / LifeMax >= 0.50
   // A. X = Life / LifeMax 
   // B X >= 0.50

   const DataPointer A = *(static_cast<const DataPointer*>(Player56.PlayerData[Life]));
   const DataPointer B = *(static_cast<const DataPointer*>(Player56.PlayerData[LifeMax]));
   const DataPointer C = { new double (0.50), Double };

   // Chain ?
   MathExpression ExprA = {A, B, Divide};

   // ME Switch
   switch (ExprA.MATH)
   {
       case Plus:
           return 0;
           break;
       case Subtract:
           return 0;
           break;
       case Divide:
           switch (ExprA.A.Type)
           {
                case Integer:
                    switch (ExprA.B.Type)
                    {
                        case Integer:
                            IntIntDivide(ExprA.A.Data, ExprA.B.Data);
                    }
                break;
           }
           break;    
       case Multiply: 
           return 0; 
           break;
   }
   return 0;


}






