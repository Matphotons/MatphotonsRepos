#include <stdio.h>
#include <conio.h>
int main()
{

    char Ch;
    printf("Enter the character: \n");
    scanf("%c", &Ch);

    if(Ch == 'a' || Ch == 'o' || Ch == 'i' || Ch == 'e' || Ch == 'u')
    {
        printf("\nCharacter is a small case vowel" );
    }
    else if(Ch == 'A' || Ch == 'E' || Ch == 'I' || Ch == 'O' || Ch == 'U')
    {
        printf("\n Ccharacter is Upper Case Vowel");
    }
    else 
    {
        printf("\nCharacter is a Consonant");
    }

    return 0;
}