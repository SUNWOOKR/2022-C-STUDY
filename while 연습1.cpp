#include <stdio.h>

int main(){
	int n = 2;
	
	while(n < 5){
		printf("HI~\n");
		n++;
	} 
	printf("n=%d\n", n);
	printf("==========================\n");
	
	//����1) 
	
	int i = 0;
	while(i < 10){
		printf("#");
		i++;
	}
	printf("\n");
	printf("==========================\n");
	
	//����2)
	
	int num = 1;
	
	while(num <= 5){
		printf("�ݺ����� : %d \n", num);
		num++;
	} 
	printf("�ݺ������� �� num = %d \n", num);
	printf("==========================\n");
	
	//����3)
	
	int minus = 30;
	while(minus >= 10){
		printf("%d ", minus);
		minus = minus - 2;
	}
	printf("\n");
	printf("==========================\n");
	
	//����4)
	
	int plus = 1;
	int sum = 0;
	
	while(plus <= 10){
		sum += plus;
		plus++;
	}	
	printf("1���� 10������ ��: %d \n", sum);
	printf("=========================\n");
	 
	 
}
