/*#include<stdio.h>
int main()
{
    char lower,upper;
    printf("enter a lowercase letter :");
    scanf("%c",&lower);
    upper = toupper(lower);
    printf("uppercase= %c",upper);



    return 0;
}*/
#include<stdio.h>
int main()
{
    char lower,upper;
    printf("enter a uppercase letter :");
    scanf("%c",&upper);
    lower = tolower(upper);
    printf("lowercase= %c",lower);



    return 0;
}

