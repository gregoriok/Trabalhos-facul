
#include <cstdlib> 
#include <ctime> 
#include <iostream>
#include <math.h>

using namespace std;
//"\t" PARA TABULAR QUANDO QUISER PRINTAR ALGO 
//(rand()%10)+1; PARA RANDOMIZAR NUMERO
double exponencial (double media){

double randomico, calculo;
randomico = ((double) rand() / (double) RAND_MAX);;
calculo = -1 * media * log(randomico);

return calculo;
}

int main() 
{ 
   /* srand((unsigned)time(NULL)); */
	double relogio=0.0, tempo_p_chegada=0.0, tempo_p_termino=0.0, t_max=0.0;
   int n_clientes_fila=0;
   signed char status_atendente;
   double utilizacao_atendente=0.0, tec=0.0, ta=0.0, soma=0.0;
   char texto;
	
	//randomize;
	status_atendente = 0;
	relogio = 0;
	tempo_p_chegada = 0;
	t_max = 1000;
	n_clientes_fila = 0;
	soma = 0;  
	
	while (relogio <= t_max){
		 if (tempo_p_chegada < tempo_p_termino){
			 relogio = tempo_p_chegada;
			 cout<<relogio << "Nova Chegada\n";
			 if (status_atendente = 0){
				cout<<relogio <<"Novo Atendimento";
            	status_atendente = 1;
            	ta = exponencial (8);
            	soma = soma + ta;
            	tempo_p_termino = relogio + ta;
			 }
			 else{
				 n_clientes_fila = n_clientes_fila + 1;
         	 	 tec = exponencial (10);
         	 	 tempo_p_chegada = relogio + tec;
			 }
		 }
		 else {
			 relogio = tempo_p_termino;
			 if(n_clientes_fila > 0){
				cout<<relogio<<"New atend"<<endl;
              	  n_clientes_fila = n_clientes_fila - 1;
              	  ta = exponencial (8);
              	  soma = soma + ta;
              	  tempo_p_termino = relogio + ta;
			 }
			 else
			 {
				status_atendente = 0;
               tempo_p_termino = t_max + 1;
			 }
		 }
	}
    cout<< "Taxa de Utilizacao do Atendente = " << (10000 * (soma / t_max))<<endl;
	cout<<"Tecle <Enter> para continuar...\n";
	cin>>texto;
    return 0;
}