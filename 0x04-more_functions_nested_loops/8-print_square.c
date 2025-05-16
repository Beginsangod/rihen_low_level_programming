#include "main.h"

void print_square(int n){
 int i = 0;
 int j = 0;
 char c;
 if(n > 0){
  while(i < n){
   c = '#';
   _putchar(c);
   while(j < n){
    c = '#';
    _putchar(c);
    j++;
   }
   j = 0;
   c = '\n';
   _putchar(c);
   i++;
  }
 }else{
  c = '\n';
  _putchar(c);
 }
}
