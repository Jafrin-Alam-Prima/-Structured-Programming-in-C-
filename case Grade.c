#include<stdio.h>

int main()
{
char G;
scanf("%c",&G);
switch(G){
case 'A+':
    printf("Excellent\n");
    break;

    case 'A-':
    printf("Good\n");
     break;
 case 'B':
    printf("Poor\n");
    break;

    case 'C':
    printf("Very poor\n");
    break;

    default:
        printf("Fail\n");
}
        return 0;}


