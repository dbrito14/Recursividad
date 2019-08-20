#include <iostream>
#include <stdlib.h>

using namespace std;

int fiboIt(int n);
int fiboRec(int n);
int potIt(int base,int potencia);
int potRec(int base,int potencia);
int divIt(int dividendo,int divisor);
int divRec(int dividendo,int divisor);

int main(){
	int x, opc,opc2;
	cin>>opc;
	x= fiboIt(opc);
	cout<<x<<endl;
	
	cin>>opc;
	x= fiboRec(opc);
	cout<<x<<endl;
	
	cin>>opc;
	cin>>opc2;
	x= potIt(opc,opc2);
	cout<<x<<endl;
	
	cin>>opc;
	cin>>opc2;
	x= divRec(opc,opc2);
	cout<<x<<endl;
	
	
	cin>>opc;
	cin>>opc2;
	x= divRec(opc,op´c2);
	cout<<x<<endl;
	
	x= divRec(50,3);
	cout<<x<<endl;
	return 0;
}

int fiboIt(int n){
	int f=0, f2=1;
	for(int i=0;i<n;i++)
	{
		f=f+f2;
		f2=f-f2;
	}	
	return f;
}
int fiboRec(int n){
	if (n<=2){
		return 1;
	}
	else{
		return fiboRec(n-1)+fiboRec(n-2);
	}
}
int potIt(int base,int potencia){
	int aux=base;
	for(int i=1; i<potencia;i++){
		base*=aux;
	}
	return base;
}
int potRec(int base, int potencia){
	if (potencia==0){
		return 1;
	}
	else if(potencia==1){
		return base;
	}
	else{
		return (potRec(base,potencia-1)*base);
	}
}
int divIt(int dividendo,int divisor){
	int cont=0;
	while(dividendo>=divisor){
		dividendo-=divisor;
		cont++;
	}
	return cont;
}
int divRec(int dividendo, int divisor){
	if(dividendo<divisor){
		return 0;
	}
	else{
		return 1+divRec(dividendo-divisor,divisor);
	}
}
