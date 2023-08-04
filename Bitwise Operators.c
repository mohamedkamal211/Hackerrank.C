#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  //Write your code here.
  int x,y,z,a=0,b=0,c=0;
  
  for(int i=1;i<n;i++){
      for(int j=i+1;j<=n;j++){
          x = i&j;
          y = i|j;
          z = i^j;
          if(x>a && x<k){
            a=x;
          }
          if(y>b && y<k){
            b=y;
          }
          if(z>c && z<k){
            c=z;
          }
          
          
          
  
  
          
      }
  }
  
  printf("%d\n%d\n%d\n",a,b,c);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
