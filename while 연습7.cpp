#include <stdio.h>


	void func1(){
		printf("1�� �Լ��Դϴ�.\n");
		
			int k = 0, sum = 0;
	
	while(4){
		++k;
		if(k > 10){
			break;
		} 
		if(k % 5 == 0){
			continue;
		}
		sum = sum + k;
		
	}
	printf("sum = %d\n", sum);
	}
	
	
	
	void func2(){
		
		printf("2�� �Լ��Դϴ�.\n");
		
		int n, count = 0, sum = 0;
		
		do{
			scanf("%d", &n);
			if(n < 1){
				printf("�ٽ� �Է��ϼ���: ");
				continue;
			}
			sum += n;
			count++;
		}while(count < 5);
		printf("�հ�: %d \n", sum);
	}
	

int main(){
	printf("=====================����1=======================\n");
	
	

	
	int no;
	while(4){
		printf("�Լ���ȣ: ");
		scanf("%d", &no);
		switch(no){
			case 0:
				return 0;
			case 1:
				func1();
				break;
				case 2:
				 func2();
			 	  break;
			 	  default:
			 	  	printf("�߸��� �Լ� ��ȣ�Դϴ�.\nint ");
		}
	}
	
	
}
