#include <stdio.h>
#define size 30
void uzunlukbul(char *s);
int main() {
  char *a="Hasan Yilmaz-"; //Burada iki kelime arası boşluk da karakter uzunluguna dahil olur
  uzunlukbul(a);
  return 0;
}
void uzunlukbul(char *s)
{
  int i,length=0;
  for(i=0;s[i]!='\0';i++)
  {
    length++;
  }
  printf("Karakter Uzunlugu:%d",length);
}
