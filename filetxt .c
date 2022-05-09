#include <stdio.h>
int main()
{
FILE *fp;
fp = fopen("/Users/odogwumatthew/Documents/fila1.txt", "wb");
fprintf(fp, "LEARNING TO CREATE DOCUMENTS USING C-PROGRAMING \n\n this is the my story writng documents using c-programs\n And it is is good.");
fclose(fp);
return 0;

}