#include <stdio.h>
//10508 ±è¼±¿ì 
main(){
	int i, j;
	
	for(int i = 4;i >= 0;i--){
		for(int j = 0;j < i;j++){
			printf("0");
		}printf("*");
		printf("\n");
	}	
}
