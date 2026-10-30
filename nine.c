#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i, n, state = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    n = strlen(str);

    if (str[0] == '0')
    {
        state = 1;

        for (i = 1; i < n; i++)
        {
            if (str[i] == '1' && i == n - 1)
            {
                state = 2;
                break;
            }
        }
    }

    if (state == 2)
        printf("String is accepted by NFA\n");
    else
        printf("String is rejected by NFA\n");

    return 0;
}