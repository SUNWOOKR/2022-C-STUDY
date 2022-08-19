#include <stdio.h>

int main(){
	int n = 2;
	
	while(n < 5){
		printf("HI~\n");
		n++;
	} 
	printf("n=%d\n", n);
	printf("==========================\n");
	
	//예제1) 
	
	int i = 0;
	while(i < 10){
		printf("#");
		i++;
	}
	printf("\n");
	printf("==========================\n");
	
	//예제2)
	
	int num = 1;
	
	while(num <= 5){
		printf("반복내용 : %d \n", num);
		num++;
	} 
	printf("반복문종료 후 num = %d \n", num);
	printf("==========================\n");
	
	//예제3)
	
	int minus = 30;
	while(minus >= 10){
		printf("%d ", minus);
		minus = minus - 2;
	}
	printf("\n");
	printf("==========================\n");
	
	//예제4)
	
	int plus = 1;
	int sum = 0;
	
	while(plus <= 10){
		sum += plus;
		plus++;
	}	
	printf("1부터 10까지의 합: %d \n", sum);
	printf("=========================\n");
	 
	 
}
