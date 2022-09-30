#include <stdio.h>
#include <stdlib.h>
#include <time.h>


exam1(){
	 
}

exam2(){
	
}

exam3(){
	int n, a;
	
	printf("4자리수 입력 : ");
	scanf("%d", &n);
	
	do{
		a = n % 10;
		printf("%d", a);
		n = n / 10;
	}while(n > 0);
	
	printf("\n"); 
}

exam4(){
	int n, a1 = -0, a2 = 1, a3, i;
	printf("몇 번째 항까지 구할까요? ");
	scanf("%d", &n);
	for(int i = 1; i <= n; i++){
		printf("%d ", a1);
		a3 = a1 + a2;
		
		a1= a2;
		a2 = a3;
		//0 1 1 2 3 5니까 한 칸씩 밀려남 
	}
}

exam5(){
	int answer, cnt, guess;
	
//	answer = rand();	
//	printf("%d\n", answer);
srand(time(NULL));
answer = rand()%100 + 1;

do{
	printf("1~100까지의 숫자:");
	scanf("%d", &guess);
	
	
	cnt++;
	
	if(guess > answer)
		printf("제시한 숫자가 더 높다.\n");
	else if(guess < answer)
		printf("제시한 숫자가 더 낮다.\n");
		
}while(guess != answer);
printf("축하합니다! 정답은 %d이고, 시도횟수 = %d\n", answer, cnt);
}



int main(){
	
	int no;
	
	while(4){
		printf("문제번호: ");
		scanf("%d", &no);
		
		switch(no){
			case 1: exam1(); break;
			case 2: exam2(); break;
			case 3: exam3(); break;
			case 4: exam4(); break;
			case 5: exam5(); break;
		}
	} 
	
}
