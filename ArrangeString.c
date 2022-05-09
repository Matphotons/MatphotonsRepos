#include <Stdio.h>
#include <string.h>
int main()
{
 char names[7][10]={"George","Albert","Tina","Xavier","Roger","Tim","William"};
    int i,j;
    char temp[10];
    printf("\nGiven Array is: \n");
    for(i=0; i<7; i++)
    {
        printf("%s \n", names[i]);
    }
     for(i=0; i<7; i++)
      {
        for(j=0; j<7; j++)
        {
    
            if(strcmp (names[i], names[j] )> 0)
            {
            strcpy(temp, names[i]);
            strcpy(names[i], names[j]);
            strcpy(names[j], temp);
            }
        }
      }
    printf("\nSorted Array is: \n");
    for(i=7; i>=0; i--)
    {
        printf("%s \n", names[i]);
    }

     return(0);
}