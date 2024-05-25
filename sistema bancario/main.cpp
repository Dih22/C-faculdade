#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;
//funçoes:
void acoes(string user);
void login();

int main() {
	
	
	//variaveis:
	  
	  int posibilidade;
	  
	  bool repetirPosibiliade = true;
	  
	
	
	
	
	
	
	while(repetirPosibiliade == true){
		
	
	
	cout <<"                                 ***************** Banco do Brasil *****************\n\n\n\n";
	cout << "1) entrar\n2) Sair\n";
	cin >> posibilidade;
	
	if(posibilidade == 1){
		login();
	}else{
		repetirPosibiliade = false;
	}
	}
	
	 
	return 0;
}







//funçao de login
void login(){
	system("cls");
	
	string user;
	int senh;
	
	//array usuarios:
	  string usuarios[10];
	  usuarios[0]="diogo";
	  usuarios[1]="p2";
	
	
	//array senhas:
	  int senhas[10];
	  senhas[0]=123;
	  senhas[1]=1234;
	
	bool statusUsuario;
	bool statusSenha;
	
	
	
		//<login>:
		cout << "                                                       LOGIN\n";
	cout << "\nusuario:";
	cin  >> user;
	cout << "\nsenha:";
	cin  >> senh;
	
	
	//verifica usuario
	for(int i=0; i<10;i++){
		
		if(user == usuarios[i]){
			
			statusUsuario = true;
		}
		
	}
	
	//verifica senha		
	for(int i=0; i<10;i++){
		
		if(senh == senhas[i]){
			
			statusSenha = true;	
		}
	  }	
    
    //verifica
    if(statusUsuario == true && statusSenha == true ){
    	acoes(user);
	}else{
		cout << "Usuario ou senha invalidos!\n";
		cout << "Usuario " <<statusUsuario  <<"\nsenha "  <<statusSenha;
		
	}
	
   
	
	//</login>
	}











//funçao para proseguir com a operação

void acoes(string user){
	bool repeteAcoes = true;
	
	while(repeteAcoes == true){
		
	
	system("cls");
	
	//variaveis:
	int opc;
	
	 cout <<"                                Ola "<< user <<" como podemos te ajudar?\n\n\n\n";
	 
	 cout << "                           _____________________________________\n";
	 cout << "                          |                                     |\n";
	 cout << "                          |     1) Deposito                     |\n";
	 cout << "                          |     2) Saque                        |\n";
	 cout << "                          |     3) Consulta                     |\n";
	 cout << "                          |     4) Transferencia entre contas   |\n";
	 cout << "                          |     5) sair                         |\n";
	 cout << "                          |_____________________________________|\n";
	 cin  >> opc;
	 
	 switch(opc){
	 	case 1:
	 		cout << "Deposito";
	 	break;
	 	case 2:
	 		cout << "Saque";
	 	break;
	 	case 3:
	 		cout << "Consulta";
	 	break;
	 	case 4:
	 		cout << "Transferencia entre contas";
	 	break;
	 	case 5:
	 		// não faz nada e aguarda para voltar para a função main
	 		repeteAcoes = false;
	 		system("cls");
	 	break;
	 }
}
}
