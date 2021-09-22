#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int main(int argc, char** argv)
{
	int  coluna1, coluna2, coluna3, i=0, b = 0;
	float falhas_sensor1=0,falhas_sensor2=0 ,falhas_sensor3=0, semFalhas=0;
	string fileName = "C:\\TRM.txt";
	ifstream inFile(fileName.c_str(), ios::in);
	while(!inFile.eof())
	{
		i++;
		if(i == 1){
			inFile >> coluna1;
		}
			
		if(i == 2){
			inFile >> coluna2;
		}
			
		if(i == 3){
			inFile >> coluna3;
		}
			
		
		if(i == 3){
			++b;
			if((coluna1 == coluna2) && (coluna1 == coluna3)){
				semFalhas++;
				cout<<"coluna1 ="<<coluna1<<" coluna2 ="<<coluna2<<" coluna3="<<coluna3<<endl;
				cout<<"Todas colunas iguais"<< endl;
			}
			if((coluna1 != coluna2) && (coluna1 == coluna3)){
				falhas_sensor2++;
				cout<<"coluna1 ="<<coluna1<<" coluna2 ="<<coluna2<<" coluna3="<<coluna3<<endl;
				cout<<"sensor 2 falhou"<< endl;
				
			}
				
			if((coluna1 == coluna2) && (coluna1 != coluna3)){
				falhas_sensor3++;
				cout<<"coluna1 ="<<coluna1<<" coluna2 ="<<coluna2<<" coluna3="<<coluna3<<endl;
				cout<<"sensor 3 falhou"<< endl;
			}
				
			if((coluna2 == coluna3)&& (coluna2 != coluna1)){
				falhas_sensor1++;
				cout<<"coluna1 ="<<coluna1<<" coluna2 ="<<coluna2<<" coluna3="<<coluna3<<endl;
				cout<<"sensor 1 falhou"<< endl;
			}
			
			i = 0;
		}
		
	}
	i = 0;
	b = 0;
	
	if((falhas_sensor1 > falhas_sensor2) && (falhas_sensor1> falhas_sensor3)){
		cout<<"sensor 1 foi o que mais falhou"<<endl;
	}
	if((falhas_sensor2> falhas_sensor1) && (falhas_sensor2 > falhas_sensor3)){
		cout<<"sensor 2 foi o que mais falhou"<<endl;
	}
	if((falhas_sensor3 > falhas_sensor1) && (falhas_sensor3 > falhas_sensor2))
	{
		cout<<"sensor 3 foi o que mais falhou"<<endl;
	}
	if((falhas_sensor1 == falhas_sensor2) && (falhas_sensor1 == falhas_sensor3) && (falhas_sensor2 == falhas_sensor3))
	{
		cout<<"Todos falharam igualmente"<<endl;
	}
	semFalhas=(semFalhas*100)/1000;
	falhas_sensor1= (falhas_sensor1 * 100)/1000;
	falhas_sensor2= (falhas_sensor2 * 100)/1000;
	falhas_sensor3= (falhas_sensor3 * 100)/1000;
	cout << "Percentual de falhas sensor 1= " << falhas_sensor1 << "%" << endl;
	cout << "Percentual de falhas sensor 2= " << falhas_sensor2 << "%" << endl;
	cout << "Percentual de falhas sensor 3= " << falhas_sensor3 << "%" << endl;
	cout << "Percentual sem falhas = " << semFalhas << "%" << endl;
	inFile.close();
	return 0;
}