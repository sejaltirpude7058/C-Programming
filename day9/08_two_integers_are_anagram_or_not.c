/*

Two integers are anagram or not 
*/

#include<stdio.h>
#include<string.h>
void sort_string(char str[]){
    int len = strlen(str);
    for(int i=0; i<len-1; i++){
        int check = 0; // no swaps
      for(int j=0; j<len-1-i; j++){
        if(str[j]>str[j+1]){
            int temp = str[j];
            str[j] = str[j+1];
            str[j+1] = temp;
            check=1; // swap happened
        }
      }
      if(check==0) break;
    }
}

int main(){
    char s1[20];
    printf("Enter string 1: ");
    gets(s1);

    char s2[20];
    printf("Enter string 2: ");
    gets(s2);
    int len = strlen(s1);

   sort_string(s1);
   sort_string(s2);
    
    printf("string 1 after sorting: %s\n", s1);
    printf("string 2 after sorting: %s\n", s2);

    if(strcmp(s1, s2)==0){
        printf("Anagram yes");
    }else{
        printf("no anagram");
    }
}