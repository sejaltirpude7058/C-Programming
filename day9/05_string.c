/*
input a string of length n and count all the vowels in the given string
*/

#include<stdio.h>
int main(){
    char ch[13] = "Sejal Tirpude";
    int count = 0;
    for(int i=0; i<ch[i]!='\0'; i++){
        if(ch[i]=='a' || ch[i]=='e' || ch[i]=='i' || ch[i]=='o' || ch[i]=='u' || ch[i]=='A' || ch[i]=='E' || ch[i]=='I' || ch[i]=='O' || ch[i]=='U' ){
            count++;
        }
    }
    printf("The number of vowels present in string is %d", count);
    
}