#ifndef STRUCTURES_H
#define STRUCTURES_H

struct Conditional
{
};

struct DataPointer
{
    void* Data;
    DataType Type;
    DataPointer(void* A, DataType B) : Data(A), Type(B) {}
    DataPointer() : Data(this), Type(Integer) {}
};

#endif