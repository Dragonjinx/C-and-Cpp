#include <stdio.h>
#include <string.h>

int substitute_vowels(char *s, char ch)
{
    int sizeStr = strlen(s);
    int amountSubbed = 0;
    for (int i = 0; i < sizeStr; i++)
    {
        if ((s[i] == 'a') || (s[i] == 'e') || (s[i] == 'i') || (s[i] == 'o') || (s[i] == 'u'))
        {
            s[i] = ch;
            amountSubbed++;
        }
    }
    return amountSubbed;
}

int main()
{
    char s[] = "This is a sentence";
    printf("%s\n", s);
    int n = substitute_vowels(s, 'o');
    printf("%s\n", s);
    printf("%d\n", n);    
    return 0;
}