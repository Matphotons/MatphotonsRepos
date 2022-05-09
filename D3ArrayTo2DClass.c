#include<stdio.h>
int main()
{
    int array[2][3][3]; 
    int array2[3][3];
    int array3[3][3];
    int i, j, k; 
    printf("Enter the element of the 3-Dimensional Array:\n");
    for(i=0; i<2; i++)
    {   
        for(j=0; j<3; j++)
        {
            for(k=0; k<3; k++)
            {
            printf("[%d][%d][%d] :", i,  j, k);
            scanf("%d", &array[i][j][k]);
            }
        }
    }
         printf("\n");
        printf("The elements of the 3D array are:-\n");
        for(i=0; i<2; i++)
        {
            for(j=0; j<3; j++)   
            {
                for(k=0; k<3; k++)
                {
                printf("%d  ", array[i][j][k]);
                }
                   
                    printf(" \n");
            }
            
        }
        
                printf("\nCoping values in new 2D array: \n");
                for(i=0; i<2; i++)
                {
                    for(j=0; j<3; j++)
                    {
                        for(k=0;k<3; k++)
                        {
                            if(i==0)
                            {
                                array2[j][k] = array[i][j][k];
                            }
                             else
                            {
                                 array3[j][k] = array[i][j][k];
                            }
                        }   
                    }
                }
     printf("\n Printing Element of 1st 2D Array: \n");
    
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d ", array2[i][j]);
        }
        printf("\n");
    }
         printf("\n");
             printf("\n Printing Element of 2nd 2D Array: \n");
             for(i=0; i<3; i++)
             {
                for(j=0; j<3; j++)
                {
                printf("%d ", array3[i][j]);
            }
            printf("\n");
        }
        
    
        
        return 0;
}