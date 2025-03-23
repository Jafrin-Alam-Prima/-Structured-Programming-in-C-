#include<stdio.h>
int main(){

int a[5],i,c=0;
   int sum=0;
printf("enter numbers: \n");
for(i=0;i<5;i++)
{
    scanf("%d",&a[i]);
}

printf("the odd numbers are: \n");
for(i=0;i<5;i++)
{
    if(a[i]%2!=0)
    { c++;
        printf("%d\t",a[i]);
    }
}
printf("%d",c);
printf("\nthe even numbers are: \n");
for(i=0;i<5;i++)
{
    if(a[i]%2==0)
    {
        printf("%d\t",a[i]);

        sum=sum+a[i];
    }

}printf("\nthe sum of even numbers are: %d",sum);
return 0;}
