#include <stdio.h>
#include "ctype7e.h"

int main(){
	char str[MAX_SIZE];
   	printf("���ڿ� �Է� : ");
   	gets(str); 
   	isalpha_A(str);
   	isdigit_A(str);
	iscntrl_A(str);
	isgraph_A(str);
	isupper_A(str);
	islower_A(str);
}
