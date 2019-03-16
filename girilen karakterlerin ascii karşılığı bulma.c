#include <stdio.h>
void asciiekle(char *s,int size);
int main() {
  char a[10]="abcABC";
  asciiekle(a,10);
  return 0;
}
void asciiekle(char *s,int size)
{
  int i;
  for(i=0;i<size;i++)
  {
    printf("%c : %d\n",s[i],s[i]);
  }
}
