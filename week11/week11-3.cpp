///�w�w�Ƨ�

///int a[10]={4,5,6, 1,2,3, 7,8,9, 0};///(1)�}�C
///int a[10]={0, 3, 2, 1, 4, 5, 6, 7, 8, 9};///�ֱƦn��
#include <stdio.h>
int a[10]={9, 8, 7, 6, 5, 4, 3, 2, 1, 0};///worst
int main()
{
    for(int i=0; i<10; i++) printf("%d", a[i]);
    printf("\n");///��}�C�L�X���[��

    for(int k=0; k<100; k++){///�@����
        ///��h: ���k���A���Ǥ���N�洫
        for(int i=0; i<10-1; i++){///�j����]
            if( a[i] > a[i+1] ){///(1)�ϹL�ӷQ�A���j�k�p�N�洫
                int temp=a[i];///(3)�洫
                a[i]=a[i+1];
                a[i+1]=temp;
            }


        }
        for(int i=0; i<10; i++) printf("%d", a[i]);
        printf("\n");///��}�C�L�X���[��

    }
}
