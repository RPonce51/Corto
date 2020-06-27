#include <iostream>

using namespace std;
float calcular(int n, float a[]);
float promedio(int n, float a[]);
int main(){

int n=25;
float estudiantes[n];
for(int i=0; i<n; i++){
        cout<<"ingrese la estatura del estudiante "<<i+1<<": ";
         cin>>estudiantes[i];
         

    }
    promedio(n, estudiantes);
         calcular(n, estudiantes);
    return 0;
}

 float promedio(int n, float a[]){
     float suma=0, promedio;
     for(int i =0; i<n; i++){
        suma += a[i];
    }
    promedio = suma/n;
    return promedio;
 }

 float calcular(int n, float a[]){
 float mas=0, menos=0, prom = promedio(n, a);
for(int i =0; i<n; i++){
    if(a[i]<prom){
        menos++;
    }else if(a[i]>prom){
        mas++;
    }
    }
    cout<< "El promedio de los estudiantes es: "<<prom<<endl;
    cout<<mas<< " de los estudiantes estan por encima de es promedio y "<<menos<<" estan por debajo";
 }
