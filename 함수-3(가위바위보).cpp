#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
	int user, com;
	int win=0, count=0;
	while(4){
	printf("가위바위보를 입력하세요 \n");
	printf("가위:1   바위:2   보:3\n");
	scanf("%d", &user);
	if(user == 0){
		printf("승률 : %d회 중에 %d회 이김 %.2f%%", count, win,(float)win/count*100);
		break;
	}
	count++;
	srand(time(NULL));
	com = rand()%3+1;
	printf("com:%d\n", com); 
	
	if((user == 1 && com == 3) || (user == 2 && com == 1) || (user == 3 && com == 2)){
		printf("축하합니다\n");
		win++;
	}
	else if(user == com){
			printf("비겼습니다.\n");
	}
	else{
		printf("당신이 졌어요\n");
	}
	}
}
