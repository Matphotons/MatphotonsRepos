#include<stdio.h>
void main()
{
    int x, y, *px, *py;
    px = &x;
    py = &y;
    x=5; y=30;
    printf("x=%d, y=%d\n", x, y);
    swap(px, py);
    printf("\n After interchange x=%d, and y=%d\n", x, y);
}

int swap(int *u, int *v)
{
    int temp;
    temp = *u; 
    *u = *v;
    *v = temp;
    return 0;
}