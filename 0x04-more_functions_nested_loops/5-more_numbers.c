#include "main.h"

void more_numbers(void)
{
 int j=0;
 int i=0;
 char c;
 while(j<=10){
  while(i<=14){
   c = i;
   if(c == 10){
    int p = 1;
    while(p>=0){
     _putchar(p);
     p=p-1;
    }
   }else{
    _putchar(c);
   }
   i++;
  }
  c = '\n';
  _putchar(c);
  i = 0;
  j++;
 }
}
