#include <iostream>
#include <sstream>
#include <cmath>
using namespace std;


int b_to_d (int number){
	int aux1 = 0;
 	int aux2 = 0;
 	int decimalF = 0;
 	int count = 0;
 	while (true){
 		if (number < 10) {
 			aux2 = (number % 10);
 			aux2 = aux2*pow(2,count);
 			decimalF = decimalF + aux2;
 			break;
 		}

 		aux2 = (number % 10);
 		aux2 = aux2*pow(2,count);
 		decimalF = decimalF + aux2;
 		number = number / 10;
 		count++;
 	}
	return decimalF;
}

int main (){
	int number;
	int aux;
	cout << "Digite um numero binario: \n";
	cin >> number;
	aux = b_to_d(number);
	cout << "Numero " << number << " em decimal: " << aux << endl;
	return 0;
}

