#include <stdio.h>
#define size 50
void sortalphabet(char *s);    //Bu kodda A dan Z ye kadar sıralamaktadır.
int main() {                  
  char a[50]="osmanyilmaz";
  sortalphabet(a);
  return 0;
}
void sortalphabet(char *s)
{
  int i,j;
  char temp;
  for(i=0;s[i]!='\0';i++)
  {
    for(j=i+1;s[j]!='\0';j++)
    {
      if(s[i]>s[j])
      {
        temp=s[j];
        s[j]=s[i];
        s[i]=temp;
      }
    }
  }
  printf("Alfabetik Siralanmis Hali\n");
  for(i=0;s[i]!='\0';i++)
  {
    printf("%c",s[i]);
  }
}
