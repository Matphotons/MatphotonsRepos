#include <stdio.h>
int main()
{
FILE *fp;
fp = fopen("/Users/odogwumatthew/Desktop/Assignmenttext.txt", "w");
fprintf(fp, "\nLEARNING TO CREATE DOCUMENTS USING C-PROGRAMING.\nlet us take our time to see what we can create whatever we want.\n");
fclose(fp);
return 0;

}