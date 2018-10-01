#ifndef STRUCTURES_H
#define STRUCTURES_H

struct CalcResult
{
    DataType NumType;
    union
    {
        double d;
        int i;
        bool b;
        std::string s;
    };
    CalcResult(DataType X) : NumType(X) {}
    CalcResult() {}
    ~CalcResult() {}
};


// Unchangeable Type
struct NumberType
{
    const DataType NumType;
    union
    {
        double d;
        int i;
        bool b;
        std::string s;
    };
    NumberType(const DataType X) : NumType(X) {}
    ~NumberType() {}    
};


struct DataPointer
{
    void* Data;
    DataType Type;
    DataPointer(void* A, DataType B) : Data(A), Type(B) {}
    DataPointer() {}
    void* GetVoidPtr() { return Data; }
};

typedef CalcResult&(*MathFunctionPointer)(const void* a, const void* b, CalcResult &result);
struct MathExpressionUnion
{
    void* Left;
    void* Right;
    MathFunctionPointer MyMath;
};


#endif