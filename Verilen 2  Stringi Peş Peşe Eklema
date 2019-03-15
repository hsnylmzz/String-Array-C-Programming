#include <stdio.h>
#include <string.h>
void add(char *s1,char *s2);
int main() {
  char a[10]="Ferdi";
  char b[10]="Besli";
  add(a,b);
  return 0;
}
void add(char *s1,char *s2)
{
  int i=0;
  while(s1[i]!='\0')
  {
     i++;
  }
  s1[i]=' ';
  i++;
  int j=0;
  while(s2[j]!='\0')
  {
     s1[i]=s2[j];
     i++;
     j++;
  }
  s1[i]=0;
  printf("s1(%d) : %s\n",i,s1);
  printf("s2(%d) : %s\n",j,s2);

  strcat(s1,s2);
  printf("s1 : %s\n",s1);
}
