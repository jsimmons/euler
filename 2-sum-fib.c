#include <stdio.h>

int main()
{
    int sum = 0;
    int a = 1, b = 1, c = a + b;

    while(c <= 4000000)
    {
        sum += c;

        // Every third result is even, so just calcualate those ones.
        a = b + c;
        b = c + a;
        c = a + b;
    }

    printf("%i\n", sum);

    return 0;
}
