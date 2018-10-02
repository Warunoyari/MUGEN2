#ifndef BASEMATH_H
#define BASEMATH_H


NumberData& IntIntAdd(const NumberData &A, const NumberData &B, NumberData &result)
{
    result.NumType = Integer;
    result.i = A.i + B.i;
    return result;
}

NumberData& IntDoubleAdd(const NumberData &A, const NumberData &B, NumberData &result)
{
    result.NumType = Double;
    result.d = A.i + B.d;
    return result;
}

NumberData& DoubleIntAdd(const NumberData &A, const NumberData &B, NumberData &result)
{
    result.NumType = Double;
    result.d = A.d + B.i;
    return result;
}

NumberData& DoubleDoubleAdd(const NumberData &A, const NumberData &B, NumberData &result)
{
    result.NumType = Double;
    result.d = A.d + B.d;    
    return result;
}




NumberData& IntIntSubtract(const NumberData &A, const NumberData &B, NumberData &result)
{
    result.NumType = Integer;
    result.i = A.i - B.i;
    return result;
}

NumberData& IntDoubleSubtract(const NumberData &A, const NumberData &B, NumberData &result)
{
    result.NumType = Double;
    result.d = A.i - B.d;
    return result;
}

NumberData& DoubleIntSubtract(const NumberData &A, const NumberData &B, NumberData &result)
{
    result.NumType = Double;
    result.d = A.d - B.i;
    return result;
}

NumberData& DoubleDoubleSubtract(const NumberData &A, const NumberData &B, NumberData &result)
{
    result.NumType = Double;
    result.d = A.d - B.d;
    return result;
}



NumberData& IntIntDivide(const NumberData &A, const NumberData &B, NumberData &result)
{
    result.NumType = Integer;
    result.i = A.i / B.i;
    return result;
}

NumberData& IntDoubleDivide(const NumberData &A, const NumberData &B, NumberData &result)
{
    result.NumType = Double;
    result.d = A.i / B.d;
    return result;
}

NumberData& DoubleIntDivide(const NumberData &A, const NumberData &B, NumberData &result)
{
    result.NumType = Double;
    result.d = A.d / B.i;
    return result;
}

NumberData& DoubleDoubleDivide(const NumberData &A, const NumberData &B, NumberData &result)
{
    result.NumType = Double;
    result.d = A.d / B.d;
    return result;
}




NumberData& IntIntMultiply(const NumberData &A, const NumberData &B, NumberData &result)
{
    result.NumType = Integer;
    result.i = A.i * B.i;
    return result;
}

NumberData& IntDoubleMultiply(const NumberData &A, const NumberData &B, NumberData &result)
{
    result.NumType = Double;
    result.d = A.i * B.d;
    return result;
}

NumberData& DoubleIntMultiply(const NumberData &A, const NumberData &B, NumberData &result)
{
    result.NumType = Double;
    result.d = A.d * B.i;
    return result;
}

NumberData& DoubleDoubleMultiply(const NumberData &A, const NumberData &B, NumberData &result)
{
    result.NumType = Double;
    result.d = A.d * B.d;
    return result;
}

#endif