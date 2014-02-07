#include<stdio.h>
#include<conio.h>
#include<malloc.h>
void main()
{
	int *a,*b,*c,i,j,k,n1,n2;
	float f;
	clrscr();
	printf("enter first array size:");
	scanf("%d",&n1);
	a=(int *)malloc(n1*sizeof(int));
	printf("enter the elements in ascending order:\n");
	for(i=0;i<n1;i++)
		scanf("%d",&a[i]);
	printf("enter second array size:");
	scanf("%d",&n2);
	b=(int *)malloc(n2*sizeof(int));
	printf("enter the elements in ascending order:\n");
	for(j=0;j<n2;j++)
		scanf("%d",&b[j]);
	c=(int *)malloc((n1+n2)*sizeof(int));
	i=j=k=0;
	while(j < n1 && j < n2)
	{
		if(a[i] < b[j])
			c[k++] = a[i++];
		else
			c[k++] = b[j++];
	}
	while(i < n1)
	{
		c[k++] = a[i++];
	}
	while(j < n2)
	{
		c[k++] = b[j++];
	}
	if(k%2==0)
	{
		k=k/2;
		f=(float)(c[k]+c[k-1])/2;
		printf("median is %f",f);
	}
	else
	{
		printf("median is %f",(float)c[k/2]);
	}
	getch();
}