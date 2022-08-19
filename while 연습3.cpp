#include <stdio.h>

int main(){
		//예제6) 
	
	int dan = 1;
	printf("***2단***\n");
	
	while(dan < 10){
		printf("2 × %d = %d \n", dan, 2 * dan);
		dan++;
	}
	printf("==============================\n");
	
	//예제7)
	while(4){
	int ddan, j = 1;
	
	printf("몇 단?[0:종료]:");
	scanf("%d", &ddan);

		if(ddan == 0){
			printf("bye~ bye~");
		break;
	}
	while(j < 10){
		
		printf("%d × %d = %d \n",ddan, j ,ddan* j);
		j++;
	}
	
	printf("==============================\n");
}
	 
}

