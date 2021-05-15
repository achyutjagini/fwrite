#include<stdio.h>
#include<stdlib.h>

int main()

{

   FILE *fp;
    fp = fopen("a.txt", "rb");
      
   int val;

   fread(&val, sizeof(int), 1, fp);

printf("%d\n",val);


fclose(fp);
}



