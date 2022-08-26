#include <stdio.h>
int main(){
	//봉사
	
	int i = 10;
	
	do{
		printf("%d ",i);
		i--;
	} while(i>=5);
	printf("\n");
	 
	printf("=======================예제11==================\n");
	
	int n;
	i = 0;
	printf("정수: ");
	scanf("%d", &n);
	do{
		printf("I LOVE Programming \n");
		i++;
	}while(n > i);
	 
	printf("=======================예제12======================\n");
	
	int num;
	
	do{
		printf("숫자입력: ");
		scanf("%d", &num);
		
		if(num > 0){
			if(num % 2 == 1)
			printf("홀수\n");
			else
			printf("짝수\n");
		}
	}while(num > 0);
	
	printf("======================예제13=======================\n");
	
	int sum = 0;
	int j = 1;
	
	do{
		sum += j;
		j = j + 2;
	}while(j <= 50);
	printf("1부터 50까지의 홀수의 합: %d", sum);
	
	printf("\n");
	printf("=====================예제14=======================\n");
	
}
