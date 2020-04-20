//depth first search

#include<stdio.h>
int a[10][10],visit[10],n;
void dfs(int x)
{
    
	printf("\n%d",x);
    visit[x]=1;
	
	for(int j=0;j<n;j++)
       if(!visit[j]&&a[x][j]==1)
            dfs(j);
}
   
 
void main()
{
    
    printf("Enter number of vertices:");
   
	scanf("%d",&n);
 
    //read the adjecency matrix
	printf("\nEnter adjecency matrix of the graph:");
   
	for(int i=0;i<n;i++)
       for(int j=0;j<n;j++)
			scanf("%d",&a[i][j]);
 
    //initiaising visit as 0
   for(int k=0;k<n;k++)
        visit[k]=0;
 
    dfs(0);
}
 
