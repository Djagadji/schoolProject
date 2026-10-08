#include <stdio.h>
#include "verktyg.h"

void skriv_fizzbuzz(int fran, int till)
{
    for (int i = fran; i <= till; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            printf("FizzBuzz\n");
        }
        else if (i % 3 == 0) {
            printf("Fizz\n");
        }
        else if (i % 5 == 0) {
            printf("Buzz\n");
        }
        else {
            printf("%d\n", i);
        }
    }
}