#include<iostream>
#include "CFun3G.h"
#include "CRaizBisseccao.h"

using namespace std;

int main()
{
    CFun3G funcao3G;
    funcao3G.Entrada();

    CRaizBisseccao bisseccao;
    bisseccao.Entrada();

    // Cálculo da raiz

    cout << "\nRaiz = " << bisseccao.RaizBisseccao(&funcao3G) << "\n";
    cin.get();
    return 0;
}
