#include <stdio.h>
int main(){
	//����
	
	int i = 10;
	
	do{
		printf("%d ",i);
		i--;
	} while(i>=5);
	printf("\n");
	 
	printf("=======================����11==================\n");
	
	int n;
	i = 0;
	printf("����: ");
	scanf("%d", &n);
	do{
		printf("I LOVE Programming \n");
		i++;
	}while(n > i);
	 
	printf("=======================����12======================\n");
	
	int num;
	
	do{
		printf("�����Է�: ");
		scanf("%d", &num);
		
		if(num > 0){
			if(num % 2 == 1)
			printf("Ȧ��\n");
			else
			printf("¦��\n");
		}
	}while(num > 0);
	
	printf("======================����13=======================\n");
	
	int sum = 0;
	int j = 1;
	
	do{
		sum += j;
		j = j + 2;
	}while(j <= 50);
	printf("1���� 50������ Ȧ���� ��: %d", sum);
	
	printf("\n");
	printf("=====================����14=======================\n");
	
}
