#include <iostream>

using namespace std;

//4. Hacer una funci�n llamada �primo� que reciba un n�mero entero y devuelva 1
//si el n�mero es primo o cero si no lo es. Hacer un programa para ingresar
//n�meros. El lote corta cuando se ingresa un n�mero cero. Informar el
//promedio teniendo en cuenta s�lo los n�meros primos.

//FUNCION:
int primo(int num);

//MAIN:

int main()
{int n1,res,promedio,con=0,sumaPrimos=0;
cout<<"Ingrese un numero ";
cin>>n1;

while(n1!=0){

    res=primo(n1);
    if(res==1){sumaPrimos+=n1,con++;}

    cout<<"Ingrese un numero ";
    cin>>n1;
}
promedio=sumaPrimos/con;
cout<<endl<<"El promedio de los numeros primos es de "<<promedio<<endl;

    return 0;
}

//DECLARACION DE FUNCION:
int primo(int num){int con=0;
       for(int x=1;x<=num;x++){
               if(num%x==0){con++;}
       }
       if(con==2){return 1;}
       {return 2;}
}
