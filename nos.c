#include<stdio.h>
#include<stdlib.h>
 
int main(){
	int a=7,b=3,c=12,d=99,e=8,f=5,g=6,soma=0;
	if(b>c){
		soma=a+b;
			if(d>e){soma+=d;}
			else{
				soma+=e;	
			}
		}
	else{
	soma=a+c;
		if(f>g){soma+=f;}
		else{
			soma+=g;	
		}
	};
	printf("%d",soma);
}
