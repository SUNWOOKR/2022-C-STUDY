#include <stdio.h>
#include <string.h>


//���� ����
//���� �߻��� �������� -999���� ó�� 


float divide(float a, float b){
	if(b == 0){
		printf("0���� ���� �� �����ϴ�.");
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
			printf("�߸��� �������Դϴ�.\n");
			return -999;	
	}
	return ret;
}

 

int main(){
	float a,b;
	char op;
	printf("������� �Է�:ex) 2+3\n");
	scanf("%f %c %f", &a, &op, &b);
	float ret = calc(a,b,op);
	if(ret!=-999){
		printf("%.2f %c %.2f = %.2f", a, op, b, calc(a,b,op));
	}
}
