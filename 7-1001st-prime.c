#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include <math.h>

#define SIEVE_BITS 64
#define MAX_PRIME 150000

int main()
{
    uint64_t *sieve = calloc(MAX_PRIME / SIEVE_BITS + 1, sizeof(*sieve));
    uint64_t num_primes = 1;

    for(uint64_t i = 0; i < MAX_PRIME; i++)
    {
        // Skip to the next prime.
        if(sieve[i / SIEVE_BITS] & 1LLU << (i % SIEVE_BITS)) continue;

        uint64_t prime = (i + 1) * 2 + 1;

        if(++num_primes == 10001)
        {
            printf("%zu\n", prime);
            break;
        }

        // cross off.
        for(uint64_t j = i; j < MAX_PRIME; j += prime)
        {
            sieve[j / SIEVE_BITS] |= 1LLU << (j % SIEVE_BITS);
        }
    }

    return 0;
}

