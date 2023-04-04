#include<stdio.h>
int main(){
 int a[] = {1, 2, 3, 4, 5};     
    int sum = 0;    
 int length = sizeof(a)/sizeof(a[0]);    
 for (int i = 0; i < length; i++) {     
       sum = sum + a[i];    
    }      
    printf("Sum of all the elements of an array: %d", sum);    
    return 0;    
}    
