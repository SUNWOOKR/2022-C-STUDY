#include <stdio.h>
main(){
	/*
	printf("=====================예제14=======================\n");
	
	int sum = 0, n;
	
	do{
		scanf("%d ", &n);
		sum = sum + n;
	}while(n != 0);
	printf("합 : %d", sum); 
	*/
	
	
	printf("\n");
	printf("=====================문제1=======================\n");
	
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
	
	
	printf("\n");
	printf("=====================문제2=======================\n");
	
	int i, num;
	
	i=1;
	printf("약수를 구할 수 입력: ");
	scanf("%d", &num);
	
	while(i <= num){
		if(num % i == 0){
			printf("%d ", i);
		}
		i++;
	}
	
	printf("\n");
	printf("=====================문제3=======================\n");
	//소수 구하기 
	
	int j, su, cnt = 0;
	
	printf("숫자 입력 : ");
	scanf("%d", &su);
	
	i = 1;
	while(i <= su){
		if(su % i == 0)		//1과 자기 자신이 나오면 cnt = 2 
		cnt++;
		i++;
	}
	if(cnt == 2)
	printf("%d은 소수\n", su);
	else
	printf("%d은 소수가 아니다\n", su);
	
}








