#include <stdio.h>
void stringcompare(char *s1,char *s2,int size);
int main() {
  char *a="ahmet";
  char *b="ahmed";
  stringcompare(a,b,5);
  return 0;
}
void stringcompare(char *s1,char *s2,int size)
{
  int i,counter=0;
  for(counter=0;counter<size && (*s1==*s2);counter++,s1++,s2++)
  {
    ;
  }
  if(*s1==*s2)
  {
    printf("Harf sayilari esittir");
  }
  else if(*s1<*s2)
  {
    printf("Harf sayilari kucuktur");
  }
  else
  {
    printf("Harf sayilari buyuktur");
  }
}
