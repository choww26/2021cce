#include <stdio.h>
int f(int N)
{///step04�g�X�@�Ө禡
	int sum=0;///step02�[�_��
	while(N > 0){///step02 �j��A���
		sum+= N%10;///step01 N%10�l�� step03�[
		N = N / 10;///step01 N/10���k step02�ܤp
	}
	return sum;///step03
}
int main()
{
	int N;
	while( scanf("%d",&N)==1 ){///step06Ū���
		if(N==0)break;///step06: while�tbreak
		int ans = f(f(f(N)));///step05�h�s�X��
		printf("%d\n", ans);
	}
}
