#include <stdio.h>
void main()
{
    char alpha[26];
    int i, j;
    for(i=65, j=0; i<91; i++, j++)
    {
        printf("%c  ", alpha[j]);
    }
    getchar();
}