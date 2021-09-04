#ifndef CFun3G_H
#define CFun3G_H

#include<iostream>

class CFun3G
{
    public:
    double c0 = 3.0;
    double c1 = -9.0;
    double c2 = 0.0;
    double c3 = 1.0;

/// Solicita dados de Entrada

void Entrada(){
    std::cout << "Entre com dados da funcao 3G  y = c0+c1*x+c2*x*x+c3*x*x*x : \n";
    std::cout << "Entre com c0 : ";
    double c0 = 0.0;
    std::cin >> c0;
    std::cout << "Entre com c1 : ";
    double c1 = 0.0;
    std::cin >> c1;
    std::cout << "Entre com c2 : ";
    double c2 = 0.0;
    std::cin >> c2;
    std::cout << "Entre com c3 : ";
    double c3 = 0.0;
    std::cin >> c3;
    
    std::cout << "A funcao 3G y = " << c0 << "+" << c1<<"*x" << "+" << c2 << "*x*x" << "+" << c3 << "*x*x*x : " << "\n";
}
double f (double x) { return c0+c1*x+c2*x*x+c3*x*x*x;}

};
#endif
