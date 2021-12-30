#include<stdio.h>
#include<stdbool.h>

bool ChkCharacter(char *str, char ch)
{
	while(*str != '\0')
		{
			str++;
			{
				if(*str == ch)
				{
					return true;
				}
				else
				{
					return false;
				}
			}
		}
}

int main()
{
	char Arr[30];
	char cValue = '\0';
	bool bRet = false;

	printf("enter the string\n");
	scanf("%[^'\n']s",Arr);

	printf("enter the character\n");
	scanf(" %c",&cValue);

	bRet = ChkCharacter(Arr,cValue);

	if(bRet == true)
	{
		printf("character found");
	}
	else
	{
		printf("character not found");
	} 
    return 0;  
}