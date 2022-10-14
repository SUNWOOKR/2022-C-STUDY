#include <stdio.h>
//10508 김선우 
main(){
	int n, sum = 0, i = 1;
	
	printf("합을 구할 마지막 수 입력: ");
	scanf("%d", &n);
	
	while(i <= n){
		sum = sum + i;
		i++;
	}
	
	printf("1부터 %d까지의 합은 %d 입니다.",n, sum);
}
