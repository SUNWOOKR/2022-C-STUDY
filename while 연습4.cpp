#include <stdio.h>

int main(){
	int i = 0, sum = 0;
	while(1){
		printf("%d ", i);
		i = i+3;
		
		if(i > 100){
			break;
		}
	}
	printf("sum=%d", sum);
}
