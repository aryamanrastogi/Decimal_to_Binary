#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<math.h>

int main(void)
{
	int a,i,flag=0;
	int binary[14] = { 0 };
	
	printf("Please enter the decimal number: ");
	scanf("%d", &a); 	
	
	for (i = 13; a != 0; i--)
	{
		if (a % 2 == 0)
		{
			binary[i] = 0;
		}
		else
		{
			binary[i] = 1;
		}
		a = a / 2;
	}
	
	printf("The binary representation of the number entered is: ");
	
	// to find the number of consecutive ones
	for (i = 0; i < 14; i++)
	{
		printf("%d", binary[i]);
		if (binary[i] == binary[i + 1] && binary[i]==1)
		{
			flag += 1;
		}
	}
	printf("\nThe number of consecutive ones = %d\n", flag);
}


