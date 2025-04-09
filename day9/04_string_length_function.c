#include<stdio.h>
int string_length(char str[]){
    int count = 0;
    for(int i=0; i<str[i]!='\0'; i++){
        count++;
    }
    return count;
}



int main(){
    
     char str[] = "ABCDEFGHIJKLPNOPQRSTUVWXYZ";
     
     printf("%d", string_length(str));
}