#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;
const int lin=4;
const int col=3;

int num[lin][col];

void ingreso (int num[lin][col])

{
    for (int l=0; l<lin; l++)
    {
    for (int c=0;c<lin; c++)
    {
        num [l][c]= 50 + rand()%(100 -1);;
    }
    }
}

void ingreso2 (int num[lin][col])

{
    for (int l=0;l<lin -1; l++)
    {
        for(int c=0;c<col;c++)
        {
            cout<<"Numero["<<l<<"] ["<<c<<"]..";
            cin>>num[1][c];
        }
    }
}

void SumarColumnas (int num[lin][col])
{   int ul=lin-1;
    for (int c=0;c<col; c++)
    {
        for (int l=0;l<lin-1;l++)
        {
            num[ul][c] += num[l][c];
        }

    }
}

void Presentar (int num[lin][col])
{
    for (int l=0;l<lin; l++)
    {
        for (int c=0; c<col;c++)
        {
            cout<<num[l][c]<<"  ";
        }
        cout<<"\n";
    }
}

int main()
{
    ingreso(num);
    Presentar(num);
    SumarColumnas(num);
    return 0;
}
