#include <iostream>
using namespace std;
main(){

/*
	//condicion es verdadera el ciclo se sigue ejecutando
	int i = 0;
	while(i<5){
	//	cout<<i<<endl; error de novato, ciclo infinito
		cout<<"while: "<<i<<endl;
		i++;
		
	}

	int ii = 0;
	do{
		ii++;
		cout<<"do while: "<<ii<<endl;
			
	}while(ii<5);
*/

char respuesta= 's';
while(respuesta == 's'||respuesta == 'S'){
	cout<<"desea ingresar otro valor (s/n) ";
		cin>>respuesta;
	
}


/*
do{
		cout<<"desea ingresar otro valor (s/n) ";
		cin>>respuesta;
		
	}while(respuesta == 's'||respuesta == 'S');
*/	
	system("pause");
}
