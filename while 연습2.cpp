#include <stdio.h>

int main(){
	//����5)
	/*
	int i = 1, n, sum = 0;
	
	printf("���� ���� ������ �� �Է�: ");
	scanf("%d", &n);
	
	while(i <= n){
		sum += i;
		i++;
	} 
	printf("1���� %d������ ���� %d�Դϴ�\n", n, sum);
	printf("==============================\n");
	*/
	//����)
	
	int i, n, sum = 0;
	
	
	printf("���� ��: ");
	scanf("%d", &i); 
	printf("������ ��: ");
	scanf("%d", &n);
	
	int shap = i;
	
	while(i <= n){
		sum += i;
		i++;
	}
	printf("%d���� %d������ ���� %d \n", shap,n,sum);
	printf("==============================\n");
	
	 
	
	 
}
