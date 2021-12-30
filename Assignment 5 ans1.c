#include<stdio.h>

void Display(int);

int main()
{
	int iValue =0;
	
	printf("enter th number\n");
	scanf("%d",&iValue);
	
	Display(iValue);
	return 0;
}

void Display(int iNo)
{
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	
	int iDigit = 0;
	
	while(iNo > 0)
	{
		
        iDigit = iNo % 10;
        printf("%d\n",iDigit);
        iNo = iNo / 10;  
	}
}