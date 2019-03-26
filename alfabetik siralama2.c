#include <stdio.h>
#define size 50
void sortalphabet(char *s);
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
    for(j=0;s[j]!='\0';j++)   // Bu kodda for içine j=i+1 değilde j=0 konulursa Z den A'ya kadar sıralar.
    {
      if(s[i]>s[j])          // j=0 olup s[i] < s[j] olarak değiştirilse A dan Z'ye kadar sıralanır.
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
