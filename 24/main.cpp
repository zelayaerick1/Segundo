#include <iostream>

using namespace std;
int num[4];
double prom;
int cpar;

void ingreso(int num[])
{
    int i=0;
    for(i=0;i<5;i++)
    {
        cout<<"Ingrear numero["<<i<<"]:";
        cin>>num[i];

    }

}
double promedio (int num[])
{
    int i=0;double suma=0;
    for(i=0;i<5;i++)
    {
        suma=suma+num[i];
    }
    return suma/5;
}
int contarPar(int num[])
{
    int i=0;int par=0;
    for(i=0;i<5;i++)
    {
        if(num[i]%2==0)
        {
            par++;
        }
    }
    return par;
}
int main()
{
    ingreso (num);
    cpar=contarPar(num);
    prom= promedio(num);

    cout<<"Promedio"<<prom<<"\n";
    cout<<"Contador de par"<<cpar<<"\n";
    return 0;
}
