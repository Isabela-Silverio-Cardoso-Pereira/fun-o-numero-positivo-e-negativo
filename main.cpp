/******************************************************************************

Faça uma função que recebe um valor inteiro e 
verifica se o valor é positivo ou negativo. A função 
deve retornar um se for positivo e zero se for 
negativo.

*******************************************************************************/
#include <iostream>
using namespace std;
int numero(int n){
    if(n<=0){
        return 0;
    }else{
        
        return 1;
    }
}

int main()
{

int n;
cin >> n;
cout << numero(n);
    return 0;
}