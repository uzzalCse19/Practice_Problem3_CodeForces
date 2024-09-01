#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    long long int e,m,b,ans=0;
    scanf("%lld%lld%lld",&e,&m,&b);
    if(e<=m && e<=b) ans=e;
    else if(b<=e && b<=m) ans=b;
    else{
        ans=m;
        e=e-m;
        b=b-m;
        if(e/2<b) ans+=e/2;
        else ans+=b;
    }
    printf("%lld\n",ans);
    return 0;
}