#include <stdio.h>
char line[100];

int main()
{
    printf("請輸入你的名字: ");
    scanf("%s", line);///沒有&,只讀到空格

    printf("你剛剛輸入:%s\n", line);
}

