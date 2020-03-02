#include <stdio.h>
#include <string.h>

int main()
{
    char input[30];
    fgets(input, 50, stdin);
    int lenInput = strlen(input);
    if (lenInput < 8)
    {
        printf("Your password is not strong enough\n");
        return 0;
    }
    // Defining Properties:
    int SymbolCount = 0;

    for (int i = 0; i < lenInput; i++)
    {
        if ((input[i] < 65) || (90 < input[i] && input[i] < 97) || (input[i] > 122))
        {
            SymbolCount++;
        }
    }

    if (SymbolCount > 2)
    {
        printf("true\n");
    }
    else
    {
        printf("false\n");
    }
    return 0;
}