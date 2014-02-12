//to determine whether a triangle is formed or not
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<alloc.h>
void main()
{
	int x1,x2,x3,y1,y2,y3;
	float a,b,c;
	clrscr();
	printf("enter coordinates of first vertex\n");
	scanf("%d%d",&x1,&y1);
	printf("enter coordinates of second vertex\n");
	scanf("%d%d",&x2,&y2);
	printf("enter coordinates of third vertex\n");
	scanf("%d%d",&x3,&y3);
	a=sqrt(pow(x2-x3,2)+pow(y2-y3,2));
	b=sqrt(pow(x3-x1,2)+pow(y3-y1,2));
	c=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
	printf("%f",b*b);
	if((a+b)>c || (b+c)>a || (a+c)>b)
	{
		if(a==b&&b==c)
			printf("it is an equilateral triangle");
		else if(a==b||b==c||c==a)
		{
			if((a*a)==(b*b)+(c*c)||(b*b)==(a*a)+(c*c)||(c*c)==(a*a)+(b*b))
				printf("it is right angled isosceles triangle");
			else
				printf("it is isosceles triangle");
		}
		else if((a*a)==(b*b)+(c*c)||(b*b)==(a*a)+(c*c)||(c*c)==(a*a)+(b*b))
			printf("it is right angled triangle");
		else
			printf("it is a scalene triangle");
	}
	else
		printf("not a triangle");
	getch();
}
