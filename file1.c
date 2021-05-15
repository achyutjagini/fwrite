#include<stdio.h>
int main()
{
FILE *fp=fopen("a.txt","w");

int *ptr;
int arr[]={1,2,3,4,5};
ptr=arr;

fwrite(ptr,sizeof(int),5,fp);

fclose(fp);
}
