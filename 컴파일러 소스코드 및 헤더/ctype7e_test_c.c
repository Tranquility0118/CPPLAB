#include <stdio.h>
#include "ctype7e.h"

int main(){
	char str[MAX_SIZE];
   	printf("문자열 입력 : ");
   	gets(str); 
   	isalpha_A(str);
   	isdigit_A(str);
	iscntrl_A(str);
	isgraph_A(str);
	isupper_A(str);
	islower_A(str);
}
