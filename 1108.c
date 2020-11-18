#include <stdio.h>

void del_digit(char *str){
    char *s = str;
    int i = 0;

    while (*s != '\0')
    {
        if(*s < '0' || *s > '9'){
            *(str + i) = *s;
            i++;
        }
        s++;
    }

    *(str + i) = '\0';

}

int main(void){
    char str[128];

    printf("文字列：");
    scanf("%s", str);

    del_digit(str);
    printf("%s\n", str);
    
    return 0;
}