#include <stdio.h>

void main() {
    int a[10] ,search ,found;
    int i,n;
    
    printf("enter the numbers you want to enter ");
    scanf("%d",&n);
    if(n>10)
    {
        printf("enter values less than ten numbers \n");
        
    }
    else
    {
        printf("enter the numbers ");
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            
        }
    }
    printf("enter the number for search \n");
    scanf("%d",&search);
    for(i=0;i<n;i++)
    {
        if(a[i]==search)
        {
            found=1;
            break;
            
        }
    }
if(found==1)
{
 printf("is present in array");
 
}
 else{
     printf("is not present in array");
     
 }  
    return 0;
}
