#include <iostream>

using namespace std;
int numero[4];
double promedioI;
int contanum;
void ingreso (int numero[])
{
    int i=0;
    for (i=0;i<5;i++)
    {
        cout<<"Ingresar Numero ["<<i<<"]";
        cin>>numero[i];
    }
}
double promedio (int numero[])
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
int contar50_100(int numero[])
{
  int c=0,i=0;
    for (i=0;i<5;i++)
    {
        if ((numero[i]>=50) and (numero[i]<=100))
            c++;

    }
    return c;
}
int main()
{
    ingreso(numero);
    promedioI=promedio(numero);
    contanum=contar50_100(numero);

    cout << "Promedio de Impares"<<promedioI<<"\n";
    cout << "Contar numero entre 50_100"<<contanum<<"\n";
    return 0;
}
