#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

/// CÃ¡lculo da raiz da funÃ§Ã£o de segundo grau usando o conceito de funÃ§Ãµes em C++

/// CÃ¡lculo da funÃ§Ã£o do segundo grau
// O uso de referÃªncia elimina a cÃ³pia das variÃ¡veis!
// O uso de inline elimina a chamada e retorno da funÃ§Ã£o,a mesma Ã© copiada onde Ã© chamada.

/// Variáveis globais
double c0 = 0.0;
double c1 = 0.0;
double c2 = 0.0;
double c3 = 0.0;


void F3G_Entrada()
{
    //Entrada de dados
    cout << "Entre com dados da funcao 3G y = c0 + c1*x+c2*x*x+c3*x*x*x :\n";
    cout << "Entre com c0 : ";
    double c0 = 0.0;
    cin >> c0;
    cout << "Entre com c1 : ";
    double c1 = 0.0;
    cin >> c1;
    cout << "Entre com c2 : ";
    double c2 = 0.0;
    cin >> c2;
    cout << "Entre com c3 : ";
    double c3 = 0.0;
    cin >> c3;
}
double inline F3G(double x)  // FunÃ§Ã£o do terceiro grau y(x) = c0+c1*x+c2*x*x+c3*x*x*x
{
    return (c0+c1*x+c2*x*x+c3*x*x*x);
}

// Variáveis globais
// Conceitos envolvendo o Método da Bissecção
double limInf = 0.0;
double limSup = 0.0;
double erro = 0.0;

void Bisseccao_Entrada()
{
     // Entrada de dados do metodo da Bisseccao
    cout << "Entre com os dados do Metodo da Bisseccao : \n";
    cout << "Entre com Limite Inferior : ";
    double limInf = 0.0;
    cin >> limInf; cin.get();
    cout << "Entre com Limite Superior : ";
    double limSup = 0.0;
    cin >> limSup; cin.get();
    cout << "Entre com o valor do erro : ";
    double erro = 0.001;
    cin >> erro; cin.get();
    cin.get();

}

/// CÃ¡lcula a raiz da funÃ§Ã£o pelo mÃ©todo da bissecÃ§Ã£o

double Raiz_Bisseccao(double(*ptr_funcao)(double))
{
	double a = limInf;
    double y_i = ptr_funcao(a);
    double b = limSup;
    double y_f = ptr_funcao(b);
    cout << ptr_funcao(a);
    cout << ptr_funcao(b);

    if(y_i*y_f>0){ cout << "Neste intervalo nao tem raiz: \n"; }
            
    if(y_i*y_f<0){cout << "Neste intervalo tem pelo menos uma raiz: \n";}

   

     int contador = 0;

     double x_raiz = 0.0;
     
         do{
         
             
            
             double x_m= (a+b)/2;
             cout << "iteracao " << contador << setprecision(5) << " - x_medio  = " << setprecision(10) << x_m << endl;

             

             
            double x = x_m;
            double y= ptr_funcao(x);

             if(y*y_i>0){ a=x_m; }

             if(y*y_f>0){ b = x_m;}
             
             contador ++;
             
             x_raiz = x_m;

             
             
         }while(abs(b-a)>erro);

         return x_raiz;

}

int main()
{  F3G_Entrada();                // Entrada de dados da função
   Bisseccao_Entrada();          // Entrada de dados da Bissecção
   double x_raiz1 = Raiz_Bisseccao(F3G);         // Cálculo da raiz
   cout << "\nArea = " << x_raiz1; // Saída de resultados
  
  // Abaixo calcula área da função sin(x) e cos(x) entre 0-pi
  // mostra que cálculo da raiz ficou genérico.

  limInf = 0;
  limSup = M_PI;

  
  cout << "\nArea sin(x) intervalo 0->pi = " << Raiz_Bisseccao(sin);
  cout << "\nArea cos(x) intervalo 0->pi = " << Raiz_Bisseccao(cos) << endl;
  cin.get();

return 0;
}
