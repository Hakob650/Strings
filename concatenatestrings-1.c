#include <stdio.h>
int atoi(const char *str){
	int result=0;
	int sign=1;
	int index=0;
	if(str[index]=='-'){
		sign=-1;
		index++;
	}for(;str[index]!='\0';++index){
	     if(str[index]>='0' && str[index]<='9'){
		result=result*10+(str[index]-'0');
	} 
        }return sign*result;
}
int main(){
	char str[100];
	printf("enter string");
	fgets(str, sizeof(str), stdin);
	char *p = str;
    while (*p){
        if(*p=='\n'){
            *p='\0';
            break;
        }p++;
    }
	int value = atoi(str);
        printf("Integer value: %d\n", value);
	return 0;
}

