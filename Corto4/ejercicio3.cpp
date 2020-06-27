#include <iostream>

using namespace std;

bool calcular(int n, float array[]);
int main(){
    int n=5;
float notas[n];
for(int i=0; i<n; i++){
        cout<<"Ingresa tu nota "<<i+1<<": ";
         cin>>notas[i];
    }
    if(calcular(n, notas)){
        cout<<"Usted aprobara la materia :D";
    }else{
        cout<<"Usted no aprobara la materia:(";
    }

    return 0;
}
bool calcular(int n, float array[]){
float promedio=0;
 for(int i =0; i<n; i++){
        array[i]*=0.20;
         promedio+= array[i];
    }
    if(promedio>=6){
        cout<< "Su nota final es: "<<promedio<<endl;
        return true;
    }else{
         cout<< "Su nota final es: "<<promedio<<endl;
        return false;
    }
}


