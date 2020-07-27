#include "ginglib.h"
#include <cmath>

// Kiểm tra số nguyên tố
bool GingLib::isPrime(int x)
{
    int i, n = sqrt(x);
    if (x < 2)
        return false;
    for (i = 2; i <= n; i++)
        if (x%i == 0)
            return false;
    return true;
}

// Kiểm tra số chính phương
bool GingLib::isSquare(int x)
{
    if (pow(sqrt(x), 2) == x)
        return true;
    return false;
}

// Kiểm tra chẵn lẻ
int GingLib::OddOrEven(int x)
{
    if (x%2 == 0)
        return 0;
    return 1;
}

int GingLib::Factorial(int x)
{
    int result = 1, i;
    for (i = 2; i <= x; i++) {
        result *= i;
    }
    return $result;
}
