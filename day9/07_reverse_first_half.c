#include<stdio.h>
#include<string.h>
int main(){
    char str[50];
    printf("Enter string: ");
    gets(str);
    
    printf("Before String : %s", str);

    int size = strlen(str);

    for(int i=0, j=size/2-1; i<=j; i++, j--){
         int temp = str[i];
         str[i] = str[j];
         str[j] = temp;
    }

    printf("\nAfter String : %s", str);
}