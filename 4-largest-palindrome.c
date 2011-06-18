#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int reverse(int n)
{
    int reversed = 0;
    while(n > 0)
    {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }

    return reversed;
}

bool is_palindrome(int n)
{
    return reverse(n) == n;
}

int main()
{
    int largest = -1;
    for(int i = 999; i >= 100; i--)
    {
        for(int j = 999; j >= i; j--)
        {
            int product = i * j;

            if(product <= largest)
                break;

            if(is_palindrome(product) && product > largest)
            {
                largest = product;
            }
        }
    }

    printf("%i\n", largest);

    return 0;
}

