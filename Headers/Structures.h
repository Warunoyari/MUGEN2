#ifndef STRUCTURES_H
#define STRUCTURES_H

struct DataPointer
{
    void* Data;
    DataType Type;
    DataPointer(void* A, DataType B) : Data(A), Type(B) {}
    DataPointer() : Data(static_cast<void*>(this)), Type(Integer) {}
};

struct MathExpression
{
    const void* Left;
    const void* Right;
    const DataType LeftType;
    const DataType RightType;
    MathType MATH;    
    MathExpression(const void* a, const void* b, const DataType Left, const DataType Right, const MathType m) 
    : Left(a), Right(b), LeftType(Left), RightType(Right), MATH(m) {}
};

struct MathExpressionAlternate
{
    const void* Left;
    const void* Right;
    MathTypeAlternate MATH;
    MathExpressionAlternate(const void* a, const void* b, const MathTypeAlternate m)
        : Left(a), Right(b), MATH(m) {}
};

#endif