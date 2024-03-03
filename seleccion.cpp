#include <iostream>
using namespace std;
main(){
	// i++. i+=1, i=i+1
/*
	for (int i=1;i<=10;i++){//variable inicio; finaliza ; incrementar o decrementar
		cout<<i<<endl;
	}
*/

/*
	for (int i=10;i>0;i--){
		cout<<i<<endl;
	}
*/

/*
	for (int i=0;i<10;i++){
		if (i==5){
				continue;
		cout<<"if"<<endl;
		
		}
		
		cout<<i<<endl;
		
	}
	
		cout<<"fuera del for"<<endl;
*/


/*
//int tam=0;
int datos[] = {10,40,100,250,5000};
//tam = sizeof(datos) / sizeof(datos[0]);
for (int i :datos){
	cout<<i<<endl;
}



int datos[] = {10,40,100,250,3000};
cout<<sizeof(datos)<<endl;

	for (int i=0;i<tam;i++){
	cout<<datos[i]<<endl;
	}
	
*/
int inicio = 0,fin = 0, res = 0;

cout<<"Ingrese tabla inicial: ";
cin>>inicio;
cout<<"Ingrese tabla: ";
cin>>fin;

for (int rango=inicio;rango<=fin;rango++){
	cout<<"tabla del "<<rango<<endl;
	for (int i=1;i<=10;i++){
	res = rango * i;
	cout<<rango<<" X " << i << " = "<<res<<endl;
}

	
}
/*
for (int i=1;i<=10;i++){
	res = tabla * i;
	cout<<tabla<<" X " << i << " = "<<res<<endl;
}
*/
	system("pause");
}
