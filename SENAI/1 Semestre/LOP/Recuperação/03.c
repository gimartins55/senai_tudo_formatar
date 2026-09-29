#include<stdio.h>
#include<windows.h>
void main (){
	SetConsoleOutputCP(CP_UTF8);
	
	char nome[20], tipo, cont;
	int senhaC = 0, senhaP = 0, total = 0; 
	
	do{
		printf("Digite o nome do paciente:\n");
		scanf("%s", &nome);
		printf("Escolha o tipo de atendimento\n");
		printf("C para atendimento comum.\n");
		printf("P para atendimento prioritário:\n");
		scanf(" %c", &tipo);
		
		if(tipo == 'C'){
		    senhaC++;
		    printf("A senha para %s é C%d\n", nome, senhaC);
		}else if(tipo == 'P'){
			senhaP++;
			printf("A senha para %s é P%d\n", nome, senhaP);
			total++;
		}else{
			printf("Atendimento inválido");
		}
		 total++;
		 
		printf("MAis algum paciente? (s = sim / n = não):\n");
		scanf(" %c", &cont);
		
        }while(cont == 's');
        printf("Atendimentos finalizados, hoje foram emitidas %d senhas", total);
}
	getch();