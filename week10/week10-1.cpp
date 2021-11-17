#include <stdio.h>
int main()
{
	int m;
	int ans=0;
	scanf("%d",&m);

	for(int i=2; i<=m; i++){
	int bad=0;
		for(int j=2; j<i; j++){
			if(i%j==0)bad=1;
		}
		if(bad==0){
            ans++;
            printf("%d ",i);
		}
	}
	printf("\n Ans: %d \n",ans);
}
