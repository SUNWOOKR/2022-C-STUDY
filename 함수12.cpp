#include <stdio.h>

void message(int n, char * str){
	printf("[SEOUL] %s\n", str);
	printf("*******************\n");
	int i;
	for(i=0;i<n;i++){
		printf("*");
	}printf("\n");
}
int calc(int a, char op, int b){
	int res = 999;
	switch(op){
		case '+':
			res = a+b;
			break;
		case '-':
			res = a-b;
			break;
		case '*':
			res = a*b;
			break;
		case '/':
			res = a/b;
			break;	
		default:
			message(10, "잘못된 연산자입니다.");
	}
	return res;
}

int square(int a){
	return a*a*a;
}

main(){
	 
	 int ret = calc(2, '+', 3);
	 printf("결과 %d", ret);
	 message(ret, "결과");
	 
	 printf("%d의 제곱값은 %d", 5, square(5)); 
	 
}
