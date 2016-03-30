#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;
struct emple
{
    char nombre[30];
    int ventas[3];
    double total,comis,tp;
};
emple empleados[5];

void IngresoEmpleados(emple empleados[])
{
    int i,k;
    for(i=0;i<5;i++)
    {
        cout<<"Nombre del Empleado....:";
        cin.getline(empleados[i].nombre,30);
        for(k=0;k<3;k++)
        {
            cout<<"Ingresar la venta..:"<<k<<"...:";
            cin>>empleados[i].ventas[k];

        }
        _flushall();
    }

}
void calcular(emple empleados[])
{
    int i,k;
    for(i=0;i<5;i++)
    {
        empleados[i].total=0;
         for(k=0;k<3;k++)
         {
             empleados[i].total+=empleados[i].ventas[k];
         }
         empleados[i].comis= empleados[i].total*0.05;
    }

}
void presentar(emple empleados[])
{
    int i,k;
    for(i=0;i<5;i++)
    {
        cout<<"Empleados..."<<empleados[i].nombre<<"\n";
        for(k=0;k<3;k++)
        {
            cout<<"Ventas...:"<<k+1<<"...:"<<empleados[i].ventas[k]<<"\n";
        }
        cout<<"Total ventas..."<<empleados[i].total<<"\n";
        cout<<"Comision..."<<empleados[i].comis<<"\n";
        cout<<"\n\n";

    }
}
int main()
{

    IngresoEmpleados(empleados);
    calcular(empleados);
    presentar(empleados);
return 0;
}
