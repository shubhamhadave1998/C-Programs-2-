#include<stdio.h>

int strrevX(char *start)
{ 
  char *end = start;
  char temp;
  while(*end != '\0')
  {
    end++;
  }
  end--;

  while(start < end)
  {
    temp=*start;
    *start=*end;
    *end=temp;
    
    start++;
    end--;
  }


}


int main()
{
  char Arr[20];
  
  printf("Enter the string\n");
  scanf("%[^'\n']s",Arr);
 
  strrevX(Arr);
  printf("reverse string : %s\n",Arr);
  return 0;
}
