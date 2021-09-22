#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int main(int argc, char** argv)
{
	int m[7],i,p1,p2,p3;
	cout<<"Insira a mensagem "<<endl;
	for (i=0;i<7;i++){
		cin>>m[i];
	}
	p1=m[2]+m[4]+m[6];
	p2=m[2]+m[5]+m[6];
	p3=m[4]+m[5]+m[6];
	if (p1%2 == 0){
		p1=0;
	}else
	{
		p1=1;
	}
	if (p2%2 == 0){
		p2=0;
	}else
	{
		p2=1;
	}
	if (p3%2 == 0){
		p3=0;
	}else
	{
		p3=1;
	}
	cout<<endl<<"P1="<<m[2]<<"+"<<m[4]<<"+"<<m[6]<<endl;
	cout<<"P2="<<m[2]<<"+"<<m[5]<<"+"<<m[6]<<endl;
	cout<<"P3="<<m[4]<<"+"<<m[5]<<"+"<<m[6]<<endl;	
	if ((m[0]==p1) && (m[1]==p2) && (m[3]==p3)){
		
		cout<<endl<<"OK"<<endl;
	}
	else
	{
		cout<<endl<<"ERR"<<"   "<<"Bits de paridade corretos "<<" "<<p1<<" "<<
		p2<<" "<<p3<<endl;
	}
	return 0;
}