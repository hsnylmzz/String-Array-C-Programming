#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define size 5
#define max 45
void alfabe(char *s[size],int counter);
void sirala(char *s[size],int counter);
int main() {
  char m[size][max];
  char *gecici[size];
  int sayici=0;
  printf("Kelime giriniz\n ");
  for(sayici=0;sayici<size;sayici++)
  {
    scanf("%s",m[sayici]);
    gecici[sayici]=m[sayici];
  }
  alfabe(gecici,sayici);
  sirala(gecici,sayici);
  return 0;
}
void alfabe(char *s[size],int counter)
{
  int i,j;
  char *temp;
  for(i=0;i<counter-1;i++)
  {
    for(j=i+1;j<counter;j++)
    {
      if(strcmp(s[i],s[j])>0)
      {
         temp=s[j];
         s[j]=s[i];
         s[i]=temp;
      }
    }
  }
}
void sirala(char *s[size],int counter)
{
  int i;
  for(i=0;i<counter;i++)
  {
    printf("%2s\n",s[i]);
  }
}
