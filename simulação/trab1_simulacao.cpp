
#include <cstdlib> 
#include <ctime> 
#include <iostream>

using namespace std;
//"\t" PARA TABULAR QUANDO QUISER PRINTAR ALGO 
//(rand()%10)+1; PARA RANDOMIZAR NUMERO
int main() 
{ 
    srand((unsigned)time(NULL)); 
    int i,elementos,vs1/*Vs1*/,vs2/*Vs2*/,vs1a/*Vs1a*/;
    int TMF=0,TMA=0,TF=0,TE=0,TS=0;
    vs1a=0;
    /*VS1A é igual ao tempo de chegada e o Vs2 é igual ao tempo de atendimento*/
    cout<<"Numero de entidades";
	cin>>elementos; 
    //cout << i << "\n"; 
    for(i=0;i<elementos;i++){
		vs1 = (rand()%10)+1;
		vs2 = (rand()%10)+1;
		vs1a+=vs1;
		if(i=0){
			TE+=vs1a;
		}
		else
		{
			TE
		}
		
		
		
		
		
		cout<<i+1<<"\t";
		cout<<vs1<<"\t";
		cout<<vs2<<"\t";
		cout<<vs1a<< endl;
	}
    
    
    
    return 0;
}