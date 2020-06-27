#include <iostream>
#include <string.h>

using namespace std;
char *codificar(int n, char code[]);

int main(){
    int n;
    
    char code[30];

    cout<<"Ingrese el texto que desea codificar: ";
    gets(code);
    codificar(n, code);
    
    cout<<"Su frase en clave es: "<<codificar(n, code);
    return 0;
}
char *codificar(int n, char code[]){

    n= strlen(code);
for(int i=0; i<n; i++){
    switch(code[i]){
        {case 'm':
        code[i]='0';
        break;}
        {case 'u':
        code[i]='1';
        break;}
        {case 'r':
        code[i]='2';
        break;}
        {case 'c':
        code[i]='3';
        break;}
        {case 'i':
        code[i]='4';
        break;}
        {case 'e':
        code[i]='5';
        break;}
        {case 'l':
        code[i]='6';
        break;}
        {case 'a':
        code[i]='7';
        break;}
        {case 'g':
        code[i]='8';
        break;}
        {case 'o':
        code[i]='9';
        break;}
        default:
        code[i]=code[i];
        break;
    }

}
return code;
}
