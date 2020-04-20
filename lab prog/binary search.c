
//  Binary Search 
#include <stdio.h> 
  

int bsearch(int array[], int l, int r, int x) 
{ 
    if (r >= l) 
    { 
        int mid = (l + r) / 2; 
  
        
        if (array[mid] == x) 
            return mid; 
  
         
        if (array[mid] > x) 
            return bsearch(array, l, mid - 1, x); 
  
        
        return bsearch(array, mid + 1, r, x); 
    } 
  
    
    return -1; 
} 
  
int main(void) 
{ 
    int a[10],s,val;
    printf("enter array size");
    scanf("%d",&s);
    printf("enter array elements");
    for(int i=0;i<s;i++)
     scanf("%d",&a[i]);
    printf("enter value to be searched");
    scanf("%d",&val);
    
    int result = bsearch(a, 0,s-1, val); 
    (result == -1) ? printf("Element is not present in array") : printf("Element is present at position %d",result); 
    return 0; 
} 