#include <stdio.h>
#include <string.h>
int  isPalindrome(const char *str,int start,int end){
	if(start>=end){
		return 1;
	}if(str[start]!=str[end]){
		return 0;
	}return isPalindrome(str,start+1,end-1);
}
void remove_newline(char *str){
    int i=0;
    while(str[i]){
        if(str[i]=='\n'){
            str[i]='\0';
            break;
        }
        i++;
    }
}
int main()
{
   int size=100;
   char str[size];
   printf("enter string");
   fgets(str,sizeof(str),stdin);
   remove_newline(str);
   for(int i=0;str[i];++i){
	   if(str[i]=='\n'){
		  str[i]='\0';
		  break;
	   }
   }int length=strlen(str);
   if(isPalindrome(str,0,length-1)){
	   printf("string is palindrome\'%s'\n");
   }else{
	   printf("string is not palindrome\'%s'\n");
   }return 0;
}
