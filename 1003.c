#include <stdio.h>

void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

void sort3(int *n1, int *n2, int *n3){
    if(*n1 > *n2){
        swap(n1, n2);
    }
    if(*n1 > *n3){
        swap(n1, n3);
    }
    if (*n2 > *n3){
        swap(n2, n3);
    }
    
}

int main(void){
    int n1, n2, n3;

    printf("3整数昇順ソート");
    printf("n1 = ");
    scanf("%d", &n1);
    printf("n2 = ");
    scanf("%d", &n2);
    printf("n3 = ");
    scanf("%d", &n3);

    sort3(&n1, &n2, &n3);
    printf("%d, %d, %d\n", n1, n2, n3);

    return 0;
}