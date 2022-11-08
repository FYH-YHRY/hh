#include<stdio.h>
int add(int x,int y)
{
	int z;
	z=x+y;
	return(z);
}
int main() 
{
	int a,b,c=0;
	scanf("%d %d",&a,&b);
	c=add(a,b);
	printf("c=%d\n",c);
	return 0; 
	 
}
