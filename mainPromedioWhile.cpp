#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int i,op;
	float promedio,nota1,nota2,nota3;
	i=0;
while(i<=1){
	cout <<"Por favor ingrese datos del estudiante para obtener su promedio \n";
	cout <<"Ingrese nota 1 ";
	cin >>nota1;
	cout <<"Ingrese nota 2 ";
	cin >>nota2; 
	cout <<"Ingrese nota 3 ";
	cin >>nota3;
	promedio=(nota1+nota2+nota3)/3;
	cout <<"El promedio del estudiante es  " <<promedio <<endl <<endl;
	cout <<"Desea ingresar otro estudiante  1=si / 0=no "<<endl;
	cin >>op;
	switch(op){
		case 0:i=2;
		break;
		case 1:i=1;
		break;
		default:i=3;
		cout <<"Opcion incorrecta ";
	}
}
	return 0;
}
