#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i, n, left = 0, right, flag = 1;

    printf("Enter a string: ");
    scanf("%s", str);

    n = strlen(str);
    right = n - 1;

    while (left < right && str[left] == '0' && str[right] == '0')
    {
        left++;
        right--;
    }

    for (i = left; i <= right; i++)
    {
        if (str[i] != '1')
        {
            flag = 0;
            break;
        }
    }

    if (flag == 1)
        printf("String belongs to the CFG\n");
    else
        printf("String does not belong to the CFG\n");

    return 0;
}