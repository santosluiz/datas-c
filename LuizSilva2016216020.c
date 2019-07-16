// #################################################
//  Instituto Federal da Bahia
//  Salvador - BA
//  Curso de Análise e Desenvolvimento de Sistemas http://ads.ifba.edu.br
//  Disciplina: INF029 - Laboratório de Programação
//  Professor: Renato Novais - renato@ifba.edu.br

//  ----- Orientações gerais -----
//  Descrição: esse arquivo deve conter as questões do trabalho do aluno.
//  Cada aluno deve renomear esse arquivo para Aluno<MATRICULA>.c
//  O aluno deve preencher seus dados abaixo, e implementar as questões do trabalho

//  ----- Dados do Aluno -----
//  Nome: Luiz Américo Santana
//  email: luix.a@live.com
//  Matrícula: 2016216020
//  Semestre: 2

//  Copyright © 2016 Renato Novais. All rights reserved.
// Última atualização: 20/06/2018 - 19/08/2016

// #################################################

#include <stdio.h>
#include <stdio.h>
#include <string.h>
#define TamDia 3
#define TamMes 3
#define TamAno 5

/*
## função utilizada para testes  ##

 somar = somar dois valores
@objetivo
    Somar dois valores x e y e retonar o resultado da soma
@entrada
    dois inteiros x e y
@saida
    resultado da soma (x + y)
 */
int somar(int x, int y){
  int soma = 0;
  soma = x + y;
  return soma;
}

/*
## função utilizada para testes  ##

 fatorial = fatorial de um número
@objetivo
    calcular o fatorial de um número
@entrada
    um inteiro x
@saida
    fatorial de x -> x!
 */
int fatorial(int x){ //função utilizada para testes
  int fat = 1;
  return fat;
}

int verificaData(int dia, int mes, int ano){
    int dataStatus;

	if (mes > 12 || mes < 1 || dia < 1 || dia > 31){
		dataStatus = 0;
	}
	else if ((dia < 1 && dia > 31) && (mes == 1||mes == 3||mes == 5||mes == 7||mes == 8||mes == 10||mes == 12)) {
		dataStatus = 0;
	}
	else if ((dia < 1 && dia > 30) && (mes == 4|| mes == 6 || mes == 9 || mes == 11)){
        dataStatus = 0;
    }
	else if (ano % 400 == 0 || (ano % 4 == 0 && ano % 100 != 0)) {
		if (mes == 2 && dia > 29) {
			dataStatus = 0;
		}
	}
	else if (mes == 2 && dia > 28) {
		dataStatus = 0;
	}

	return dataStatus;
}

/*
 Q1 = validar data
@objetivo
    Validar uma data
@entrada
    uma string data. Formatos que devem ser aceitos: dd/mm/aaaa, onde dd = dia, mm = mês, e aaaa, igual ao ano. dd em mm podem ter apenas um digito, e aaaa podem ter apenas dois digitos.
@saida
    0 -> se data inválida
    1 -> se data válida
 */
int q1(char *data){
    int datavalida = 1;
    char dia[tamDia], mes[TamMes], ano[TamAno];
    int i, j, dia, mes, ano;

    for(i = 0; data[i] != '/'; i++){
        dia[i] = data[i];
    }
    dia = atoi(dia);

    for(i = i + 1, j = 0; data[i] != '/'; i++ , j++){
        mes[j] = data[i];
    }
    mes = atoi(mes);

    for(i = i + 1, j = 0; data[i] != '\0'; i++, j++){
        ano[j] = data[i];
    }
    ano = atoi(ano);

    if(verificaData(dia,mes,ano) == 0){
        return 0;
    }else{
        return 1;
    }
}

/*
 Q2 = diferença entre duas datas
 @objetivo
    Calcular a diferença em anos, meses e dias entre duas datas
 @entrada
    uma string datainicial, uma string datafinal. Além disso, a função tem três parâmetros qtdDias, qtdMeses e qtdAnos. Esses três parâmetros devem ser utilizados para guardar os resultados dos cálculos. Na chamada da função deve passar o valor -1 para os três
 @saida
    1 -> cálculo de diferença realizado com sucesso
    2 -> datainicial inválida
    3 -> datafinal inválida
    4 -> datainicial > datafinal
 */
