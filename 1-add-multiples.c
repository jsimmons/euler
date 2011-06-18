#include <stdio.h>

static const int MAX = 1000;

int main()
{
    int sum = 0;

    for(int i = 1; i < MAX; i++)
    {
        if(i % 3 == 0 || i % 5 == 0)
        {
            sum += i;
        }
    }

    printf("%i\n", sum);

    return 0;
}
