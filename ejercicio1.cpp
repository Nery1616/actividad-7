#include <iostream>

using namespace std;
/*
int suma(int num1,int num2){
	int resultado=0;
	resultado=num1+num2;
	return resultado;
}

int suma(int num1,int num2,int num3){
	int resultado=0;
	resultado=num1+num2+num3;
	return resultado;
}


int main(){
	
	cout<<suma(10,20)<<endl;
	cout<<suma(10,20,40)<<endl;
	
	system("pause");
	
}*/

//funcion que sume dos valores
int suma(int num1,int num2,int num3){
	int resultado=0;
	resultado=num1+num2+num3;
	return resultado;
}

//metodo y envio de parametros por referencia
void suma(int &num1,int &num2){
	int resultado=0;
	num1+=1;
	num2+=1;
	resultado=num1+num2;
	cout<<resultado<<endl;

}

int main(){
	
	int a=10,b=20;
	suma(a,b);
	cout<<"a: "<<a<<endl;
	cout<<"b: "<<b<<endl;
	
	system("pause");
	
}