int q2(char *datainicial, char *datafinal, int *qtdDias, int *qtdMeses, int *qtdAnos){

    //calcule os dados e armazene nas três variáveis a seguir
    int nDias, nMeses, nAnos;


    if (q1(datainicial) == 0)
        return 2;

    nDias = 4;
    nMeses = 10;
    nAnos = 2;




    /*mantenha o código abaixo, para salvar os dados em
    nos parâmetros da funcao
    */
    *qtdDias = nDias;
    *qtdAnos = nAnos;
    *qtdMeses = nMeses;

    //coloque o retorno correto
    return 1;

}


/*
 Q3 = encontrar caracter em texto
 @objetivo
    Pesquisar quantas vezes um determinado caracter ocorre em um texto
 @entrada
    uma string texto, um caracter c e um inteiro que informa se é uma pesquisa Case Sensitive ou não. Se isCaseSensitive = 1, a pesquisa deve considerar diferenças entre maiúsculos e minúsculos.
        Se isCaseSensitive != 1, a pesquisa não deve  considerar diferenças entre maiúsculos e minúsculos.
 @saida
    Um número n >= 0.
 */
int q3(char *texto, char c, int isCaseSensitive){
    int qtdOcorrencias = -1;

    return qtdOcorrencias;

}

/*
 Q4 = encontrar palavra em texto
 @objetivo
    Pesquisar todas as ocorrências de uma palavra em um texto
 @entrada
    uma string texto base (strTexto), uma string strBusca e um vetor de inteiros (posicoes) que irá guardar as posições de início e fim de cada ocorrência da palavra (strBusca) no texto base (texto).
 @saida
    Um número n >= 0 correspondente a quantidade de ocorrências encontradas.
    O vetor posicoes deve ser preenchido com cada entrada e saída correspondente. Por exemplo, se tiver uma única ocorrência, a posição 0 do vetor deve ser preenchido com o índice de início do texto, e na posição 1, deve ser preenchido com o índice de fim da ocorrencias. Se tiver duas ocorrências, a segunda ocorrência será amazenado nas posições 2 e 3, e assim consecutivamente. Suponha a string "Instituto Federal da Bahia", e palavra de busca "dera". Como há uma ocorrência da palavra de busca no texto, deve-se armazenar no vetor, da seguinte forma:
        posicoes[0] = 13;
        posicoes[1] = 16;
        Observe que o índice da posição no texto deve começar ser contado a partir de 1.
        O retorno da função, n, nesse caso seria 1;

 */
int q4(char *strTexto, char *strBusca, int posicoes[30]){
    int qtdOcorrencias = -1;

    return qtdOcorrencias;

}

/*
 Q5 = inverte número
 @objetivo
    Inverter número inteiro
 @entrada
    uma int num.
 @saida
    Número invertido
 */
int inverteNumero(int num){
  int inverso=0, i=1;

  while(i<=num){
    inverso*=10;
    inverso+=(num%(i*10)-num%i)/i;
    i*=10;
  }
  return inverso;
}

int q5(int num){
   int numeroInverso = 0;
   numeroInverso = inverteNumero(num);

   return numeroInverso;
}

/*
 Q5 = ocorrência de um número em outro
 @objetivo
    Verificar quantidade de vezes da ocorrência de um número em outro
 @entrada
    Um número base (numerobase) e um número de busca (numerobusca).
 @saida
    Quantidade de vezes que número de busca ocorre em número base
 */

int q6(int numerobase, int numerobusca){
   int qtdOcorrencias = 0;
   int baseItem[300], buscaItem[300];
   int auxBase = 0, i = 0, j = 0, controle = 0, auxBusca = 0;

	while(numerobase >= 0){
		if(numerobase < 10 && numerobase >= 0){
			baseItem[auxBase] = numerobase;
			break;
		} else {
			baseItem[auxBase] = numerobase % 10;
			numerobase = numerobase / 10;
			auxBase++;
		}
	}

	while(numerobusca >= 0){
		if(numerobusca < 10 && numerobase >= 0){
			buscaItem[auxBusca] = numerobusca;
			break;
		} else {
			buscaItem[auxBusca] = numerobusca % 10;
			numerobusca = numerobusca / 10;
			auxBusca++;
		}
	}

	for (i = 0; i <= auxBase; ++i){
		if(auxBusca == 0){
			if (buscaItem[0] == baseItem[i]){
				qtdOcorrencias++;
			}
		} else {
			if(buscaItem[j] == baseItem[i]){
				controle = 1;
				j++;
			} else if (buscaItem[j] != baseItem[i]){
				controle = 0;
				j = 0;
			}
			if(controle == 1 && j == auxBusca){
				controle = 0;
				j = 0;
				qtdOcorrencias++;
			}
		}
	}
   return qtdOcorrencias;
}
