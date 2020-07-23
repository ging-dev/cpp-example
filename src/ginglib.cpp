#include "ginglib.h"
#include <cmath>

// Kiểm tra số nguyên tố
bool GingLib::isPrime(int x)
{
    int i, n = sqrt(x);
    if (x > 1) {
        for (i = 2; i <= n; i++)
            if (x%i == 0) return false;
        return true;
    } else return false;
}

// Kiểm tra số chính phương
bool GingLib::isSquare(int x)
{
    if (pow(sqrt(x), 2) == x) return true;
    return false;
}
