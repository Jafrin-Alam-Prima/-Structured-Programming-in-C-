//answer.2
//Name: Jafrin Alam Prima
//221-35-889
#include<stdio.h>
int main(){
    char o;
    int a,b;
    for(;;){

    printf("Choose an operator: \n");
    scanf("%s",&o);
    if(o=='n')
    {
        break;
    }
    printf("Enter two number: \n");
    scanf("%d %d",&a,&b);
 switch(o)
    {
       case'+':printf("the sum: %d + %d = %d\n",a,b,a+b);
        break;
        case'-':printf("the substraction: %d - %d = %d\n",a,b,a-b);
          break;
        case'*':printf("the multiplication: %d * %d = %d\n",a,b,a*b);
          break;
        case'/':printf("the division: %d / %d = %d\n",a,b,a/b);
          break;
        case'%':printf("the modulus: %d % %d = %d\n",a,b,a%b);
          break;

    }
    printf("please press n to stop.\n");

    }

return 0;}
