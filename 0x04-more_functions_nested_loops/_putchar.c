#include <stdio.h>
#include <stdlib.h>
#include "main.h"

void _putchar(char c){
	char commande[100];
	if(c == '\n'){
		sprintf(commande,"echo");	
	}else{
		sprintf(commande, "echo -n '%c'", c);
	}
	system(commande);
}
