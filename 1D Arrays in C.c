#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  int size,sum=0;
    int arr[1000];
    scanf("%d",&size);
    for(int i=0;i<size;i++)
    {
        scanf("%d ", &arr[i]);
        sum = sum + arr[i];

    }
         printf("%d",sum);   
    return 0;
}
