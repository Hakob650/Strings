#include <stdio.h>
#include <string.h>
char* myStrcpy(char* dest, const char* src) {
    char*original=dest;
     while(*src!='\0'){
	     *dest=*src;
	      dest++;
              src++;
    }*dest='\0';
     return original;
}
int main(){
	char src[100];
        char dest[100];
        printf("enter source ");
        fgets(src, sizeof(src), stdin);
	int len=strlen(src);
        if(len>0&&src[len-1]=='\n'){
        src[len-1]='\0';
        myStrcpy(dest, src);
        printf("copied string \"%s\"\n", dest);
        }return 0;
}
