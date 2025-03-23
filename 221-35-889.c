

#include <stdio.h>
int main()
{
  int n;
  printf("Enter Size of the Array : ");
  scanf("%d", &n);
  int ara[n];
  for(int i = 0; i < n; i++){
    printf("Enter %d element : ", i+1);
    scanf("%d", &ara[i]);
  }
  int q = 3;
  while(q--){
    int x, point = -1;
    printf("Enter element to be deleted : ");
    scanf("%d", &x);
    for(int i = 0; i < n; i++){
      if(ara[i] == x){
        point = i;
        break;
      }
    }
    if(point == -1){
      printf("%d can not be deleted\n\n", x);
    }
    else{
      for(int i = point; i < n-1; i++){
        ara[i] = ara[i+1];
      }
      n -= 1;
      printf("%d is deleted from the Array\n\n", x);
      printf("After Delation New Array elements are : ");
      for(int i = 0; i < n; i++){
        printf("%d ", ara[i]);
      }
      printf("\n\n");
    }
  }
  return 0;
}
