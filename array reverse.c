#include<stdio.h>
int main(){
int a[5],i;
printf("enter elements: \n");
for(i=0;i<5;i++)
{
    scanf("%d",&a[i]);
}
printf("reverse elemtns: \n");
for(i=4;i>=0;i--)
{
    printf("%d\t",a[i]);
}



return 0;}
