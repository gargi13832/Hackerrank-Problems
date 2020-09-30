#include <stdio.h>

int max_of_four(int a, int b, int c, int d)
{
    int max;
    max=a;
    if(b>a&&b>c&&b>d)
        max=b;
    if(c>a&&c>b&&c>d)
        max=c;
    if(d>a&&d>b&&d>c)
        max=d;
    return max;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);

    return 0;
}


