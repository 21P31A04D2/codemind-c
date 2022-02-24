#include<stdio.h>
#include<math.h>
  int main()
{
    int a,b,modulus;
   // printf("enter the a,b values",);
    scanf("%d%d",&a,&b);
    modulus=a%b;
    printf("%d",modulus);
    return 0;
}