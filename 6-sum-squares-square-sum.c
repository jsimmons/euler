#include <stdio.h>

int main()
{
    int max = 100;

    int sum = max * (max + 1) / 2;
    int square_of_sum = sum * sum;

    int sum_of_squares = (2 * max + 1) * (max + 1) * max / 6;

    printf("%i\n", square_of_sum - sum_of_squares);

    return 0;
}
