#include "main.h"

void print_line(int n){
     int i = 0;
     char c;
     while(i < n){
       c = '_';
       _putchar(c);
      i++;
     }
     c = '\n';
     _putchar(c);
}
