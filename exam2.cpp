#include <stdio.h>
//10508 김선우 
main(){
	
	int sum = 0, i = 0;
	
	while(4){
		++i;
		if(i % 3 == 0){
			continue;
	}
		if(i > 50){
			break;
		}
			sum = sum + i;
	}	
	
	printf("3의 배수를 제외한 1부터 50까지의 합 = %d", sum);
	
}
