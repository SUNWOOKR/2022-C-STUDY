#include <stdio.h>
int main(){
	int data[6], i;
	
	for(i = 0; i<6;i++){
		printf("정수를 입력 : ");
		scanf("%d", &data[i]);
	} 
	for(i = 0;i < 6;i++){
		printf("%d ", data[i]);
	}
} 
