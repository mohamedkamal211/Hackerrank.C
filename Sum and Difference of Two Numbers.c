#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int num1,num2,sum1,sub1;
	float num3,num4,sum2,sub2;
    scanf("%d",&num1);
    scanf("%d",&num2);
    scanf("%f",&num3);
    scanf("%f",&num4);
    sum1 = num1+num2;
    sub1 = num1-num2;

    sum2 = num3+num4;
    sub2 = num3-num4;
    
    printf("%d %d\n",sum1,sub1);
    printf("%0.1f %0.1f\n",sum2,sub2);  
    return 0;
}

