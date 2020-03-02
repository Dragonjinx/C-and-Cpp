#include <stdio.h>
#include <string.h>

int main()
{
    char Buffer[10];
    FILE *input = fopen("generate.txt", "w");
    // memset(Buffer, '\0', sizeof(Buffer));
    // setvbuf(input, Buffer, _IOFBF, 40);
    char c = 'a';
    for(int i = 0; i < 10; i++)
    {   
        sprintf(Buffer, "%c %c%c\n",c,c,c);
        printf("%s", Buffer);
        fwrite(Buffer, strlen(Buffer), 1, input);
        c++;
    }
    return 0;
}