#include <stdio.h>

exam1(){
	int i;
	for(i = 1; i <= 6;i++){
		printf("%d\n", i);
	}
}

exam2(){
	int i, sum = 0;
	for(i  = 1;i <= 10;i++){
		sum = sum + i;
	}
	printf("1~10지의 합: %d\n",sum);
}

exam3(){
	int i, even, odd;
	even = odd = 0;
	
	for(int i=1;i <= 100;i++){
		if(i % 2 == 0){
			even = even + i;
		}else{
			odd = odd + i;
		}
	} 
	printf("짝수합 = %d, 홀수합 = %d\n",even, odd);
}

exam4(){
	
	int i;
	for(int i = 1;i <= 9;i++){
		printf("2 ×%d = %d\n",i, 2 * i);
	}
}

exam5(){
	
}



int main(){
	
	int no;
	
	while(4){
		printf("문제번호: ");
		scanf("%d", &no);
		printf("%d번 문제 ================\n", no);
 		
		switch(no){
			case 1: exam1(); break;
			case 2: exam2(); break;
			case 3: exam3(); break;
			case 4: exam4(); break;
			case 5: exam5(); break;
		}
	} 
	
}
