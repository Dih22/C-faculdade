#include <iostream>
#include <locale>


using namespace std;

int main() {
	
	setlocale(LC_ALL,"portuguese");
	
	int ano;
	
	cout << "Digite um ano ";
	cin >> ano;
	
	if((ano%4 == 0 && ano%100 == !0) || (ano%400== 0)){
		cout << ano << " � um ano Bissexto!";
	}else{
		cout << ano << " n�o � um ano Bissexto!";
	}
	
	
    return 0;
}

