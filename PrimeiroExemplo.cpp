#include <stdio.h>
int main()
{
	// Definição de variáveis //Inicializar as variáveis
	int n1 = 0, n2 = 0, resultado = 0, ressub = 0, resmul = 0, operacao = 0;
	float resdiv = 0.00;
	//Atribuição de valores
	printf("Digite um valor para selecionar a operação: \n 0: soma \n 1: subtração \n 2: multiplicação \n 3: divisão");
	scanf_s("%d", &operacao);
	printf("Digite um valor:");
	scanf_s("%d", &n1);
	printf("Voce digitou esse valor: %d", n1);
	printf("\nDigite o segundo valor:");
	scanf_s("%d", &n2);
	
// if ( condicao ) 
// {

// }
	if (operacao == 0)
	{
		resultado = n1 + n2;
		printf("\nO resultado e:%d", resultado);
	}
	
	if (operacao == 1)
	{
		ressub = n1 - n2;
		printf("\nO resultado e:%d", ressub);
	}
	
	if (operacao == 2)
	{
		resmul = n1 * n2;
		printf("\nO resultado e:%d", resmul);
	}
	
	if (operacao == 3)
	{
		resdiv = (float)n1 / (float)n2;
		printf("\nO resultado e:%.2f", resdiv);
	}
}