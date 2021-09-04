#ifndef CRaizBisseccao_H
#define CRaizBisseccao_H

#include<iostream>
#include<iomanip>
#include<cmath>
#include "CFun3G.h"


class CRaizBisseccao
{
public:
double limInf = 0.0;
double limSup = 1.0;
double erro   = 0.0001;

void Entrada(){
     // Entrada de dados do metodo da Bisseccao
    std::cout << "Entre com os dados do Metodo da Bisseccao : \n";
    std::cout << "Entre com Limite Inferior : ";
    double limInf = 0.0;
    std::cin >> limInf; std::cin.get();
    std::cout << "Entre com Limite Superior : ";
    double limSup = 0.0;
    std::cin >> limSup; std::cin.get();
    std::cout << "Entre com o valor do erro : ";
    double erro = 0.0;
    std::cin >> erro; std::cin.get();
    std::cin.get();
}

double RaizBisseccao(CFun3G* funcao)
{
    double a = limInf;
    std::cout<< a ;
    double y_i = funcao->f(a);
    double b = limSup;
    double y_f = funcao->f(b);

    if(y_i*y_f>0){ std::cout << "\nNeste intervalo nao tem raiz: \n"; }
            
    if(y_i*y_f<0){std::cout << "\nNeste intervalo tem pelo menos uma raiz: \n";}

   

     int contador = 0;

     double x_raiz;
     
         do{
         
             
            
             double x_m= (a+b)/2;
             std::cout << "iteracao " << contador << std::setprecision(5) << " - x_medio  = " << std::setprecision(10) << x_m << std::endl;

             

             
            double x = x_m;
            double y= funcao->f(x);

             if(y*y_i>0){ a=x_m; }

             if(y*y_f>0){ b = x_m;}
             
             contador ++;
             
             x_raiz = x_m;

             
             
         }while(abs(b-a)>erro);
         
         return x_raiz;

        
}
};
#endif
