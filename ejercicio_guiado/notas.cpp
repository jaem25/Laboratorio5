#include <iostream>
using namespace std;

int main()
{
    int nota=0;
    cout<<"Ingresa la nota: "<<endl;
    cin>>nota;

    if (nota >=90)
    {
        cout<<"Excelente, ¡aprobado con honores!"<<endl;
    }
    else if (nota>=60 && 89>=nota)
    {
        cout<<"Buen trabajo, ¡aprobado!"<<endl;
    }
    else
    {
        cout<<"Lo siento, no has aprobado. Necesitas estudiar mas"<<endl;
    }

    return 0;
}