#include <stdio.h>
int main()
{
    char alphabet[27];
     int i;
     char *ptr;
     ptr = alphabet;

    for(i=0; i<26; ++i)
    {
        *ptr = 'A' + i;
        ++ptr;
    }

    ptr = alphabet;
    printf("The alphabets are: \n");
    for(i=0; i<26; ++i)
    {
        printf("%c  ", *ptr);
        ++ptr;
    }
    printf("\n");
    return 0;
}