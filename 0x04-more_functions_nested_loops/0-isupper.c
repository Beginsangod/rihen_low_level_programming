#include <stdio.h>

int _isupper(int c){
 char m[] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
 int i = 0;
 while(i <= 26)
 {
  if(c == m[i]){
    return 1;
  }else{
   i++;
  }
 }
 return 0;
}
