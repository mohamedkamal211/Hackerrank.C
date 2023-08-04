#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    char s[1000];
    scanf("%s",s);
    int len = strlen(s);
    for(int i=0;i<10;i++){
        int count=0;
        for(int j=0;j<len;j++){
            if(i==s[j]-'0'){
                count++;
            }
        }
        printf("%d ",count);
    }
    return 0;
}
