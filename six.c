#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i, n, count0 = 0, count1 = 0, flag = 1;

    printf("Enter a string: ");
    scanf("%s", str);

    n = strlen(str);

    for (i = 0; i < n; i++)
    {
        if (str[i] == '0')
            count0++;
        else if (str[i] == '1')
            count1++;
        else
        {
            flag = 0;
            break;
        }
    }

    if (flag == 1 && count0 == count1)
    {
        for (i = 0; i < count0; i++)
        {
            if (str[i] != '0' || str[n - i - 1] != '1')
            {
                flag = 0;
                break;
            }
        }
    }
    else
        flag = 0;

    if (flag == 1)
        printf("String belongs to the CFG\n");
    else
        printf("String does not belong to the CFG\n");

    return 0;
}