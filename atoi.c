#include <stdio.h>
int myAtoi(const char *str) {
    int result=0;
    int sign=1;
    int i=0;
    while(str[i]==' '){
        i++;
    }if(str[i]=='-'){
        sign=-1;
        i++;
    }else if(str[i]=='+'){
        i++;
    }while(str[i]!='\0'&&str[i]>='0'&&str[i]<='9'){
        result=result*10+(str[i]-'0');
        i++;
    }return result*sign;
}int main() {
    char str[100];
    printf("enter string ");
    scanf("%s",&str[100]);
    int result = myAtoi(str);
    printf("Result: %d\n", result);
    return 0;
}
