#include <stdio.h>
#include <stdlib.h>
#include <time.h>


exam1(){
	 
}

exam2(){
	
}

exam3(){
	int n, a;
	
	printf("4�ڸ��� �Է� : ");
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
	printf("�� ��° �ױ��� ���ұ��? ");
	scanf("%d", &n);
	for(int i = 1; i <= n; i++){
		printf("%d ", a1);
		a3 = a1 + a2;
		
		a1= a2;
		a2 = a3;
		//0 1 1 2 3 5�ϱ� �� ĭ�� �з��� 
	}
}

exam5(){
	int answer, cnt, guess;
	
//	answer = rand();	
//	printf("%d\n", answer);
srand(time(NULL));
answer = rand()%100 + 1;

do{
	printf("1~100������ ����:");
	scanf("%d", &guess);
	
	
	cnt++;
	
	if(guess > answer)
		printf("������ ���ڰ� �� ����.\n");
	else if(guess < answer)
		printf("������ ���ڰ� �� ����.\n");
		
}while(guess != answer);
printf("�����մϴ�! ������ %d�̰�, �õ�Ƚ�� = %d\n", answer, cnt);
}



int main(){
	
	int no;
	
	while(4){
		printf("������ȣ: ");
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
