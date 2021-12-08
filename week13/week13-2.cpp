#include <stdio.h>///為了printf()
#include <stdlib.h>///為了system()
int main()///定義 main()函式
{
    printf("下面會秀出 system()函式的結果\n");
    system("dir");///呼叫system()函式
    printf("Hello World");///(2)呼叫printf()
    return 0;
}
