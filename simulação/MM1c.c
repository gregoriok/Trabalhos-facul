#include <stdlib.h>
#include <stdio.h>
#include <math.h>

double exponencial (double media)
{
	double r,c;
	r= ((double) rand() / (double) RAND_MAX);
	c= -1 * media * log(r);
	return c;
}

	//Programa Principal

int main()
{
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
	
	//simulacao
	
	while(relogio <= t_max)
	{
		
		if (tempo_p_chegada < tempo_p_termino) //trata eventos de chegada
		{
			 relogio = tempo_p_chegada;
			 printf("%f Nova Chegada\n",relogio);
			 if (status_atendente == 0)
			 {
			    printf("%f Novo Atendimento\n",relogio);
			    status_atendente = 1;
			    ta = exponencial(8);
			    soma = soma + ta;
			    tempo_p_termino = relogio + ta;
			 }  
			 else
			 {
				 n_clientes_fila = n_clientes_fila + 1;
			     tec = exponencial(10);
			     tempo_p_chegada = relogio + tec;	
			 }
		}
      else
		{
		relogio = tempo_p_termino;
		   if (n_clientes_fila > 0)
		   {
		      printf("%f New atend\n",relogio);
		      n_clientes_fila = n_clientes_fila - 1;
		      ta = exponencial (8);
		      soma = soma + ta;
		      tempo_p_termino = relogio + ta;
			}else
			{
				status_atendente = 0;
				tempo_p_termino = t_max + 1;	
			}
		}
	  
	}; //while
	
	printf("Taxa de Utilizacao do Atendente = %f\n", 100 * (soma / t_max)); 
	printf("Tecle <Enter> para continuar...\n");
	scanf("%c",&texto);
	
	return 0;
}