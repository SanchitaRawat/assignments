//breadth first search

#include<stdio.h>
#include<conio.h>
int a[20][20],b[20],visited[20],n,f=0,r=-1;
void bfs(int x)
{
	for (int i=1;i<=n;i++)
	  if(a[x][i] && !visited[i])
	   b[++r]=i;
	if(f<=r)
	{
		visited[b[f]]=1;
		bfs(b[f++]);
	}
}
void main() 
{
	int v;

	printf("\n Enter the number of vertices:");
	scanf("%d",&n);
	for (int i=1;i<=n;i++)
	{
		b[i]=0;
		visited[i]=0;
	}
	printf("\n Enter the matrix:\n");
	for (int i=1;i<=n;i++)
	  for (int j=1;j<=n;j++)
	   scanf("%d",&a[i][j]);
	printf("\n Enter the starting vertex:");
	scanf("%d",&v);
	bfs(v);
	printf("\n The node which are reachable are:\n");
	for (int i=1;i<=n;i++)
	  if(visited[i])
	   printf("%d\t",i);
	   else
	   printf("\n Bfs is not possible");
	getch();
}
