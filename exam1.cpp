#include <stdio.h>
//10508 �輱�� 
main(){
	int n, sum = 0, i = 1;
	
	printf("���� ���� ������ �� �Է�: ");
	scanf("%d", &n);
	
	while(i <= n){
		sum = sum + i;
		i++;
	}
	
	printf("1���� %d������ ���� %d �Դϴ�.",n, sum);
}
