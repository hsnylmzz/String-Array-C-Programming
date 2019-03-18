#include <stdio.h>
#define size 16
void convert_number_to_binary_string(int num, char binary_string[size]);
int main() 
{
  int sayi;
  char ikilitabankarakter[size];
  printf("Bir sayi giriniz: ");
  scanf("%d",&sayi);
  convert_number_to_binary_string(sayi,ikilitabankarakter);
  return 0;
}

void convert_number_to_binary_string(int num, char binary_string[size])
 {
    int shifted_number = num;
    char temp_string[32]={0};
    int counter = 0;

    while(shifted_number > 0)
      {
         switch (shifted_number % 2) 
          {
              case 0:
              temp_string[counter] = '0';
              break;
             
              case 1:
              temp_string[counter] = '1';
              break;
            
              default:
              break;
          }
       counter ++;
       shifted_number = shifted_number / 2;
     }

  for(int i = 0; i < counter; i++)
   {
        binary_string[i] = temp_string[counter - i - 1];
        printf("'%c'\t",binary_string[i]);
   }
}
