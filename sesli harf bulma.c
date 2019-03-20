#include <stdio.h>
void sesliharfbul(char *s);
int main() {
  char *kelime="hasan";
  sesliharfbul(kelime);
  return 0;
}
void sesliharfbul(char *s)
{
  int i;
  for(i=0;s[i]!='\0';i++)
  {
    if(s[i]=='a' || s[i]=='e' || s[i]=='i'|| s[i]=='o'|| s[i]=='u')
    {
      printf("%d.indisteki %c harfi sesli harftir\n",i+1,s[i]);
    }
    else
    {
      printf("%d.indisteki %c harfi sesli harfdegildir\n",i+1,s[i]);
    }
  }
}
