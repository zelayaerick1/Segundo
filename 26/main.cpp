#include <iostream>


using namespace std;
int numero[4];

void ingreso (int numero[])
{
    int i=0;
    for (i=0;i<5;i++)

{


    do
    {
        cout<<"Ingresar Numero ["<<i<<"]";
        cin>>numero[i];
    }while((numero[i]<=0)or (numero[i]>10));
}
}
int factorial (int num)
{
    int i,fac=1;
    for (i=0;i<5;i++)
    {
        fac=fac*i;
    }
    return fac;
}
void presentarFaactorial(int numero[])
{
    int i=0;
    int facto;
    for (i=0;i<5;i++)
    {
        facto=factorial(numero[i]);
        cout<<"Factorial de "<<numero[i]<<" es "<<facto<<"\n";
    }
}
int main()
{   ingreso (numero);
    presentarFaactorial(numero);

    return 0;
}
