#include "main.h"

void print_triangle(int size){
 int i = 0;
 int j = 0;
 int d = size/2;
 char c;
 while(i < size){
  while(j < size){
   int n = 0;
   if(j == d || (j >= d-i && j <= d+i)){
     c = '#';
     _putchar(c);
   }else{
     c = ' ';
     _putchar(c);
   }
   n++;
   j++;
  }
  j = 0;
  c = '\n';
  _putchar(c);
  i++;
 }
}
