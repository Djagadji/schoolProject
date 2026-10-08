#include "verktyg.h"
#include "stdio.h"

void skriv_multiplikationstabell(int tal)
{
    for (int i = 1; i <= 10; i++)
    {
        printf("%d * %d = %d", tal, i, tal * i);
    }
}