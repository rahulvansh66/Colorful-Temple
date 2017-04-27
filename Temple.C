/* A colourful temple without graphics :)  */

#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int i,j,k,x,y=12, flag=0;
	clrscr();

	printf("\n");

	for(i=5;i>=1;i--)
	{
	printf("\t     ");
		for(j=1;j<=i;j++)
		{
			textcolor(4);
			cprintf("*");
		}
		printf("\n");
	}

	for(i=1;i<=1;i++)
	{
		//textcolor(5);
		printf("\t     *");
	printf("\n");
	}

	for(i=1;i<=5;i++)
	{
		printf("\t");
		for(k=5;k>=i;k--)
		{
			printf(" ");
		}
			for(j=1;j<=i;j++)
			{
			textcolor(1);
			cprintf("*  ");
			}
	      printf("\n");

	}

	  textcolor(14);
	for(i=1;i<=10;i++)
	{
		printf("\t");
		if(i==1||i==10)
		{
			for(j=1;j<=15;j++)
			cprintf("*");
		}
		else
		{

			cprintf("*");
			for(j=1;j<=y;j++)
			{
				if(j<=1)

				printf("  ");
				else
				{
				printf(" ");
			   //	getch();
				}


				if(i==5 && j==4)
				{
				    for(x=0;x<=4;x++)
				    {
					textcolor(2);
					cprintf("*");
				    }
				}
				if(i==5 && j==4)
				{
					textcolor(14);
					cprintf("   *");
					flag = 1;
				}

				if((i>=6 && j==4)  || (i>=6 && j==7)  )
				{
				       textcolor(2);
				       cprintf("*");
				       y=10;

				}

			}
			if(flag==1)
			{
				//getch();
				 flag=0;
			}
			else
			{
				textcolor(14);
				cprintf("*");

			}

		}
		printf("\n");
	}

	getch();
}
