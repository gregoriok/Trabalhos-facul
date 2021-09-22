#include <cstdlib> 
#include <ctime> 
#include <iostream>

using namespace std;
int main () {
	int acertos = 0,premiado,escolhido;
	float p_acertos = 0;
	int tentativas=0;
	int qtd_tentativas=0;
	srand((unsigned)time(NULL));
	cout << "SIMULACAO - BILHETE PREMIADO\n\n";
	cout <<"Em Show de determinado Programa de TV, o apresentador\n";
	cout <<"escolhe  alguem  da  plateia  para  participar de uma\n";
	cout <<"premiacao.\n\n";
	cout <<"Apresentador: Tenho 3 bilhetes (B1, B2 e B3) na  mao.\n";
	cout <<"Um destes bilhetes  esta PREMIADO e  eu sei  qual e',\n";
	cout <<"entao, pede que o participante escolha um bilhete.\n\n";
	cout <<"Apos a escolha, o Apresentador pega um dos 2 bilhetes\n";
	cout <<"que nao foram escolhidos e, propoe a troca deste pelo\n";
	cout <<"pelo bilhete que o participante escolheu, mas, coloca\n";
	cout <<"a seguinte situacao ao participante:\n\n";
	cout <<"Apresentador: Se voce escolheu o bilhete errado, este\n";
	cout <<"que eu estou propondo  a troca e' o bilhete premiado,\n";
	cout <<"estou AFIRMANDO.\n\n";
	cout <<"Se fosse VOCE o participante diante desta situacao, o\n";
	cout <<"que faria, trocaria?";
	do{
		cout <<"\n\nNumero de tentativas trocando: ""\n";
		cin>> qtd_tentativas;
		if(qtd_tentativas ==0)break;
		for(tentativas = acertos = 0;tentativas< qtd_tentativas;tentativas++){
			premiado = rand()%3;
			escolhido = rand()%3;
			if(escolhido != premiado)acertos++;
		}
		p_acertos=((float)acertos / (float) qtd_tentativas)*100;
		cout <<"Total e Percentual de acertos:" << acertos<< p_acertos;
	cout <<"\n";
	}while(1);
	system ("pause");
	return 0;
}