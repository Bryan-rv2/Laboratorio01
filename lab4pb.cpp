#include <iostream>

using namespace std;

int main(){
    
    //Se inicializa el programa y la variable edad

    int edad = 0;
    cout <<"Ingrese la edad";
    cin >> edad;

    // Se hace la validacion de la edad

    if (edad < 5 ){
        cout <<"Entra gratis";

    }else if(edad <= 12){
        cout <<"Tendran que pagar 5 dolares";

    }else if(edad >  12){
        cout <<"Tendran que pagar 10 dolares";

    }else{
        cout <<"Ingrese una edad valida";
    }

    //Fin del programa
    
    cout <<"\nfin del programa";
    return 0;
}