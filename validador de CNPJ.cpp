#include <iostream>

using namespace std;

int validcnpj(char cnpj[])
{
	int vet[14], i, n = 0, c = 0;
	int total1 = 0, total2 = 0;

	for(i = 0; i < 14; i++)
	{
		if(cnpj[i] == '0')
			vet[i] = 0	;
		if(cnpj[i] == '1')
			vet[i] = 1	;
		if(cnpj[i] == '2')
			vet[i] = 2	;
		if(cnpj[i] == '3')
			vet[i] = 3	;
		if(cnpj[i] == '4')
			vet[i] = 4	;
		if(cnpj[i] == '5')
			vet[i] = 5	;
		if(cnpj[i] == '6')
			vet[i] = 6	;
		if(cnpj[i] == '7')
			vet[i] = 7	;
		if(cnpj[i] == '8')
			vet[i] = 8	;
		if(cnpj[i] == '9')
			vet[i] = 9	;
	}
	
		n = 6;
	for(i = 0; i < 12; i++)
	{
		if(n == 10)
			n = 2;
		total1 = total1 + vet[i] * n;
		n++;
	}
	total1 = total1 % 11;

	if(total1 == vet[12])
		c++;
	n = 5;
	for(i = 0; i < 13; i++)
	{
		if(n == 10)
			n = 2;
		total2 = total2 + vet[i] * n;
		n++;
	}
	total2 = total2 % 11;
	if(total2==vet[13])
		c++;

	return c;
}


int main()
{
	char cnpj[15];

	cin >> cnpj;

	if(validcnpj(cnpj)==2)
		cout << "CNPJ valido!" << endl;
	else 
		cout << "CNPJ invalido!" << endl;
	
	

	return 0;
}
