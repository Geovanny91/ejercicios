#include <cstdlib>
#include <iostream>

using namespace std;
/* En una autopista se multa a los conductores de vehículos que exceden el limite
   de velocidad permitido de acuerdo a a siguiente tabla
                Velocidad Km/h             |        Multa
                Hasta 70                   |        Sin sanción
                71 a 90                    |        100 dolares
                91 a 100                   |        140 dolares
                Más de 100                 |        200 dolares
   */
int main()
{   
    double multa, vel;
    cout<<"Velocidad del auto: ";   cin>>vel;
    
    if(vel>0 && vel<=70)
       multa=0;
    if(vel>70 && vel<=90)
       multa=100;
    if(vel>90 && vel<=100)
       multa=140;
    if(vel>100)
       multa=200;
    
    cout<<"La multa a pagar es: "<<multa<<" dolares\n";        
            
	system("pause");
	return 0;
}
