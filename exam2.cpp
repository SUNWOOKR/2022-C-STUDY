#include <stdio.h>
//10508 �輱�� 
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
	
	printf("3�� ����� ������ 1���� 50������ �� = %d", sum);
	
}
