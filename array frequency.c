#include<stdio.h>
int main(){
int a[7],i,key,freq=0;
printf("enter numbers: \n");
for(i=0;i<7;i++)
{
    scanf("%d",&a[i]);
}
printf("enter number to find frequecy: \n");
scanf("%d",&key);
for(i=0;i<7;i++)
{
    if(key==a[i])
    {
        freq=freq+1;
    }
}printf("frequency of %d is %d",key,freq);

return 0;}

