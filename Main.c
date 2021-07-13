/*
Accept two numbers from user and display first number in second
number of times.
*/

#include<stdio.h>

void Display(int iNo1, int iNo2)
{
	if(iNo2 < 0)
	{
		iNo2 = -iNo2;
	}

	while(iNo2 > 0)
	{
		printf("%d\t",iNo1);

		iNo2--;
	}
	printf("\n");
}

int main()
{
	int iValue1 = 0, iValue2 = 0;

	printf("Enter First Number\n");
	scanf("%d",&iValue1);

	printf("Enter Second Number\n");
	scanf("%d",&iValue2);

	Display(iValue1,iValue2);

	return 0;
}