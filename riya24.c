# include<stdio.h>
int main()
{
	int pin,i,x=4743;
	printf("Pin must be correct");
	for(i=1;i<=3;i++)
	{
		printf("\nEnter your ATM pin:");
		scanf("%d",&pin);
		if(pin==x)
		{
			printf("\n collect your cash");
			break ;
		}
		else if (i==3)
		{
			printf("\nATM has been blocked");
		}
		else if (x!=pin)
		{
			printf("\n Incorrect pin plz try after 24 hours");
		}
	}
	return 0;
}
