#include<stdio.h>
int areaOfRect(int length, int breadth)
{
    int area;
    area= length* breadth;
    return area;
}
int summ(int a, int b)
{
    int sum=a+b;
    return sum;
}
int main()
{
    int l,g;
    scanf("%d %d",&l,&g);
    int area=areaOfRect(l,g);
    printf("%d\n",area);
    int sum=summ(l,g);
    printf("%d\n",sum);
    return 0;
}
