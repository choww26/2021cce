#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    printf("�п�J�j�p:\n");
    for(int i=1;i<=n;i++)
    {
        ///printf("%d: ",i);
        for(int k=1;k<=i;k++)printf(" ");

        for(int k=1;k<=n;k++) printf("*");
        printf("\n");
    }
}

