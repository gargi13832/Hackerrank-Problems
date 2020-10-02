#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
    int max_or = 0, max_and=0, max_exor = 0;
    int i=0, j=0;
    for(i=1;i<=n;i++)
    {
        for(j=i+1;j<=n;j++)
        {
            if((i&j) > max_and && (i&j)<k)
                max_and = i&j;
            if((i|j) > max_or && (i|j)<k)
                max_or = i|j;
            if((i^j) > max_exor && (i^j)<k)
                max_exor = i^j;
        }
    }


    printf("%d\n",max_and);
    printf("%d\n",max_or);
    printf("%d\n",max_exor);
  //Write your code here.
}

int main() {
    int n, k;

    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);

    return 0;
}

