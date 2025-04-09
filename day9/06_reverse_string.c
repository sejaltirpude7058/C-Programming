#include<stdio.h>
#include<string.h>
int main(){
    char str[50];
    printf("Enter string: ");
    gets(str);
    
    printf("String is: %s", str);

    int i=0;
    int j = strlen(str)-1;
    while(i<=j){
        int temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }

    printf("\n After reversing : %s", str);
}