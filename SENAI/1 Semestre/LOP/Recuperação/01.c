#include<stdio.h>
#include<windows.h>
void main(){
	SetConsoleOutputCP(CP_UTF8);
	
	int empresas, anos, i, total=0; 
	
	printf("Em quantas empresas você já trabalhou?:\n");
	scanf("%d", &empresas);
	for(i = 1; i <= empresas; i++){
		printf("Na %dº empesa você ficou quantos anos?:\n", i);
		scanf("%d", &anos);
		total = total + anos;		
	}
	printf("Você possui %d anos de experiência!", total);
}
getch();