#include <cstdlib>
#include <iostream>

using namespace std;
/* Diseñe un programa que lea un número entero del intervalo 1 a 7, correspondiente
   a un día de la semana, y determine el nombre del día.*/
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
