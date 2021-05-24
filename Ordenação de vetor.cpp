#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	printf("==============================\n");
	printf("Ordenando em ordem crescente:\n ");
	printf("==============================\n");
	
	//Populando o vetor:
	int length = 6;
	int nums[length];
	int i = 0;
	for(length; length >= 0; length--){
		nums[i] = length;
		i++;
	}
	
	//Exibindo o vetor antes da ordenação:
	printf("Antes da ordenação:\n");
	for(i = 0; i < 5; i++){
		printf("%i", nums[i]);
	}
	printf("%i", nums[5]);
	
	//Ordenando o vetor:
	int posicaoInicial;
	int posicaoTroca;
	for(int j = 0; j < 6; j++){
		for(int a = j + 1; a < 6; a++){
			
			//Se a primeira posição em questão for maior que a segunda posição, troca os valores:
			if(nums[j] > nums[a]){
				posicaoInicial = nums[j];
				nums[j] = nums[a];
				nums[a] = posicaoInicial;
			}
		}
	}
	
	//Exibindo o vetor:
	printf("Depois da ordenação:\n");
	for(i = 0; i < 5; i++){
		printf("%i", nums[i]);
	}
	printf("%i", nums[5]);
}
   return 0;
