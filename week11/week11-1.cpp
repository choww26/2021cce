#include <stdio.h>
int a[10000000]={0,0,0 };
int main()
{
    int b;
    scanf("%d",&b);
    for(int i=2; i<b; i++)
    {
        if(a[i]==0)
        {
            printf("%d ",i);
            for(int k=i+i; k<b; k+=i)
            {
                a[k]=1;
            }
        }
    }
}
