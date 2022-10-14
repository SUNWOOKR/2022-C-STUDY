#include <stdio.h>
//10508 김선우 
main(){
	int money;
	int danwi = 1;
	int won;
	int a, b, c, d;

	
	printf("*입력한 용돈의 화폐숫자 구하기*\n");
	printf("금액을 입력하세요: ");
	scanf("%d", &money);
	
	do{
		a = money % 10;
		money = money / 10;
		printf("1원 %d", a);
	}while(money > 0);
	
	

}
