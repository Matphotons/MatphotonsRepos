#include <stdio.h>

int main()
{

     char name[100];
     int i, j=0, k=0;
     printf("Enter the String Name: \n");
    scanf("%s",  &name);
    for(i=0; i<strlen(name); i++)
    {
       if(name[i]=='a' || name[i]=='e' || name[i]=='i' || name[i]=='o' ||name[i]=='u' || name[i]=='A' || name[i]=='E' || name[i]=='I' || name[i]=='O' || name[i]=='U');
           {
               printf("Vowels are: ");
                j=j+1;
           } 
      else
      {
          printf("onsonant are:");
         k=k+1;
      }

    }
    printf("\nVowel count is: %d", j);
    printf("\n Consonant count is: %d", k);
   
       return 0;



}