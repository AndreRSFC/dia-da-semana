#include <iostream>
using namespace std;
int resolve(int dia, int mes, int ano){
	int semana;
	
	semana = dia+(mes*2)+((3*(mes+1))/5)+ano+(ano/4)-(ano/100)+(ano/400)+2;
	
	return semana;
}

int main(){
	int dia = 0, mes = 0, ano = 0 , semana = 0;
	
	cout << "Digite o dia:\n";	
	cin >> dia;	
	cout << "Digite o mes:\n";
	cin >> mes;
	cout << "Digite o ano em que deseja checar qual dia da semana sera o aniversario:\n";
	cin >> ano;
	
	if(mes == 1){
	    mes = 13;	
	}
	
	if(mes == 2){
	    mes = 14;	
	}
	
	semana = resolve(dia,mes,ano);
	
	if(semana % 7 == 2){
		cout << "Esse dia e em uma segunda feira";		
	}
	
	if(semana % 7 == 3){
		cout << "Esse dia e em uma terca feira";		
	}
	
	if(semana % 7 == 4){
		cout << "Esse dia e em uma quarta feira";		
	}
	
	if(semana % 7 == 5){
		cout << "Esse dia e em uma quinta feira";		
	}
	
	if(semana % 7 == 6){
		cout << "Esse dia e em uma sexta feira";
	}
	
	if( semana % 7 == 0){
		cout << "Esse dia e em um sabado";		
	}
	
	if( semana % 7 == 1){
		cout << "Esse dia foi em um domingo";		
	}
	
}


