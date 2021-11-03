#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    printf("請輸入大小:\n");
    for(int i=1;i<=n;i++)
    {
        ///printf("%d: ",i);
        for(int k=1;k<=i;k++)printf(" ");

        for(int k=1;k<=n;k++) printf("*");
        printf("\n");
    }
}

