#include<stdio.h>

int CountChar(char *str, char ch)
{
  int iCnt =0;

  while(*str != '\0')
  {
    if(*str == ch)
    {
      iCnt++;
     
    }
    return iCnt;
  }
}

int main()
{
  char Arr[20];
  int iRet =0;
  char cValue= '\0';

  printf("Enter the string\n");
  scanf("%[^'\n']s",Arr);

  printf("enter the character\n");
  scanf(" %c",&cValue);

  iRet = CountChar(Arr, cValue);
  printf("character frequency is : %d\n",iRet);

  return 0;
}