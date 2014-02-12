//value that occurred maximum number of times
#include<stdio.h>
#include<conio.h>
#include<malloc.h>
void main()
{

	int *a,*b,i,n,max,loc,maxele;
	clrscr();
	printf("enter the no of elements\n");
	scanf("%d",&n);
	a=(int *)malloc(n*sizeof(int));
	printf("enter the elements between 0 and 99\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	maxele=a[0];
	for(i=1;i<n;i++)
	{
		if(a[i]>maxele)
			maxele=a[i];
	}
	b=(int *)malloc((maxele+1)*sizeof(int));
	for(i=0;i<100;i++)
		b[i]=0;
	for(i=0;i<n;i++)
		b[a[i]] +=1;
	max=b[a[0]];
	for(i=1;i<n;i++)
	{
		if(b[a[i]]>max)
		{
			max=b[a[i]];
		}
	}
	printf("numbers which occured maximum number of times\n");
	for(i=0;i<maxele+1;i++)
	{
		if(max==b[i])
			printf("%d\n",i);
	}		
	getch();
}
