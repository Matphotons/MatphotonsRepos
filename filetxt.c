#include <stdio.h>
int main()
{
FILE *fp;
fp = fopen("/Users/odogwumatthew/Desktop/fila.txt", "w");
fprintf(fp, "\nLEARNING TO CREATE DOCUMENTS USING C-PROGRAMING.\n let us take our time to see what we can creat");
fclose(fp);
return 0;

}