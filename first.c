#include <stdio.h>

int main()
{
    char str[100];
    int i, state = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    if (str[0] == 'a')
    {
        state = 1;

        for (i = 1; str[i] != '\0'; i++)
        {
            if (str[i] == 'a')
                state = 1;
            else if (str[i] == 'b')
                state = 2;
            else
            {
                state = 0;
                break;
            }
        }
    }

    if (state == 1)
        printf("Accepted\n");
    else
        printf("Rejected\n");

    return 0;
}