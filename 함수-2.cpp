#include <stdio.h>
#include <string.h>

int fact(int num){
	printf("%d ", num);
	if(num > 1){
		return num * fact(num-1);
	}else{
		return 1;
	}
}


int main(){
	//����Լ�
	printf("���丮�� ���� ���غ��ô�.\n");
	printf("����:");
	int num;
	scanf("%d", &num);
	
	printf("%d!=%d",num, fact(num));	
} 
