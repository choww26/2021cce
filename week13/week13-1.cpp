#include <stdio.h>
int main()
{
    printf("�п�J�y��1~10=>");
    int id;
    scanf("%d", &id);
///�������榡�A�i�H�Q�� printf()��format�]�w�e��
///%5s  5�檺�r��
///%5d  5�檺���
///%6.2f  6��A�p���I2�쪺�B�I��

    printf(" %5s %5s %5s %5s %5s %5s %5s %5s %5s\n",
           "�m�W ","�y��","��y","�ƾ�","�^��","��q","�q�l",
           "�`��","�������Z");
    printf(" %5s %5d %5d %5d %5d %5d %5d %5d %6.2f\n",
           "�W�l1",1,  1,  1,  1,  1,  1,   5,   1.0f );
    printf(" %5s %5d %5d %5d %5d %5d %5d %5d %6.2f\n",
           "�W�l5",5,100,100,100,100,100, 500, 100.0f );

}
