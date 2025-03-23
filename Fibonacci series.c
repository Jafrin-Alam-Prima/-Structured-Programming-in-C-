#include<stdio.h>
int main(){
int f=0,s=1,fib,count=0,n,i;
scanf("%d",&n);
while(count<n){
    if(count<=1)
        fib=count;
    else
        {fib=f+s;
   f=s;
   s=fib;
        }
    printf("%d",fib);
    count++;
}



return 0;}
