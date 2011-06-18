#include <stdio.h>

static int fib(int n)
{
    if(n == 1)
        return 1;
    if(n == 2)
        return 2;

    return fib(n - 2) + fib(n - 1);
}

int main()
{
    int i = 1;
    int top, sum = 0;

    do
    {
        top = fib(i);

        if(top % 2 == 0)
            sum += top;

        i++;
    } while(top <= 4000000);

    printf("%i\n", sum);

    return 0;
}
