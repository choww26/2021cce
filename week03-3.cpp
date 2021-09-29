#include <stdio.h>
int main() ///簡化的寫法
{///整數a, b 共兩個整數
    int a, b; ///每行程式後都有分號
    scanf( "%d%d", &a, &b ); ///用format的讀
    printf( "%d", a+b );     ///用format的印
}
///format 就是 "%d%d"
///上下大括號一起打再分開

///專業寫法,為和OS作業系統溝通
///int main( int argc, char* argv[] )
///int main( int argc, char** argv )
