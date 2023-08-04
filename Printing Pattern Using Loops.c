#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n;
    scanf("%d", &n);
    int size = 2*n-1;
    int arr[size][size];
  	int start=0,end=size-1;
      for(int k=n;k>0;k--){
    for(int i=start;i<=end;i++){
        for(int j=start;j<=end;j++){
           arr[i][j] = n; 
        }
    }  
    
    start++;
    end--;
    n--;
    
      } 
          for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            
            printf("%d ",arr[i][j]);
      
        }
        printf("\n");
          }
    return 0;
}
