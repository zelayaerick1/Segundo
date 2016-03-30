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

int main()
{
    IngresoEmpleados(empleados);
return 0;
}

