#include <stdio.h>
char line[300] = "101010010101010101010110011100";
int main()
{
    int ans=0;
    for(int i=0; line[i] != '\0'; i++){
    ///while( line[i] != '\0'){
            if( line[i] == '1') ans++;

    ///  i++;
        }
        printf("��%d��1\n", ans);
}


