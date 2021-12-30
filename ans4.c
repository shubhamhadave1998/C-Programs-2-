#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
BOOL ChkSpecial(char ch)
{
	if((ch>='A')&&(ch<='Z'))
	{
		return 0;
    }
    else if((ch>='a')&&(ch<='z'))
    {
 	    return 0;
    }
    else
    {
 	    return 1;
    }
}



int main()
{
	char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter the character");
    scanf("%c",&cValue);
    bRet = ChkSpecial(cValue);
    if(bRet == TRUE)
    {
    	printf("It is special Character");
    }
    else
    {
        printf("It is not a special Character");
    }
    return 0;
}