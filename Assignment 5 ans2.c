#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
BOOL ChkZero(int iNo)
{
BOOL bRet=0;
 while(iNo>0)  //iNo!0
 {
  bRet=iNo%10;
  
  iNo=iNo/10; 
  }   
 return bRet ;
}
int main()
{
int iValue = 0;
BOOL bRet = FALSE;

printf("Enter number");
scanf("%d",&iValue);
bRet = ChkZero(iValue);
if(bRet == TRUE)
{
printf("It Contains Zero");
}
else
{
printf("There is no Zero");
}
return 0;
}



	
	
	
	
	
	
	
	
	

