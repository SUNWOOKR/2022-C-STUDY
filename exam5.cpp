#include <stdio.h>
//10508 �輱�� 
main(){
	int money;
	int danwi = 1;
	int won;
	int a, b, c, d;

	
	printf("*�Է��� �뵷�� ȭ����� ���ϱ�*\n");
	printf("�ݾ��� �Է��ϼ���: ");
	scanf("%d", &money);
	
	do{
		a = money % 10;
		money = money / 10;
		printf("1�� %d", a);
	}while(money > 0);
	
	

}
