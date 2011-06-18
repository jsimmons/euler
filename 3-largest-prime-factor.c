#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <math.h>

static const long num = 600851475143;

int main()
{
    long top = sqrt(num);
    bool *seive_data = calloc(top, sizeof(bool));
    long top_prime_factor = 0;

    if(num % 2 == 0)
    {
        top_prime_factor = 2;
    }

    for(long i = 0; i < top; i++)
    {
        // Skip to the next prime.
        if(seive_data[i] == true)
            continue;

        int prime = (i + 1) * 2 + 1;
        if(num % prime == 0)
            top_prime_factor = prime;

        // cross off.
        for(long j = i; j < top; j += prime)
        {
            seive_data[j] = true;
        }
    }

    printf("%lu\n", top_prime_factor);

    return 0;
}
