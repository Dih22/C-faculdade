#include <iostream>

using namespace std;

int main() {
	int v, nota10=0, nota50=0, nota1=0, nota5=0;
	cout << "Digite o valor que deseja sacar? ";
	cin >> v;
	
	if(v<10 || v> 601){
		cout << "\nDigite um valor valido!, que seja de 10 para cima e de 600 para baixo";
		return 0;
	}
	
	int centenas = v / 100;
	int dezenas = (v % 100) / 10;
	int unidades = v % 10;
	
	if(dezenas != 0 && dezenas <= 4 ){
		switch(dezenas){
			case 1:
				nota10 = 1;
			break;
			case 2:
				nota10 = 2;
			break;
			case 3:
				nota10 = 3;
			break;
			case 4:
				nota10 = 4;
			break;
		}
	}
	
	if(dezenas == 5){
		nota50 = 1;
	}
	
	if(dezenas > 5){
		switch(dezenas){
			case 6:
				nota50 = 1;
				nota10 = 1;
			break;
			case 7:
			    nota50 = 1;
				nota10 = 2;
			break;
			case 8:
				nota50 = 1;
				nota10 = 3;
			break;
			case 9:
				nota50 = 1;
				nota10 = 4;
			break;
		}
	}
	
	//acha as notas da unidade
	
	if(unidades > 0 && unidades <= 4){
		switch(unidades){
			case 1:
				nota1 = 1;
			break;
			case 2:
				nota1 = 2;
			break;
			case 3:
				nota1 = 3;
			break;
			case 4:
				nota1 = 4;
			break;
		}
	}
	
	if(unidades == 5){
		nota5 = 1;
	}
	
	if(unidades > 5){
		switch(unidades){
			case 6:
				nota5 = 1;
				nota1 = 1;
			break;
			case 7:
			    nota5 = 1;
				nota1 = 2;
			break;
			case 8:
				nota5 = 1;
				nota1 = 3;
			break;
			case 9:
				nota5 = 1;
				nota1 = 4;
			break;
		}
	}

	cout << centenas << " notas de R$ 100 reais\n";
	cout << nota50 << " notas de R$ 50 reais\n";
	cout << nota10 << " notas de R$ 10 reais\n";
	cout << nota5 << " notas de R$ 5 reais\n";
	cout << nota1 << " notas de R$ 1 reais\n";

	return 0;
}
