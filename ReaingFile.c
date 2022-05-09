#include <stdio.h>
int main()
{
FILE *fp;
char c;
fp = fopen("/Users/odogwumatthew/Desktop/fila.txt", "r");
if (fp == NULL)
printf( "/n file absent");
else{

    while (c != EOF)
    {

        c = getc(fp);
        putchar (c);
    }
    fclose(fp);
}
return 0;

}