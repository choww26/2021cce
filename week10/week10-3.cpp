#include <stdio.h>
int main()
{
    int d[3]={100,200,300};
    ///�H�W�O�}�C���ŧi�A������
    ///�H�U�O�}�C���ϥΡA��Ȯ��X�ӥ�
    ///printf("d[0]:%d\n", d[0]);
    ///printf("d[1]:%d\n", d[1]);
    ///printf("d[2]:%d\n", d[2]);
    for(int i=0; i<3; i++){
        ///printf("d[ ]:%\n", d[i] );
        printf("d[%d]:%d\n", i, d[i] );
    }
}

