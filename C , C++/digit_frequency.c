#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char str[1001];
    scanf("%s",str);
    int len = strlen(str);
    int arr[10],i;
    for(i=0;i<10;i++)
        arr[i]=0;
    int s;
    for(i=0;i<len;i++){
        if(str[i]>='0' && str[i]<='9'){
            //printf("%c\n",str[i]);
            s = str[i]-'0';
            arr[s]++;
        }
    }
    for(i=0;i<10;i++)
        printf("%d " ,arr[i]);
    return 0;
}
