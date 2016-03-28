#include <stdio.h>
#include <stdlib.h>

int main()
{
	// declaracao de variaveis
   float num;

	// exibicao no console da pergunta do numero desejado
    printf("Digite o numero, que queres saber\n");
    // atribuicao da resposta na variavel declarada 
    scanf("%f", &num);

	// verificacao se o numero e positivo, negativo e nulo
    if(num < 0){
        printf("O numero e negativo");
    }else if(num > 0){
        printf("o numero e positivo");
    }else{
        printf("o numro e nulo");
    }

    return 0;
}
