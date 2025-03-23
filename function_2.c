#include<stdio.h>
char fun()
{
    return 'a';
}
int main()
{
    char c=fun();
    printf("the character is %c\n",c);
    return 0;
}

