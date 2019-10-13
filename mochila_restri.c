#include<stdio.h>
int calcula(int cap,int qtdpesos,int *peso){
	int pesototal=0;
	int caprest=cap;
	for(int i=qtdpesos-1;i>=0;i--){
		int qtdpeso=0;
		if(caprest-peso[i]!=0){
		qtdpeso=1;}
		if( peso[i]<=caprest && caprest>0 && pesototal+peso[i]<=cap){// viabilidade da opção
		caprest-=peso[i]; // o que falta para chegar a capcidade total
		pesototal+=peso[i];// valor alcançado até o momento
		printf("%d peso*s de %dkg\n",qtdpeso,peso[i]);
		}		  
	}
	return pesototal;
}
int main(){
	int qtdpesos=4,cap=24,peso[4]={2,4,8,12};
	printf("Peso total alcancado: %d Kg",calcula(cap,qtdpesos,peso));	
}
