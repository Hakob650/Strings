#include <stdio.h>
#include <string.h>
int isLetter(char c){
    return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}
char* reverseOnlyLetters(char* s) {
    int left=0;
    int right=strlen(s)-1;
    while(left<right){
        if(!isLetter(s[left])){
            left++;
        }else if(!isLetter(s[right])){
            right--;
        }else{
            char tmp=s[left];
            s[left]=s[right];
            s[right]=tmp;
           left++;
           right--;
        }
    }return s;
}

