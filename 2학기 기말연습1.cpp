#include <stdio.h>
#include <string.h>
int main(){
	char voca[50];
	int i, len = 0;
	scanf("%s", voca);
	while(voca[len] != '\0'){
		len++;
	}
	printf("%d", len);
}
