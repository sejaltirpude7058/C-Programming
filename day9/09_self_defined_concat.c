#include<stdio.h>
#include<string.h>
void merge_string(char a[], char b[]){ 
    int len_of_a = strlen(a);
    int len_of_b = strlen(b);
//  printf("%s %s",a,b);
 int k = 0;
 char merge[50];
  for(int i=0; i<len_of_a; i++){
       merge[k] = a[i];
       k++;
  }

   for(int i=0; i<len_of_b; i++){
       merge[k] = b[i];
       k++;
  }

  for(int i=0; i<len_of_a+len_of_b; i++){
       printf("%c", merge[i] );
  }
 
}


int main(){
    char a[] = "Sejal";
    char b[] = " Tirpude";

    merge_string(a, b);
    
    
}