#include "main.h"

void print_diagonal(int n){
 int i = 0;
 char c;
 while(i < n){
  int d = 0;
  while(d < i){
   c = ' ';
   _putchar(c);
   d++;
  }
  c = '\\';
  _putchar(c);
  c = '\n';
  _putchar(c);
  i++;
 }
 c = '\n';
 _putchar(c);
}
