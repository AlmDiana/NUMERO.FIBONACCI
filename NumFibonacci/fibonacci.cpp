// Número de Fibonacci
# include <iostream>
using namespace std;

int fibonacci ( int n);

int main ()
{
	int num;
	setlocale (LC_CTYPE, "Spanish");
	
	cout << "NUMERO DE FIBONACCI" << endl << endl;
	do{
		cout << "Ingrese un entero positivo: ";
		cin >> num;
	} while (num < 0);
	
	cout << "RESULTADO = " << fibonacci (num) << endl;	
	return 0;
}

int fibonacci ( int n){
	if ((n == 1) || (n == 2)){
		return 1;
	}
	else{
		return (fibonacci (n-1) + fibonacci (n-2));
	}
}
