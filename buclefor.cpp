#include <iostream>
using namespace std;
int main()
{

cout<<"Ejemplo de bucle for";

int tabla=10;
for(int k=1;k<=10;k++)
{

    cout<<endl<< tabla <<" x "<< k <<"="<< (tabla*k);
    
}
//Tabla de 3,con incremento de 2 en 2
cout<<endl<<endl<<"tabla del 3";
tabla=3;
for(int k=1; k<=30; k+=2)
{

    cout<<endl<< tabla <<"x"<< k <<"="<< (tabla*k);
}


    return 0;
}
