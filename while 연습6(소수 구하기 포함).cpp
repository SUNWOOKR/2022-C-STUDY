#include <stdio.h>
main(){
	/*
	printf("=====================����14=======================\n");
	
	int sum = 0, n;
	
	do{
		scanf("%d ", &n);
		sum = sum + n;
	}while(n != 0);
	printf("�� : %d", sum); 
	*/
	/*
	
	printf("\n");
	printf("=====================����1=======================\n");
	
	int i = 0, sum = 0;
	
	while(1){
		
		
	}
	
	*/
	printf("\n");
	printf("=====================����2=======================\n");
	
	int i, num;
	
	i=1;
	printf("����� ���� �� �Է�: ");
	scanf("%d", &num);
	
	while(i <= num){
		if(num % i == 0){
			printf("%d ", i);
		}
		i++;
	}
	
	printf("\n");
	printf("=====================����3=======================\n");
	//�Ҽ� ���ϱ� 
	
	int j, su, cnt = 0;
	
	printf("���� �Է� : ");
	scanf("%d", &su);
	
	i = 1;
	while(i <= su){
		if(su % i == 0)		//1�� �ڱ� �ڽ��� ������ cnt = 2 
		cnt++;
		i++;
	}
	if(cnt == 2)
	printf("%d�� �Ҽ�\n", su);
	else
	printf("%d�� �Ҽ��� �ƴϴ�\n", su);
}








