#include<stdio.h>
int calcula(int troco,int qtdopcoes,int *notas){
	int total=0;
	for(int i=qtdopcoes-1;i>=0;i--){ //qtd de opçoes                    // 2            1			0
		int totalparc=troco/notas[i];//qtd de notas por valor de nota   // aux=10/5      aux=0/2    aux=0/1
		troco-=totalparc*notas[i];//troco atualizado a cada execução   //10-(2*5)		 0-(0*2)		0-(0*1)
		total += totalparc; //qtd de notas para o troco geral		   //0+2			 2+0				2+0
		if(totalparc!=0){
		printf("%d nota*s de %d reais\n",totalparc,notas[i]);}
	}
	return total;
}
int main(){
	int qtdopcoes=3,troco=8,notas[3]={1,4,5};
	printf("Qtd total de notas: %d",calcula(troco,qtdopcoes,notas));	
}
