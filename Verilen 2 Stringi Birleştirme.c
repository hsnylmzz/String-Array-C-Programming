#include <stdio.h>
void add(char *s1,char *s2);
int main() {
  char *a="Ferdi";
  char *b="Besli";
  add(a,b);
  return 0;
}
void add(char *s1,char *s2)
{
  int i,j,k;
  char s3[20];
  for(i=0;s1[i]!='\0';i++)
  {
     s3[i]=s1[i];
  }
  for(j=i;s2[j-i]!='\0';j++)
  {
     s3[j]=s2[j-i];
  }
  for(k=0;k<j;k++)
  {
     printf("%c",s3[k]);
  }
}
