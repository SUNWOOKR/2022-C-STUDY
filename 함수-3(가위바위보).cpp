#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
	int user, com;
	int win=0, count=0;
	while(4){
	printf("������������ �Է��ϼ��� \n");
	printf("����:1   ����:2   ��:3\n");
	scanf("%d", &user);
	if(user == 0){
		printf("�·� : %dȸ �߿� %dȸ �̱� %.2f%%", count, win,(float)win/count*100);
		break;
	}
	count++;
	srand(time(NULL));
	com = rand()%3+1;
	printf("com:%d\n", com); 
	
	if((user == 1 && com == 3) || (user == 2 && com == 1) || (user == 3 && com == 2)){
		printf("�����մϴ�\n");
		win++;
	}
	else if(user == com){
			printf("�����ϴ�.\n");
	}
	else{
		printf("����� �����\n");
	}
	}
}
