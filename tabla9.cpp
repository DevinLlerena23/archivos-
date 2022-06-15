#include <iostream>
using namespace std;
main()
{

cout<<endl<<endl<<"Ejemplo de bucle while que imprime la tabla del 9";

int tabla=9;
int i=1;
while(i<=10)
{

    cout<<endl<<tabla<< " x " <<i<<" = "<< (tabla*i);
    i++;
}

//Se pide un numero entero que debe estar entre 1 y 20 este numero representa  la tabla que el usuario desea generar
//Se pide generar esta tabla

int y ;
int a=1;
cout<<endl<<"Ingrese la tabla que dese ver";
cin>>y;
if(!(y>=1 && y<=20))
{
    cout<<endl<<"rango no valido";
    return 0;
}
while(a<=12)
{

    cout<<endl<<y<<"x"<<a<<"="<<(y*a);
    a++;
}















    return 0;
}