#include<stdio.h>

int num, cube, i;
    void CubeOfNum()
    {
        printf("Enter the value of num: ");
        scanf("%d", &num);
        cube = num*num*num;
        printf("Cube of Number : %d = %d\n", num, cube);
    }

    int main()
    {
        CubeOfNum(cube);
    }
