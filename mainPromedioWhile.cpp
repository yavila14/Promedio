#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n,i;
	float promedio,nota1,nota2,nota3;
	i=1;
	n=0;
	cout <<"Digite numero de estudiantes para calcular promedio  ";
	cin >>n;
	while (i<=n){
	cout <<"Ingrese nota 1 ";
	cin >>nota1;
	cout <<"Ingrese nota 2 ";
	cin >>nota2; 
	cout <<"Ingrese nota 3 ";
	cin >>nota3;
	promedio=(nota1+nota2+nota3)/3;
	cout <<"El promedio del estudiante  " <<i <<" es  " <<promedio <<endl;
	i=i+1;
}
	
	return 0;
}
