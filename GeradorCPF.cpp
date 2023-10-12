#include <iostream>
#include <time.h>
using namespace std;

int main (){


    int cpf[9];
    int soma = 0;
    int x = 10;
    int dv1;
    int dv2;
    int total= 0;
    int z = 11;
    int QuantidadeCPF;
    srand(time(NULL));

    cout<<"Quantos CPF voce quer gerar?"<<endl;
    cin>> QuantidadeCPF;


    for (int y = 0 ; y < QuantidadeCPF; y++){
        for (int i = 1; i <= 9; i++){

            cpf[i] = rand() % 9;
            soma = soma  + cpf[i] * x;
            x --;

            cout << cpf[i];

        }

            if (soma % 11  < 2){
                dv1 = 0;
            }else if(soma % 11 > 2){
                dv1 = 11 - (soma % 11);
            }



            for (int k = 0; k <= 8; k++){

                cpf[k] = rand() % 9;
                total = total  + cpf[k] * z;
                x --;

            }
    
            total = total + dv1 * 2 ; 

            if (total % 11  < 2){
             dv2 = 0;
            }else if(total % 11 > 2){
                dv2 = 11 - (total % 11);
            }

            cout << "-" <<dv1 <<dv2 <<endl;
    }

    






    return 0;
}