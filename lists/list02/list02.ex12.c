#include<stdio.h>

int main(){
	int entrada;
	scanf("%d",&entrada);
	switch (entrada){
		case 1 :
			printf("Nome: ACRE\nSigla AC\nCapital: RIO BRANCO\nRegiao: NORTE\n");
			break;
		case 2  :
			printf("Nome: ALAGOAS\nSigla: AL\nCapital: MACEIO\nRegiao: NORDESTE\n");
			break;
		case 3 :
			printf("Nome: AMAPA\nSigla: AP\nCapital: MACAPA\nRegiao: NORTE\n");
			break;
		case 4 :
			printf("Nome: AMAZONAS\nSigla: AM\nCapital: MANAUS\nRegiao: NORTE\n");
			break;
		case 5 :
			printf("Nome: BAHIA\nSigla: BA\nCapital: SALVADOR\nRegiao: NORDESTE\n");
			break;
		case 6 :
			printf("Nome: CEARA\nSigla: CE\nCapital: FORTALEZA\nRegiao: NORDESTE\n");
			break;
		case 7 :
			printf("Nome: ESPIRITO SANTO\nSigla: ES\nCapital: VITORIA\nRegiao: SUDESTE\n");
			break;
		case 8 :
			printf("Nome: GOIAS\nSigla: GO\nCapital: GOIANIA\nRegiao: CENTRO-OESTE\n");
			break;
		case 9 :
			printf("Nome: MARANHAO\nSigla: MA\nCapital: SAO LUIS\nRegiao: NORDESTE\n");
			break;
		case 10 :
			printf("Nome: MATO GROSSO\nSigla: MT\nCapital: CUIABA\nRegiao: CENTRO-OESTE\n");
			break;
		case 11 :
			printf("Nome: MATO GROSSO DO SUL\nSigla: MS\nCapital: CAMPO GRANDE\nRegiao: CENTRO-OESTE\n");
			break;
		case 12 :
			printf("Nome: MINAS GERAIS\nSigla: MG\nCapital: BELO HORIZONTE\nRegiao: SUDESTE\n");
			break;
		case 13 :
			printf("Nome: PARA\nSigla: PA\nCapital: BELÉM\nRegiao: NORTE\n");
			break;
		case 14 :
			printf("Nome: PARAIBA\nSigla: PB\nCapital: JOAO PESSOA\nRegiao: NORDESTE\n");
			break;
		case 15 :
			printf("Nome: PARANA\nSigla: PR\nCapital: CURITIBA\nRegiao: SUL\n");
			break;
		case 16 :
			printf("Nome: PERNAMBUCO\nSigla: PE\nCapital: RECIFE\nRegiao: NORDESTE\n");
			break;
		case 17 :
			printf("Nome: PIAUI\nSigla: PI\nCapital: TERESINA\nRegiao: NORDESTE\n");
			break;
		case 18 :
			printf("Nome: RIO DE JANEIRO\nSigla: RJ\nCapital: RIO DE JANEIRO\nRegiao: SUDOESTE\n");
			break;
		case 19 :
			printf("Nome: RIO GRANDE DO NORTE\nSigla: RN\nCapital: NATAL\nRegiao: NORDESTE\n");
			break;
		case 20 :
			printf("Nome: RIO GRANDE DO SUL\nSigla: RS\nCapital: PORTO ALEGRE\nRegiao: SUL\n");
			break;
		case 21 :
			printf("Nome: RONDÔNIA\nSigla: RO\nCapital: PORTO VELHO\nRegiao: NORTE\n");
			break;
		case 22 :
			printf("Nome: RORAIMA\nSigla: RR\nCapital: BOA VISTA\nRegiao: NORTE\n");
			break;
		case 23 :
			printf("Nome: SANTA CATARINA\nSigla: SC\nCapital: FLORIANOPOLIS\nRegiao: SUL\n");
			break;
		case 24 :
			printf("Nome: SAO PAULO\nSigla: SP\nCapital: SAO PAULO\nRegiao: SUDESTE\n");
			break;
		case 25 :
			printf("Nome: SERGIPE\nSigla: SE\nCapital: ARACAJU\nRegiao: NORDESTE\n");
			break;
		case 26 :
			printf("Nome: TOCANTINS\nSigla: TO\nCapital: PALMAS\nRegiao: NORTE\n");
			break;
		default :
			printf("INEXISTENTE\n");
			break;
	}
	return 0;
}
