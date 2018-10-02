#ifndef STRUCTURES_H
#define STRUCTURES_H

class NumberData;
typedef NumberData&(*MathFunctionPointer)(NumberData &a, NumberData &b, NumberData &result);
class NumberData
{
public:
    DataType NumType;
    MathFunctionPointer NextMath;
    union
    {        
        int i;
        double d;
        bool b;
        std::string s;
        void* vp;
    };
    NumberData(DataType X) : NumType(X) {}
    NumberData() {}
    ~NumberData() {}
    MathFunctionPointer DeriveNextMath()
    {

    }
};
#endif