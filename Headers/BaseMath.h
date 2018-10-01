#ifndef BASEMATH_H
#define BASEMATH_H


CalcResult& IntIntAdd(const void* A, const void* B, CalcResult &result)
{
    result.NumType = Integer;
    result.i = *static_cast<const int*>(A) + *static_cast<const int*>(B);    
    return result;
}

CalcResult& IntDoubleAdd(const void* A, const void* B, CalcResult &result)
{
    result.NumType = Double;
    result.d = *static_cast<const int*>(A) + *static_cast<const double*>(B);
    return result;
}

CalcResult& DoubleIntAdd(const void* A, const void* B, CalcResult &result)
{
    result.NumType = Double;
    result.d = *static_cast<const double*>(A) + *static_cast<const int*>(B);
    return result;
}

CalcResult& DoubleDoubleAdd(const void* A, const void* B, CalcResult &result)
{
    result.NumType = Double;
    result.d = *static_cast<const double*>(A) + *static_cast<const double*>(B);
    return result;
}




CalcResult& IntIntSubtract(const void* A, const void* B, CalcResult &result)
{
    result.NumType = Integer;
    result.i = *static_cast<const int*>(A) - *static_cast<const int*>(B);
    return result;    
}

CalcResult& IntDoubleSubtract(const void* A, const void* B, CalcResult &result)
{
    result.NumType = Double;
    result.d = *static_cast<const int*>(A) - *static_cast<const double*>(B);
    return result;
}

CalcResult& DoubleIntSubtract(const void* A, const void* B, CalcResult &result)
{
    result.NumType = Double;
    result.d = *static_cast<const double*>(A) - *static_cast<const int*>(B);
    return result;
}

CalcResult& DoubleDoubleSubtract(const void* A, const void* B, CalcResult &result)
{
    result.NumType = Double;
    result.d = *static_cast<const double*>(A) - *static_cast<const double*>(B);
    return result;
}




CalcResult& IntIntDivide(const void* A, const void* B, CalcResult &result)
{
    result.NumType = Integer;
    result.i = *static_cast<const int*>(A) / *static_cast<const int*>(B);
    return result;    
}

CalcResult& IntDoubleDivide(const void* A, const void* B, CalcResult &result)
{
    result.NumType = Double;
    result.d = *static_cast<const int*>(A) / *static_cast<const double*>(B);
    return result;
}

CalcResult& DoubleIntDivide(const void* A, const void* B, CalcResult &result)
{
    result.NumType = Double;
    result.d = *static_cast<const double*>(A) / *static_cast<const int*>(B);
    return result;
}

CalcResult& DoubleDoubleDivide(const void* A, const void* B, CalcResult &result)
{
    result.NumType = Double;
    result.d = *static_cast<const double*>(A) / *static_cast<const double*>(B);
    return result;
}




CalcResult& IntIntMultiply(const void* A, const void* B, CalcResult &result)
{
    result.NumType = Integer;
    result.i = *static_cast<const int*>(A) * *static_cast<const int*>(B);
    return result;
}

CalcResult& IntDoubleMultiply(const void* A, const void* B, CalcResult &result)
{
    result.NumType = Double;
    result.d = *static_cast<const int*>(A) * *static_cast<const double*>(B);
    return result;    
}

CalcResult& DoubleIntMultiply(const void* A, const void* B, CalcResult &result)
{
    result.NumType = Double;
    result.d = *static_cast<const double*>(A) * *static_cast<const int*>(B);
    return result;    
}

CalcResult& DoubleDoubleMultiply(const void* A, const void* B, CalcResult &result)
{
    result.NumType = Double;
    result.d = *static_cast<const double*>(A) * *static_cast<const double*>(B);
    return result;    
}

#endif