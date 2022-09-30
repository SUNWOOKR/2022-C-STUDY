#include <stdio.h>

exam6(){
	//44문제6 
	int a, b, temp, i;
	printf("***두 수 구간의 숫자 출력하기 ***\n");
	printf("두 수 입력 : ");
	scanf("%d %d", &a, &b);
	if(a>b)
	{
		temp = a;		//swap알고리즘 
		a = b;
		b = temp;
	}
	for(i = a; i <= b; i++){
		printf("%d ", i);
	}
}

exam7(){
	//45쪽 9번 for문으로 풀기 
	/*
	int i, j;
	for(i = 0;i < 5; i++){
		for(j = 0; j < i; j++){
			printf("0");
		}
		printf("*\n");
	} 
	*/
	
	/*
	//45쪽 9번 while문으로 풀기 
	int i = 1, j;
	
	while(i <= 5){
		j = 1;
		while(j<i){
			printf("0");
			j++;
		}
		printf("*\n");
		i++;
	}
	*/
	
	//거꾸로 뒤집기 
	for(int i = 0; i < 4; i++){
		for(int j = 3;j > i;j--){
		printf("*");
		}
		printf("0\n");
	}
}

exam8(){
	int i, j;
	for(i = 1; i <=9; i++){
		for(j = 2;j <= 5;j++){
			printf("%2d × %2d = %2d\t",j, i, i*j);
		}printf("\n");
	}	
	printf("\n");
	for(i = 1; i <=9; i++){
		for(j = 6;j <= 9;j++){
			printf("%2d ×%2d = %2d\t",j, i, i*j);
		}printf("\n");
	}	
}

exam9(){
	
}

exam10(){
	
}



int main(){
	
	int no;
	
	while(4){
		printf("문제번호: ");
		scanf("%d", &no);
		
		switch(no){
			case 6: exam6(); break;
			case 7: exam7(); break;
			case 8: exam8(); break;
			case 9: exam9(); break;
			case 10: exam10(); break;
		}
	} 
	
}
