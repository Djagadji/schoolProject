#include "verktyg.h"

int ar_primtal(int tal)
{
    if (tal < 2)
    {
        return 0;
    }

    for (int i = 2; i <= tal / i; i++)
    {
        if (tal % i == 0) {
            return 0;
        }
    }

    return 1;
}