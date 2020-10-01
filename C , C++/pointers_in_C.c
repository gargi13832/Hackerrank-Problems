#include <stdio.h>

void update(int *a,int *b) {
    int temp1=0, temp2=0;
    temp1 = *a;
    temp2 = *b;
    while(temp2--){
        ++*a;
    }
    while(temp1--)
        --*b;
    if(*b<0)
        *b = -(*b);
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
