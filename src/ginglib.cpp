#include "ginglib.h"
#include <cmath>

// Cộng 2 số nguyên
int GingLib::add(int a, int b)
{
    return (a + b);
}

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
