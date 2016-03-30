#include <iostream>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;
int numero[4];
double mayor=0;
double menor=99999;
double promedio;

void ingreso (int numero[])
{
    int i=0;
    for (i=0;i<5;i++)

{
     do
    {
        cout<<"Ingresar Numero ["<<i<<"]";
        cin>>numero[i];
    }while (!((numero[i]>=50)and (numero[i]%2==0)));
}
}
int mayorarreglo (int numero[])
{
    int i;
    int digitomayor=0;
    for (i=0;i<5;i++)
    {
        if(digitomayor<numero[i])
            digitomayor=numero[i];
    }
    return digitomayor;
}
double promedio5 (int numero[])
{
    int c=0;
    double suma=0,prom;
    int i=0;
    for (i=0;i<5;i++)
    {
        if (numero[i]%5==0)
        {
            suma+=numero[i];
            c++;
        }
    }
    if (c>0)
    prom=suma/c;
    return prom;
}
int menorarreglo(int numero[])
{
    int i;
    int digitomenor=numero[50];
    for (i=0;i<5;i++)
    {
        if(digitomenor>numero[i])
            digitomenor=numero[i];
    }
    return digitomenor;
}
int main()
{
   ingreso(numero);
   mayor=mayorarreglo(numero);
   promedio=promedio5(numero);
   menor=menorarreglo(numero);
   cout << "Numero mayor es...:"<<mayor<<"\n";
   cout << "Numero menor es....:"<<menor<<"\n";
    cout << "Promedio...:"<<promedio<<"\n";
   return 0;
}
