#include <stdio.h>
void harfsayisi(char *s1,char *s2);
int main() {
  char *a="Hasan";
  char *b="Hakan";
  harfsayisi(a,b);
  return 0;
}
void harfsayisi(char *s1,char *s2)
{
  int i;
  int boyut1=0;
  int boyut2=0;
  int esitharfsayisi=0;
  for(i=0;s1[i]!='\0';i++)
  {
    boyut1++;
  }
  for(i=0;s2[i]!='\0';i++)
  {
    boyut2++;
  }
  for(i=0;s1[i]!='\0';i++)
  {
    if(s1[i]==s2[i])
    {
      esitharfsayisi++;
    }
  }
  if(boyut1==boyut2)
  {
    printf("Harf sayilari birbirine esittir ");
  }
  else
  {
    printf("Harf sayilari birbirine esit degildir ");
  }
}
