#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;

int main()
{
    int num, random, intento, intentosr;
    intento = 0;
    random =0;
    intentosr = 5;
    cout<< "He generado un nuemro al azar, Puedes a divinar cual he escogido para ti?"<<endl;
    cout<< "Para ponertelo un poco mas facil lo he escogido del 1 al 100, sin decimales, para que veas que no hago trampas"<<endl;
    cout<< "Pero no es tan facil, solo tienes 5 intentos para adivinarlo"<< endl;
    cout<< "Si deseas rendirte solo coloca 0"<< endl<<endl;
    srand((unsigned)time(0));
    random = 1+rand()%100;
    do{
        intento += 1;
    cout<< "Introduce el numero: ";
    cin>> num;
    if (num == random){
        cout<< "Muy bien adivinaste el numero, pero no creo que tengas suerte de nuevo";
        break;
    }else if(num > random){
        cout<<"Buen intento pero mi nuemro es menor que ese"<< endl;
        intentosr -=1;
        cout<<"Te quedan "<< intentosr<< " intentos"<<endl;
    }else if (num == 0){
        break;
    }else{
        cout << "Buen intento pero mi nuemro es mayor que ese"<<endl;
    intentosr -=1;
          cout<<"Te quedan "<< intentosr<< " intentos"<<endl;
    }
    }
    while(intento < 5);
    if (num == 0){
        cout<< "Saliste del juego";
    }
    else if (intentosr == 0){
        cout<< "Lastima, se te acabaron los intentos, el numero era: "<< random;
    }

    return 0;
}