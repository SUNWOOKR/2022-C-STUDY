#include <stdio.h>
#include <string.h>

int fact(int num){
	printf("%d ", num);
	if(num > 1){
		return num * fact(num-1);
	}else{
		return 1;
	}
}


int main(){
	//재귀함수
	printf("팩토리얼 값을 구해봅시다.\n");
	printf("숫자:");
	int num;
	scanf("%d", &num);
	
	printf("%d!=%d",num, fact(num));	
} 
