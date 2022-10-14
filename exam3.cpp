#include <stdio.h>
//10508 김선우 
main(){
	
	int a, b, i;
	int temp;
	
	printf("*** 두 수 구간의 숫자 출력하기 ***\n");
	printf("두 수 입력: ");
	scanf("%d %d", &a, &b);
	
	if(a > b){
		
		temp = a;
		a = b;
		b = temp;
		
	}
	
	
	for(i = a;i <= b;i++){
		printf("%d ", i);
	}
	
}
