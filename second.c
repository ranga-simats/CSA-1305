#include <stdio.h>

int main()
{
    char str[100];
    int i, state = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    if (str[0] == '0')
    {
        state = 1;

        for (i = 1; str[i] != '\0'; i++)
        {
            if (str[i] == '0')
                state = 1;
            else if (str[i] == '1')
                state = 2;
            else
            {
                state = 0;
                break;
            }
        }
    }

    if (state == 2)
        printf("Accepted\n");
    else
        printf("Rejected\n");

    return 0;
}