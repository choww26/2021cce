#include <stdio.h>
int main()
{
    int n;
    int sum=0,now=1;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        now*=i;
        sum+=now;
    }
    printf("%d",sum);
}
