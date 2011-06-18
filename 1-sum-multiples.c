#include <stdio.h>

static const int MAX = 1000;

static int sum_multiples(int multiple, int to)
{
    int n = (to - 1) / multiple;
    return n * (n + 1) / 2 * multiple;
}

int main()
{
    // Inclusion/Exclusion
    int sum = sum_multiples(3, MAX) + sum_multiples(5, MAX) - sum_multiples(15, MAX);

    printf("%i\n", sum);

    return 0;
}
