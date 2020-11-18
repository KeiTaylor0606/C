#include <stdio.h>

void set_idx(int *v, int n){
    for(int i = 0; i < n; i++){
        v[i] = i;
    }
}

int main(void){
    int n;
    printf("要素数：");
    scanf("%d", &n);

    int v[n];

    set_idx(v, n);

    for(int i = 0; i < n; i++){
        printf("v[%d] = %d\n", i, v[i]);
    }

    return 0;
}