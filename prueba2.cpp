#include <iostream>
#include <math.h>
using namespace std;

class Sumatorias{
    private:
    int entero;
    public:
    void leer(Sumatorias *p, int n);
    void suma_pares(Sumatorias *p, int n);
    void promedio_pares(Sumatorias *p, int n);
    void suma_nones(Sumatorias *p, int n);
    void promedio_nones(Sumatorias *p, int n);
};

void Sumatorias::leer(Sumatorias *p, int n){
    for(int t=0; t<n; t++){
       cout<<"Ingresa un Numero Entero: ";cin>>p[t].entero;

    }
}

void Sumatorias::suma_pares(Sumatorias *p, int n){
    int a=0;
    for(int t=0; t<n; t++){
        if(p[t].entero%2==0){
            a+=p[t].entero;
        }
    }
    cout<<"\n La suma de los numeros pares es: "<<a<<endl;
};

void Sumatorias::promedio_pares(Sumatorias *p, int n){
    float b=0;
    int c=0;

    for(int t=0; t<n; t++){
        if(p[t].entero%2==0){
            c++; //INCREMENTE EL CONTADOR C PARA TENER EL LA CANTIDAD DE LOS NUMEROS QUE SON PARES
            b+=p[t].entero;
        }
    }
       cout<<"\n El promedio de los numeros pares es: "<<b/c<<endl;
}


void Sumatorias::suma_nones(Sumatorias *p, int n){
    float d=0;
    for (int t=0; t<n; t++){
        if(p[t].entero%2!=0){
            d+=p[t].entero;
        }
    }   cout<<"\n La suma de los numeros nones es: "<<d<<endl;

}


void Sumatorias::promedio_nones(Sumatorias *p, int n){
    float e=0;
    int f=0;

    for(int t=0; t<n; t++){
        if(p[t].entero%2!=0){
            f++; // INCREMENTE EL CONTADOR PARA TENER LOS NUMEROS NONES
            e+=p[t].entero;
        }
    }
       cout<<"\n El promedio de los numeros nones es: "<<e/f<<endl;
}

int main()
{   int n;
    cout<<"Ingresa la Cantidad de Numeros a Capturar: ";cin>>n;cout<<"\n";
    Sumatorias *E;
    E=new Sumatorias[n];
    E->leer(E,n);
    E->suma_pares(E,n);
    E->promedio_pares(E,n);
    E->suma_nones(E,n);
    E->promedio_nones(E,n);


    delete[]E;
    return 0;
}
