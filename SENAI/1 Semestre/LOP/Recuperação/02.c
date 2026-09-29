#include<stdio.h>
#include<windows.h>
void main(){
	SetConsoleOutputCP(CP_UTF8);
	
	int resposta1, resposta2, resposta3, vicios = 0;
	
	printf("Você fuma? (1 = sim / 0 = não):\n");
	scanf("%d", &resposta1);
	printf("Você bebe? (1 = sim / 0 = não):\n");
	scanf("%d", &resposta2);
	printf("Você usa drogas? (1 = sim / 0 = não):\n");
	scanf("%d", &resposta3);
	
	vicios = resposta1 + resposta2 + resposta3;
	
	if(vicios == 0){
		printf("Apto");
	}else if(vicios == 1){
		printf("Reavaliado");
	}else{
		printf("Inápto");
	}
}
getch();