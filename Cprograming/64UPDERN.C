#include<stdio.h>
#include<conio.h>
void main()
{
	char i,a;
	clrscr();
	for(i=65;i<=89;i+=4)
	{
		if(i%2!=0)
		{
		a =i+34;
		printf("\t%c",i);
		printf("\t%c",a);

		}

       }



	getch();
}
