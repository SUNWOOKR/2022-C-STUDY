#include <stdio.h>
//10508 �輱�� 
main(){
	
	int a, b, i;
	int temp;
	
	printf("*** �� �� ������ ���� ����ϱ� ***\n");
	printf("�� �� �Է�: ");
	scanf("%d %d", &a, &b);
	
	if(a > b){
		
		temp = a;
		a = b;
		b = temp;
		
	}
	
	
	for(i = a;i <= b;i++){
		printf("%d ", i);
	}
	
}
