#include<stdio.h>
#include<string.h>
void strtogglex(char *str)
{

  while (*str!='\0')
  {
    str++;
   {
   if(*str>='A' && *str<='Z')
     {
       *str=*str+32;
     }
   else if(*str>='a' && *str<='z')
     {
       *str=*str-32;
     }
  }
}
    
  printf("%s",*str);
}
    
    
int main()
{
  char arr[20];
  printf("Enter string\n");
  scanf("%[^'\n']s",arr);
  strtogglex(arr);
  printf("Modified string is: %s",arr);
  return 0;
}