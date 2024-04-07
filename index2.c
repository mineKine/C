/*
#include <stdio.h>
int main(void)
{
  int a,b,t;
  scanf("%d",&t);
  for(int i=0; i<a; i++)
  {
    scanf("%d %d\n",&a,&b);
    printf("%d\n",a+b);
  }
  return 0;
}
*/

#include <stdio.h>
int main(void)
{
  int a;
  scanf("%d",&a);
  for(int i=0; i<a; i++)
  {
    for(int j=0; j<=i; j++)
    {
      printf("*");
    }
    printf("\n");

  }
  return 0;
}