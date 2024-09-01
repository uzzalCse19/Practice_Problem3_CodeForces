#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    if(n-m>=0) printf("%d\n",n-m);
    else printf("0\n");
    return 0;
}