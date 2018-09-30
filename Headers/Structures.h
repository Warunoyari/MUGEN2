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
    const DataPointer A;
    const DataPointer B;
    MathType MATH;
    MathExpression(const DataPointer x, const DataPointer y, MathType z) :
    A(x), B(y), MATH(z) {}
};

#endif