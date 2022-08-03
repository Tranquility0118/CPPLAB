#ifndef __CTYPE7E__
#define __CTYPE7E__
#define MAX_SIZE 128
#include<stdio.h>
//strlen
int string_len(char* string) {
   int count = 0;
   while (string[count] != '\0') {
      ++count;
   }
   return count;
}

//isalpha
void isalpha_A(char keyboard_input[]) {
   	int i;
   	int yesCount=0, noCount=0;
   	int n = string_len(keyboard_input);
	
	printf("### isalpha_A activated! ###\n");
   	for (i = 0; i < n; ++i) {
      	if ((keyboard_input[i] >= 65 ) && (keyboard_input[i] <= 90)){
      		printf("O - Big Alphabet		: %c, ASCII code : %d \n", keyboard_input[i], keyboard_input[i]);
        	yesCount++;
		  }
      	else if ((keyboard_input[i] >= 97) && (keyboard_input[i] <= 122)){
      		printf("O - Small Alphabet		: %c, ASCII code : %d \n", keyboard_input[i], keyboard_input[i]);
        	yesCount++;
		  }
      	else{
      		printf("X - Not Alphabet		: %c, ASCII code : %d \n", keyboard_input[i], keyboard_input[i]);
        	noCount++;
		}
        	
   }
   printf("Alphabet Count : %d, non-Alphabet Count : %d \n\n", yesCount, noCount);
}

//isdigit
void isdigit_A(char keyboard_input[]){
	int i;
	int yesCount=0, noCount=0;
	int n = string_len(keyboard_input);
	
	printf("### isdigit_A activated! ###\n");
	for(i=0; i<n; ++i){
		if((keyboard_input[i] >= '0') && (keyboard_input[i] <= '9')){
			printf("O - Integer type Digit		: %c, ASCII code: %d \n", keyboard_input[i], keyboard_input[i]);
			yesCount++;
		}	
		else{
			printf("X - Not Integer type Digit	: %c, ASCII code: %d \n", keyboard_input[i], keyboard_input[i]);
			noCount++;
		}
	}
	printf("Integer Count : %d, non-Integer Count : %d \n\n", yesCount, noCount);
}

//isgraph
void isgraph_A(char keyboard_input[]){
	int i;
	int yesCount=0, noCount=0;
	int n = string_len(keyboard_input);
	
	printf("### isgraph_A activated! ###\n");
	for(i=0; i<n; ++i){
		if((keyboard_input[i] >= 33) && (keyboard_input[i] <= 126)){
			printf("O - ASCII Graphic char 		: %c, ASCII code: %d \n", keyboard_input[i], keyboard_input[i]);
			yesCount++;
		}
		else{
			printf("X - ASCII non-Graphic char 	: %c, ASCII code : %d \n", keyboard_input[i], keyboard_input[i]);
			noCount++;
		}
	}
	printf("Graphic Char Count : %d, non-Graphic Char Count : %d \n\n", yesCount, noCount);
}

//iscntrl
void iscntrl_A(char keyboard_input[]){
	int i;
	int yesCount=0, noCount=0;
	int n = string_len(keyboard_input);
	
	printf("### iscntrl_A activated! ###\n");
	for(i=0; i<n; ++i){
		if((keyboard_input[i] < 32) && (keyboard_input[i] == 127)){
			printf("O - ASCII Control char 		: %c, ASCII code: %d \n", keyboard_input[i], keyboard_input[i]);
			yesCount++;
		}
		else{
			printf("X - ASCII non-Control char 	: %c, ASCII code : %d \n", keyboard_input[i], keyboard_input[i]);
		}
	}
	printf("Control Char Count : %d, non-Graphic Char Count : %d \n\n", yesCount, noCount);
}

//isupper
void isupper_A(char keyboard_input[]){
	
	/*
	함수 원형 
	char test;
	
	if(65 <= c <= 90) return 1;
	else return 0;

	if(isupper_A(test) == 1) printf("O - Big Alphabet 			: %c, ASCII code: %d \n");
	else printf("X - Small Alpha or non-Alpha 	: %c, ASCII code : %d \n");
	*/
	
	int i;
	int yesCount=0, noCount=0;
	int n = string_len(keyboard_input);
	
	printf("### issuper_A activated! ###\n");
	for(i=0; i<n; ++i){
		if((keyboard_input[i] >= 65) && (keyboard_input[i] <= 90)){
			printf("O - Big Alphabet 			: %c, ASCII code: %d \n", keyboard_input[i], keyboard_input[i]);
			yesCount++;
		}
		else{
			printf("X - Small Alpha or non-Alpha 	: %c, ASCII code : %d \n", keyboard_input[i], keyboard_input[i]);
			noCount++;
		}
	}

	printf("Big Alphabet Count : %d, Small Alphabet or non-Alphabet Count : %d \n\n", yesCount, noCount);
}

//islower
void islower_A(char keyboard_input[]){
	/*
	char test;
	
	printf("islower_A activated!\n");
	if(97 <= c <= 122) return 1;
	else return 0;
	
	if(islower_A(test) == 1) printf("O - Small Alphabet			: %c, ASCII code: %d \n");
	else printf("X - Big Alpha or non-Alpha 	: %c, ASCII code : %d \n");
	*/
	
	int i;
	int yesCount=0, noCount=0;
	int n = string_len(keyboard_input);
	
	printf("### islower_A activated! ###\n");
	for(i=0; i<n; ++i){
		if((keyboard_input[i] >= 97) && (keyboard_input[i] <= 122)){
			printf("O - Small Alphabet		: %c, ASCII code: %d \n", keyboard_input[i], keyboard_input[i]);
			yesCount++;
		}
		else{
			printf("X - Small Alpha or non-Alpha 	: %c, ASCII code : %d \n", keyboard_input[i], keyboard_input[i]);
			noCount++;
		}
	}
	
	printf("Small Alphabet Count : %d, Big Alphabet or non-Alphabet Count : %d \n\n", yesCount, noCount);
}

#endif
