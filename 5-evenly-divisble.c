#include <stdio.h>

int main()
{
    int n = 1;

    while(1)
    {
        for(int i = 2; i <= 20; i++)
        {
            if(n % i != 0)
            {
                goto fail;
            }
        }

        printf("%i\n", n);
        return 0;

fail:
        n++;
    }
}
