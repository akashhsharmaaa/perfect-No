#include<stdio.h>
int main(void)
{
  int n,sum=0;
  printf("enter number");
  scanf("%d",&n);
  printf("PERFECT NUMBER UPTO %d ARE ", n);
  for (size_t i = 1; i<=n; i++) {
    sum=0;
    for (size_t j = 1; j<i; j++){
      if((i%j)==0)
      {
        sum=sum+j;
      }
    }
    if(sum==i)
    {
      printf("%d ",sum);
    }
  }
}
