#include<stdio.h>

int CountTwo(int iNo)

{
    int iRet =2;
	int iCnt =0;
	
	while (iNo >0)
	{
		if(iNo % 10 == iRet)
	    iCnt++;
		iNo = iNo / 10;
		
	}
	
  return iCnt;
}

int main()
{
	int iValue = 0;
	int iRet =0;
	int bRet =0;
	
	printf("eneter number\n");
	scanf("%d",&iValue);
	iRet = CountTwo(iValue);
	
	printf("%d",iRet);
	return 0;
}




	
	
	
	
	
	
	
	
	

