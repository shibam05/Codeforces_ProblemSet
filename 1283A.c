#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    
    while(n > 0){
        int h, m;
        scanf("%d %d", &h, &m);
        int res = 1440 - (60 * h + m);
        printf("%d\n", res);
        n--;
    }
    return 0;
}