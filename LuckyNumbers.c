#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
  int b,a=n%10;
    n=n/10;
    b=n%10;
    if(a%b==0 || b%a==0) printf("YES\n");
    else printf("NO\n");
    return 0;
}