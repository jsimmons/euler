#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>
#include <limits.h>

int main()
{
    unsigned long max = 150000;
    bool *seive_data = calloc(max, sizeof(bool));
    if(!seive_data)
    {
        return 1;
    }

    int primes = 1;

    for(unsigned long i = 0; i < max; i++)
    {
        // Skip to the next prime.
        if(seive_data[i] == true)
            continue;

        unsigned long prime = (i + 1) * 2 + 1;

        primes++;

        if(primes == 10001)
        {
            printf("%lu\n", prime);
            break;
        }

        // cross off.
        for(unsigned long j = i; j < max; j += prime)
        {
            seive_data[j] = true;
        }
    }

    return 0;
}

