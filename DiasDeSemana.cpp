#include <cstdlib>
#include <iostream>

using namespace std;
/* Dise�e un programa que lea un n�mero entero del intervalo 1 a 7, correspondiente
   a un d�a de la semana, y determine el nombre del d�a.*/
int main()
{       
    int n;
    cout<<"Ingrese un numero del 1 al 7: ";
    cin>>n;
    if(n>0 && n<8){
    if(n==1)  cout<<"Lunes\n";
    if(n==2)  cout<<"Martes\n";
    if(n==3)  cout<<"Miercoles\n";
    if(n==4)  cout<<"Jueves\n";
    if(n==5)  cout<<"Viernes\n";
    if(n==6)  cout<<"Sabado\n";
    if(n==7)  cout<<"Domingo\n";                          
    }
    
            
	system("pause");
	return 0;
}
