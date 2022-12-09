#include <stdio.h>
#include <string.h>


//간단 계산기
//문제 발생시 연산결과가 -999으로 처리 


float divide(float a, float b){
	if(b == 0){
		printf("0으로 나눌 수 없습니다.");
		return -999;
	}else{
		return a/b;
	}
}

float calc(float a, float b,char op){
	float ret=0;
	switch(op){
		case '+':
			ret = a + b;
			break;
		case '-':
			ret = a - b;
			break;
		case '*':
			ret = a * b;
			break;
		case '/':
			ret = divide(a,b);
			break;	
		default:
			printf("잘못된 연산자입니다.\n");
			return -999;	
	}
	return ret;
}

 

int main(){
	float a,b;
	char op;
	printf("연산식을 입력:ex) 2+3\n");
	scanf("%f %c %f", &a, &op, &b);
	float ret = calc(a,b,op);
	if(ret!=-999){
		printf("%.2f %c %.2f = %.2f", a, op, b, calc(a,b,op));
	}
}
