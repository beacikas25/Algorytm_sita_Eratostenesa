#include <math.h>
#include <stdbool.h>
#include <stdio.h>

#define MAX_NUMBER 100

void SieveOfEratosthenes(int n)
{
    bool prime[n+1];
    memset(prime, true, sizeof(prime));

    for (int p = 2; p * p <= n; p++)
    {
        if (prime[p] == true)
        {
            for (int i = p * 2; i <= n; i += p)
                prime[i] = false;
        }
    }

    printf("Liczby pierwsze mniejsze od %d to: ", n);
    for (int p = 2; p <= n; p++)
        if (prime[p])
            printf("%d ", p);
}

int main()
{
    int n = MAX_NUMBER;
    SieveOfEratosthenes(n);
    return 0;
}
