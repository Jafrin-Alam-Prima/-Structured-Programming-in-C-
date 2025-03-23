#include<stdio.h>
int add(int a,int b)
{
    int sum=a+b;
    return sum;
}
int main(){
int n1,n2,addi;
scanf("%d%d",&n1,&n2);
 addi=add(n1,n2);
printf("%d",addi);


return 0;}
