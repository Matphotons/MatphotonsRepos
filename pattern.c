#include<stdio.h>
#include<conio.h>

int main()
{
    int t, r, s, b;
    printf("Enter the number of rows t:\n");
    scanf("%d", &t);
    for(r=1; r<=t; r++)
        {
            for(s=1; s<=(t-r); s++)
                printf(" ");            
            for(b=1; b<=((2*r)-1); b++)
            printf("*");
            printf("\n");
        
        }
        return 0;
}