#include<stdio.h>

int main()
{
    float M1=0.0, M2=0.0, M3=0.0,  per=0.0;
    printf("Pls enter Grades: M1, M2, M3 -  ");
    scanf("%f, %f, %f", &M1, &M2, &M3);
    per = (M1 + M2 + M3)/3;
        if (per >= 90.0)
            {
             printf("Grade is: %.2f - E+\n", per);
            }
         else if(per>=80 && per<90)
            {
              printf("Grade is: %.2f - E\n", per);
            }
        else if(per>=70 && per<80)
            {
                printf("Grade is: %.2f - A+\n", per);
            }
        else if(per>=60 && per<70)
            {
                printf("Grade is: %.2f - A", per);
            }
        else if(per>=50 && per<60) 
            {
                printf("Grade is: %.2f - B+\n", per);
            }   
        else
            printf("Grade is: %.2f - FAIL\n", per);
    

    return 0;
}    