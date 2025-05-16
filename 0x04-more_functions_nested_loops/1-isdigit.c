#include "main.h"

int _isdigit(int c){
 int d[] = {'1','2','3','4','5','6','7','8','9','0'};
 int i = 0;
 while(i <= 10){
  if(c == d[i]){
   return 1;
  }else{
   i++;
  }
 }
 return 0;
}
