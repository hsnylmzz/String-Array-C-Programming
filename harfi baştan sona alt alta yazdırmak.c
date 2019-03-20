#include <stdio.h>
void stairs(char *s,int length);
int main() {
  char *metin="Hasan Yilmaz";
  stairs(metin,30);
  return 0;
}
void stairs(char *s,int length)
{
  int i,j;
  for(i=0;s[i]!='\0';i++)
  {
    for(j=0;j<=i;j++)
    {
      printf("%c",s[j]);
    }
    printf("\n");
  }
}
