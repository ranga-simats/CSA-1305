#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i, n, flag = 1;

    printf("Enter a string: ");
    scanf("%s", str);

    n = strlen(str);

    if (n < 2)
        flag = 0;
    else if (str[0] != '0' || str[n - 1] != '1')
        flag = 0;
    else
    {
        for (i = 0; i < n; i++)
        {
            if (str[i] != '0' && str[i] != '1')
            {
                flag = 0;
                break;
            }
        }
    }

    if (flag == 1)
        printf("String belongs to the CFG\n");
    else
        printf("String does not belong to the CFG\n");

    return 0;
}