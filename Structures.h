#ifndef STRUCTURES_H
#define STRUCTURES_H

struct Conditional
{
};

struct IfElse
{
};

struct DataPointer
{
    void* Data;
    DataType Type;
    DataPointer(void* A, DataType B) : Data(A), Type(B) {}
    DataPointer() : Data(this), Type(Integer) {}
};

struct MathExpression
{
    DataPointer A;
    DataPointer B;
    MathType MATH;
};

#endif