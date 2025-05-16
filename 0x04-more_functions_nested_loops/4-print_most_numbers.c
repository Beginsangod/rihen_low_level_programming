#include "main.h"

void print_most_numbers(void){
 int i=0;
 int c;
 while(i<=9){
  c = i;	 
  if(c != 2 && c != 4){
   _putchar(c);
  }
  i++;
 }
}
