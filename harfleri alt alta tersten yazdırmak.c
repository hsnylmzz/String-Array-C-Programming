#include <stdio.h>
void stairs(char *s,int length);
int main() {
  char *metin="Hasan Yilmaz";
  stairs(metin,12);
  return 0;
}
void stairs(char *s,int length)
{
  int i,j;
  for(i=length;i>=0;i--)
  {
    for(j=length;j>=i;j--)
    {
      printf("%c",s[j]);
    }
    printf("\n");
  }
}
