#include<stdio.h>
int main(){
char ch;
printf("enter any letter : ");
scanf("%c",&ch);
if (ch>='A' && ch<='Z')
    printf("capital");
else if(ch>='a' && ch<='z')
printf("small");
else
    printf ("this is not a letter");



getch();}
