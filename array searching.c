#include<stdio.h>
int main(){
int a[5]={1,2,3,4,5},i,item;
printf("enter item: \n");
scanf("%d",&item);
for(i=0;i<5;i++)
{
    if(item==a[i])
        {printf("item found");
    break;}
}
if(i==5)
    printf("not found");

return 0;}
