#include <stdio.h>

exam1(){
	int sum = 30;
	while(4){
		if(sum < 10){
			break;
		}
		printf("%d \n", sum);
		sum = sum - 2;
	}
}

exam2(){
	int n, sum = 0;
	
	printf("���� ���� ������ �� �Է�: ", n); 
	scanf("%d", &n);
	
	for(int i = 1;i <= n;i++){
		sum = sum + i;
	}
	printf("%d\n", sum);
}

exam3(){
	int n = 0, sum = 0;
	
	while(4){
		++n;
		if(n > 10){
			break;
		}
		if(n % 5 == 0){
			continue;
		}
		sum = sum + n;
	}
	
	printf("%d\n", sum);
}

exam4(){
	int su, i = 1,sum = 0;
	
	printf("�� �Է�: ");
	scanf("%d", &su);
	
	while(su >= i){
		if(su % i == 0){
			sum++;
		}
		i++;
	}
	
	if(sum == 2){
		printf("%d�� �Ҽ�\n", su);
		
	}else{
			printf("%d�� �Ҽ��� �ƴϰ�\n", su);
		}
}

exam5(){
	
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
