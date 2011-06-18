#include <stdio.h>

int main()
{
    int sum = 0;
    int prev = 1, n = 1;

    while(n <= 4000000)
    {
        int new = prev + n;

        if(new % 2 == 0)
        {
            sum += new;
        }

        prev = n;
        n = new;
    }

    printf("%i\n", sum);

    return 0;
}
