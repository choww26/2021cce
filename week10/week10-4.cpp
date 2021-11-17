#include <stdio.h>
int a[10000000]={0,0,0,0};///0:安全,1:殺
            ///沒寫的，會補0
int main()
{
    int ans=0;
    for(int i=2; i<10000000; i++){
        if(a[i]==0){///地i個數沒有被殺掉
           ans++;///找到i個王子沒有被殺死
           ///找到國王i了 把他的兄弟殺掉
           for(int k=i+i; k<10000000; k=k+i){
                a[k]=1;///殺掉
           }
        }
    }
    printf(" Ans: %d ",ans);
}
