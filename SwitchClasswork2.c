#include <stdio.h>

int main()
{
    char m, f, gender[20];

    printf("\n Please enter your Gender: ");
    scanf("%d", &m);
    scanf("%c", &gender);

    switch(gender)
    {
        case 'M':

        printf("\n Your Gender is Male: %s", gender);

        break;
        case 'm':
        printf("\n Your Gender is Male: %s", gender);
        break;
        
        default:
        printf("\n Your Gender is Female: %c", f);

    }
return 0;
}