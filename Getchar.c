#include <stdio.h>
void main()
{

    char letter;
    printf("\nPlease enter any character: ");
    letter = getchar();
    printf("\nThe charater entered by you is: %c\n", letter);
    putchar(letter); putchar('\n');
    putchar('H'); putchar('\n');
    putchar('\t'); 
    putchar('E'); putchar('\n');
    putchar('0'); putchar('\n');

}