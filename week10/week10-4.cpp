#include <stdio.h>
int a[10000000]={0,0,0,0};///0:�w��,1:��
            ///�S�g���A�|��0
int main()
{
    int ans=0;
    for(int i=2; i<10000000; i++){
        if(a[i]==0){///�ai�ӼƨS���Q����
           ans++;///���i�Ӥ��l�S���Q����
           ///�����i�F ��L���S�̱���
           for(int k=i+i; k<10000000; k=k+i){
                a[k]=1;///����
           }
        }
    }
    printf(" Ans: %d ",ans);
}
