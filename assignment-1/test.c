#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int hash = 1,
        space = n - 1,
        dash = 1;

    for (int i = 1; i <= n; i++)
    {
        for (int j = space; j > 0; j--)
        {
            printf(" ");
        }

        if (i % 2 == 0)
        {
            for (int j = 1; j <= hash; j++)
            {
                printf("-");
            }
        }
        else
        {
            for (int j = 1; j <= hash; j++)
            {
                printf("#");
            }
        }

        printf("\n");

        if (i == n)
        {
            break;
        }

        space--;
        hash += 2;
        dash += 2;
    }

    for (int i = 1; i <= n; i++)
    {
        if (n % 2 == 0)
        {
            space++;
            hash -= 2;
            dash -= 2;
        }

        for (int j = 0; j < space; j++)
        {
            printf(" ");
        }

        if (i % 2 == 0)
        {
            for (int j = dash; j > 0; j--)
            {
                printf("-");
            }
        }
        else
        {
            if (n % 2 != 0 && i == 1)
            {
            }
            else
            {
                for (int j = hash; j > 0; j--)
                {
                    printf("#");
                }
            }
        }

        if (n % 2 != 0 && i == 1)
        {
        }
        else
        {
            printf("\n");
        }

        if (n % 2 != 0)
        {
            space++;
            hash -= 2;
            dash -= 2;
        }
    }

    return 0;
}
