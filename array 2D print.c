#include<stdio.h>
int main(){
    int a[3][3],i,j;
    printf("enter elements of 2D array: \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);

        }
    }
    printf("the 2D array is : \n");
    for(i=0;i<3;i++){
        printf("\n");
        for(j=0;j<3;j++)
            printf("%d\t",a[i][j]);
    }



return 0;}
