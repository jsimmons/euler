#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include <math.h>

#define SIEVE_BITS 64
static const uint64_t num = 600851475143;

int main()
{
    uint64_t top = sqrt(num);
    uint64_t *sieve = calloc(top / SIEVE_BITS + 1, sizeof(*sieve));

    uint64_t top_prime_factor = 0;

    if(num % 2 == 0)
    {
        top_prime_factor = 2;
    }

    for(uint64_t i = 0; i < top; i++)
    {
        // Skip to the next prime.
        if(sieve[i / SIEVE_BITS] & 1LLU << (i % SIEVE_BITS)) continue;

        uint64_t prime = (i + 1) * 2 + 1;
        if(num % prime == 0) top_prime_factor = prime;

        // cross off.
        for(uint64_t j = i; j < top; j += prime)
        {
            sieve[j / SIEVE_BITS] |= 1LLU << (j % SIEVE_BITS);
        }
    }

    printf("%zu\n", top_prime_factor);

    return 0;
}

