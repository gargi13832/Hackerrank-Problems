#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    scanf("%d", &n);
    int mod,sum=0,i=0;
    for(i=0;i<5;i++)
    {
        mod=n%10;
        sum=sum+mod;
        n=n/10;
    }
    printf("%d",sum);
    //Complete the code to calculate the sum of the five digits on n.
    return 0;
}

