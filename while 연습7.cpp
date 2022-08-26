#include <stdio.h>


	void func1(){
		printf("1번 함수입니다.\n");
		
			int k = 0, sum = 0;
	
	while(4){
		++k;
		if(k > 10){
			break;
		} 
		if(k % 5 == 0){
			continue;
		}
		sum = sum + k;
		
	}
	printf("sum = %d\n", sum);
	}
	
	
	
	void func2(){
		
		printf("2번 함수입니다.\n");
		
		int n, count = 0, sum = 0;
		
		do{
			scanf("%d", &n);
			if(n < 1){
				printf("다시 입력하세요: ");
				continue;
			}
			sum += n;
			count++;
		}while(count < 5);
		printf("합계: %d \n", sum);
	}
	

int main(){
	printf("=====================문제1=======================\n");
	
	

	
	int no;
	while(4){
		printf("함수번호: ");
		scanf("%d", &no);
		switch(no){
			case 0:
				return 0;
			case 1:
				func1();
				break;
				case 2:
				 func2();
			 	  break;
			 	  default:
			 	  	printf("잘못된 함수 번호입니다.\nint ");
		}
	}
	
	
}
