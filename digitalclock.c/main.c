#include <stdio.h>
#include <stdlib.h>

int main()
{
  int n,d;
  while(n!=0)
  {
      scanf("%d",&n);
      d=10000/n;

      printf("%d gallons per week will last %d weeks\n",n,d);
  }

  return 0;
}
