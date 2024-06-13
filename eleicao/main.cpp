
#include <iostream>
#include <locale>

using namespace std;

int main() {
	setlocale(LC_ALL, "portuguese");
	
	char fechar = 'n';
	int jose=0, joao=0, pedro=0, diogo=0, voto, ganhador1, ganhador2, nulo=0, branco=0, totalVotos=0, porcentagemNulo ;
	string ganhadorNome1, ganhadorNome2, vencedor;
	
   
   do{
   	system("cls");
   	cout << "****** ELEIÇOÊS PRESIDENCIAIS ******\n";
   	cout << "1 Jose\n2 João\n3 Pedro\n4 Diogo\n5 voto nulo\n6 voto em branco\n";
   	cin >> voto;
   	if(voto != 0 ){
   		totalVotos++;
	   }
   	
   	switch(voto){
   		case 1:
   			jose +=  1;
   		break;
   		case 2:
   			joao +=  1;
   		break;
   		case 3:
   			pedro +=  1;
   		break;
   		case 4:
   			diogo +=  1;
   		break;
   		case 5:
   			nulo +=  1;
   		break;
   		case 6:
   			branco +=  1;
   		break;
   		
	   }
   	if(voto == 0){
   		
   		if(jose > joao){
   			ganhador1 = jose;
   			ganhadorNome1 = "jose";
		}else{
		   	ganhador1 = joao;
		   	ganhadorNome1 = "joao";
		   }
		   
		if(pedro > diogo){
   			ganhador2 = pedro;
   			ganhadorNome2 = "pedro";
		}else{
		   	ganhador2 = diogo;
		   	ganhadorNome2 = "diogo";
		   }
		   
		if(ganhador1 > ganhador2){
   			vencedor = ganhadorNome1;
		}else{
		   	vencedor = ganhadorNome2;
		   }
   		
   		cout << "\nFim das eleições!!\n\n\n";
   		cout << "Vencedor : " << vencedor << " !!!";
   		cout << "\njose " << jose << endl; 
   		cout << "joao " << joao << endl; 
   		cout << "pedro " << pedro << endl; 
   		cout << "diogo " << diogo << endl;
		cout << "voto nulo " << nulo << endl; 
   		cout << "voto em branco " << branco << endl;
   		cout << "Total de votos foram " << totalVotos << endl;
   		
   		porcentagemNulo = (float)nulo/totalVotos * 100;
		cout << porcentagemNulo << "% dos votos foram nulos"; 
   		fechar = 's';
	   }
   }while(fechar == 'n');
  
    return 0;
}

