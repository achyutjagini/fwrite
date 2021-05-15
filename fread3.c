#include<stdio.h>
#include<stdlib.h>

int main()

{

   FILE *fp;
    fp = fopen("a.txt", "rb");
      
   int arr[10];
  
 fread(arr, sizeof(int), 4, fp);

for(int i=0;i<4;i++)
{

printf("%d\n",arr[i]);

}


fclose(fp);
}

