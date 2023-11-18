#include <iostream>

using namespace std;

int valid (char cpf[12])				//Função recebe o char 'CPF' 
{
	int i, vet[11], total1=0, total2=0, n=0, c=0;
	
	for(i = 0; i < 11; i++)				//Transformando a variável de texto do CPF em um vetor de 11 posições
	{									//Cada caractere vai ser um número, caractere 0 = número 0 na posição 'i'
		if(cpf[i] == '0')
			vet[i] = 0	;
		if(cpf[i] == '1')
			vet[i] = 1	;
		if(cpf[i] == '2')
			vet[i] = 2	;
		if(cpf[i] == '3')
			vet[i] = 3	;
		if(cpf[i] == '4')
			vet[i] = 4	;
		if(cpf[i] == '5')
			vet[i] = 5	;
		if(cpf[i] == '6')
			vet[i] = 6	;
		if(cpf[i] == '7')
			vet[i] = 7	;
		if(cpf[i] == '8')
			vet[i] = 8	;
		if(cpf[i] == '9')
			vet[i] = 9	;
	}
	
	for(i = 10; i >= 2; i--)			//Cálculo do primeiro dígito do CPF
	{
		total1 = total1 + (vet[n] * i);
		n++;
		
	}
	
	total1 = (total1 * 10) % 11;
	if(total1==10)
		total1=0;
	if(total1 == vet[9])				//Se esse dígito for verdadeiro, a variável 'C' recebe +1
		c++;							
	n = 0;
		for(i = 11; i >= 3; i--)		//Cálculo do segundo dígito do CPF
	{
		total2 = total2 + (vet[n] * i);
		n++;
	}
	total2=	(total2 + (total1*2))*10;
	total2= total2%11;
	
	if(total2==10)
		total2=0;
	
	if(total2== vet[10])				//Se o segundo dígito for verdadeiro, a variável 'C' recebe +1
		c++;							//Se a variável 'C' for igual a 2, significa que os dois dígitos
										//foram validados, logo, o CPF é verdadeiro.
	return c;
}
int main() 
{
	char cpf[12];							//Variável de entrada do CPF
	
	cin >> cpf;								//Entrada do CPF

	if(valid(cpf)==2)						//Função que valida o CPF sendo chamada
		cout << "CPF Valido!" << endl;		//Se o valor que voltar da função for 2, será validado
	else 
		cout << "CPF Invalido!" << endl;	//Se não, ele é falso
	
	return 0;
}