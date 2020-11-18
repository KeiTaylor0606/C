/*1914320t 木村圭一朗*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

void str_toupper(char *str){

    while (*str)
    {
        *str = toupper(*str);
        str++;
    }
    
}

void str_tolower(char *str){

    while (*str)
    {
        *str = tolower(*str);
        str++;
    }
    
}

int main(void){

    char str[128];

    printf("文字列：");
    scanf("%s", str);

    str_toupper(str);
    printf("大文字変換：%s\n", str);

    str_tolower(str);
    printf("小文字変換：%s\n", str);

    return 0;
}