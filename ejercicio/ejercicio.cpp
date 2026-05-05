#include <iostream>
using namespace std;

int main()
{
    int edad;
    cout<<"Ingrese la edad:"<<endl;
    cin>>edad;

    if (edad<0)
    {
        cout<<"ERROR DE DATOS, INTENTE DE NUEVO"<<endl;
    }
    else if (edad>=0 && 12>=edad)
    {
        cout<<"Eres un nino"<<endl;
    }
    else if (edad>=13 && 17>= edad)
    {
        cout<<"Eres un adolescente"<<endl;
    }
    else if (edad>=18 && 64>=edad)
    {
        cout<<"Eres un adulto"<<endl;
    }
    else
    {
        cout<<"Eres un anciano"<<endl;
    }
    return 0;
}