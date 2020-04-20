
//  linear Search 
#include <stdio.h> 
void main()
{ int a[10],s,item,c=-1;
    
    printf("enter array size");
    scanf("%d",&s);
    printf("enter array elements");
    for(int i=0;i<s;i++)
    scanf("%d",&a[i]);
    printf("enter value to be searched");
    scanf("%d",&item);
    for(int j=0;j<s;j++)
     if(a[j]==item)
      c=j;
    if(c==0)  
     printf("element not found");
    else
    printf("element found at: %d",c+1);
    
}
  
