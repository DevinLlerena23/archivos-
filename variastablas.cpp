#include <iostream>
using namespace std;
int main()
{
/*
Se pide por teclado un entero que representa una tabla de multiplicar.
Se generaran tantas tablas de multiplicar, hasta que la tabla ingresada sea igual a 0
*/
int t=0;

do
{
    cout<<endl<<"ingrese la tabla que desea ver";
cin>>t;
int i=1;
if (t>0)
{
    while (i<=10)
    {
        cout<<endl<<t<<"x"<<i<<"="<<(t*i);
        i++;
    }
    
}
else
{
    cout<<endl<<"Error al ingresar el valor";
    return 0;
}
} while (t>0);






}