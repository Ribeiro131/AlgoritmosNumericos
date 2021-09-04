#include<iostream>
#include<cmath>
#include<iomanip>
 using namespace std;

 int main()
 {
     double x = 0.0;
     double y = 0.0;
     double limInf = 0.0;
     double limSup = 1.0;
     double erro   = 0.001;
     double x_raiz = 0.0;
     int n;
     
     
     cout << "Digite o limite inferior: ";
     cin >> limInf;
     cout << "Digite o limite superior: ";
     cin >> limSup;
     cout << "Digite o numero maximo de iteracoes: ";
     cin >> n;
     cout << "Digite a estimativa de erro: ";
     cin >> erro;


            x=limInf;

            double y_i = x*x*x -9*x+3;

             x=limSup;

            double y_f = x*x*x-9*x+3;

            if(y_i*y_f>0)
            {
              cout << "Neste intervalo nao tem raiz: \n";
              
            }

            double a = limInf;
            double b = limSup;


     
     
         for (int i=1; i<n;i++)
         {
             
            
             double x_m= (a+b)/2;
             cout << "iteracao " << i << setprecision(5) << " - x_medio  = " << setprecision(10) << x_m << endl;

             x=x_m;

             

             y=x*x*x-9*x+3;

             if(y*y_i>0){ a=x_m; }

             if(y*y_f>0){ b = x_m;}

             if(abs(b-a)<erro){x_raiz = a;}
             
         }
         
         return 0;
     }

    
