#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include <conio.h>
#include <string.h>

void Menu();
void AbreArq();
//void Busca();
//void Troca();
void Programadores();
void Sair();

int main(void){
	setlocale(LC_ALL,"");
	
	Menu();
}

void Menu(){
	int tecla;
	
	system("cls");
	printf("--------------------------------");
	printf("\n\tEDITOR DE TEXTO");
	printf("\n--------------------------------");
	printf("\na - Abrir/Editar o arquivo");
	//printf("\nb - Buscar palavra");
	//printf("\nt - Trocar uma palavra por outra");
	printf("\nm – Este menu");
	printf("\np – Programadores");
	printf("\ns – Sair do programa");
	printf("\n>  ");
	tecla=getch();
	
	switch (tecla){
	
	//a-abrir arquivo	
    case 97:
    AbreArq();
    break;
    
    //b-buscar palavra
    /*case 98:
    Busca();
    break;*/
    
    //f-fechar arquivo
    /*case 102:
    printf ("fechar");
    break;*/
    
    //m-menu
    case 109:
    Menu();
    break;
    
    //p-programadores
    case 112:
    Programadores();
    break;
    
    //s-sair
    case 115:
    Sair();
    break;
	}
}
void AbreArq(){
	FILE *arq;
	char ch;
	
    system("cls");
	printf("--------------------------------");
	printf("\n\tABRINDO O ARQUIVO");
	printf("\n--------------------------------\n\n");

	if ((arq=fopen("arquivo.txt","r+")) == NULL) {
		printf("Desculpe, o Arquivo não pode ser aberto.\n");
		exit(1);
	}

	//abrindo o arquivo.
	while (ch != EOF){
		ch = getc(arq);
		printf("%c",ch);
	}

	printf("\n\nDigite o texto ou 0 para salvar e sair.\n");
	do{
		ch=getchar();
		putc(ch,arq);
	}while (ch!='0');
	
	fclose(arq);

    printf("\n\nO Arquivo foi alterado com sucesso.\n\n" );
}

void Programadores(){
	int voltar;
	
	system("cls");
	printf("\n--------------------------------");
	printf("\n\tPROGRAMADORES");
	printf("\n--------------------------------");
	printf("\n\nEste programa foi desenvolvido por:");
	printf("\nAna Carolina Vargas Bianchini Gaspar");
	printf("\n\nDigite 'm' para voltar ao menu.");
	printf("\n>  ");
	voltar=getch();
	
	if(voltar==109||voltar==77){
		Menu();
	}
}

void Sair(){
	int sai;
	
	system("cls");
	printf("Deseja realmente fechar o programa? S/N");
	printf("\n>  ");
	sai=getch();
	
	if(sai==110||sai==78){
		Menu();
	}
}
