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
			message(10, "�߸��� �������Դϴ�.");
	}
	return res;
}

int square(int a){
	return a*a*a;
}

main(){
	 
	 int ret = calc(2, '+', 3);
	 printf("��� %d", ret);
	 message(ret, "���");
	 
	 printf("%d�� �������� %d", 5, square(5)); 
	 
}
