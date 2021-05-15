#include<stdio.h>
#include<stdlib.h>

int main()

{

   FILE *fp;
    fp = fopen("a.txt", "rb");
      
   int val;

   while(fread(&val, sizeof(int), 1, fp)==1)
{
    printf("%d\n",val);
}

fclose(fp);
}


